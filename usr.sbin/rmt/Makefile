#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: releng/12.0/usr.sbin/rmt/Makefile 335804 2018-06-29 21:15:17Z arichardson $

PROG=	rmt
MAN=	rmt.8

# called from /usr/src/etc/Makefile
etc-rmt:
	rm -f ${DESTDIR}/etc/rmt
	${INSTALL_RSYMLINK} ..${BINDIR}/rmt ${DESTDIR}/etc/rmt

.include <bsd.prog.mk>
