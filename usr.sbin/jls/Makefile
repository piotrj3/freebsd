# $FreeBSD: releng/12.0/usr.sbin/jls/Makefile 298107 2016-04-16 07:45:30Z gjb $

.include <src.opts.mk>

PROG=	jls
MAN=	jls.8
LIBADD=	jail xo

PACKAGE=jail

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

.include <bsd.prog.mk>
