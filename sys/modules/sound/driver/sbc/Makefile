# $FreeBSD: releng/12.0/sys/modules/sound/driver/sbc/Makefile 314651 2017-03-04 10:10:17Z ngie $

.PATH: ${SRCTOP}/sys/dev/sound/isa

KMOD=	snd_sbc
SRCS=	device_if.h bus_if.h isa_if.h pci_if.h
SRCS+=	sbc.c

.include <bsd.kmod.mk>
