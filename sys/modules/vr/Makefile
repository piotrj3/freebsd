# $FreeBSD: releng/12.0/sys/modules/vr/Makefile 314651 2017-03-04 10:10:17Z ngie $

.PATH: ${SRCTOP}/sys/dev/vr

KMOD=	if_vr
SRCS=	if_vr.c device_if.h bus_if.h pci_if.h
SRCS+=	miibus_if.h

.include <bsd.kmod.mk>
