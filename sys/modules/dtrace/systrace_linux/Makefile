# $FreeBSD: releng/12.0/sys/modules/dtrace/systrace_linux/Makefile 314651 2017-03-04 10:10:17Z ngie $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/systrace

KMOD=		systrace_linux

SRCS=		systrace.c
SRCS+=		vnode_if.h

CFLAGS+=	-I${SYSDIR}/cddl/compat/opensolaris \
		-I${SYSDIR}/cddl/contrib/opensolaris/uts/common \
		-I${SYSDIR} -DLINUX_SYSTRACE

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
