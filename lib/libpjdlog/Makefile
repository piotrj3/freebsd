#
# (c) 2012 WHEEL Systems Sp. z o.o.
#
.include <bsd.own.mk>

LIB=	pjdlog

SRCS=	pjdlog.c

CFLAGS+=-fPIC

CFLAGS+=-I${.CURDIR}

CFLAGS+=-I${.CURDIR}/../libnv

CFLAGS+=-I${.CURDIR}/../librobustio
LDADD+=	${.CURDIR}/../librobustio/librobustio.a

LDADD+=	${SYSLIBS}/libc.a

WARNS=	6

.include <bsd.lib.mk>
