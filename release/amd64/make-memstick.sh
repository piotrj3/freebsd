#!/bin/sh
#
# This script generates a "memstick image" (image that can be copied to a
# USB memory stick) from a directory tree.  Note that the script does not
# clean up after itself very well for error conditions on purpose so the
# problem can be diagnosed (full filesystem most likely but ...).
#
# Usage: make-memstick.sh <directory tree> <image filename>
#
# $FreeBSD: releng/12.0/release/amd64/make-memstick.sh 334337 2018-05-29 15:06:13Z emaste $
#

set -e

PATH=/bin:/usr/bin:/sbin:/usr/sbin
export PATH

if [ $# -ne 2 ]; then
	echo "make-memstick.sh /path/to/directory /path/to/image/file"
	exit 1
fi

if [ ! -d ${1} ]; then
	echo "${1} must be a directory"
	exit 1
fi

if [ -e ${2} ]; then
	echo "won't overwrite ${2}"
	exit 1
fi

echo '/dev/ufs/FreeBSD_Install / ufs ro,noatime 1 1' > ${1}/etc/fstab
echo 'root_rw_mount="NO"' > ${1}/etc/rc.conf.local
makefs -B little -o label=FreeBSD_Install -o version=2 ${2}.part ${1}
rm ${1}/etc/fstab
rm ${1}/etc/rc.conf.local

mkimg -s mbr \
    -b ${1}/boot/mbr \
    -p efi:=${1}/boot/boot1.efifat \
    -p freebsd:-"mkimg -s bsd -b ${1}/boot/boot -p freebsd-ufs:=${2}.part" \
    -a 2 \
    -o ${2}
rm ${2}.part

