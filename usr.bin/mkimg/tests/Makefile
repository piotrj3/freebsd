# $FreeBSD: releng/12.0/usr.bin/mkimg/tests/Makefile 319294 2017-05-31 07:49:49Z ngie $

.PATH:	${.CURDIR}

PACKAGE=	tests

_REBASE_SCRIPT=	mkimg_test
ATF_TESTS_SH=	${_REBASE_SCRIPT}

SOURCES!=	cd ${.CURDIR}; echo *.uu
${PACKAGE}FILES+=		${SOURCES:S,.gz.uu,,g}

.for f in ${${PACKAGE}FILES}
$f: $f.gz.uu
	uudecode -p ${.ALLSRC} | gunzip -c > ${.TARGET}
.endfor

CLEANFILES+=	${${PACKAGE}FILES}}

rebase: .PHONY
	(cd ${.CURDIR}; atf-sh ${_REBASE_SCRIPT}.sh rebase)

.include <bsd.test.mk>
