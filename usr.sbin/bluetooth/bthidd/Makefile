# $Id: Makefile,v 1.6 2006/09/07 21:36:55 max Exp $
# $FreeBSD: releng/12.0/usr.sbin/bluetooth/bthidd/Makefile 333113 2018-04-30 12:16:54Z wulf $

PROG=		bthidd
MAN=		bthidd.8
#		bthidd.conf.5
SRCS=		bthidd.c btuinput.c client.c hid.c kbd.c lexer.l parser.y \
		server.c session.c

CFLAGS+=	-I${.CURDIR}

LIBADD+=	bluetooth usbhid

NO_WMISSING_VARIABLE_DECLARATIONS=

.include <bsd.prog.mk>
