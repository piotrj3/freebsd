/*-
 * Copyright (c) 2011, 2012 The FreeBSD Foundation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: releng/12.0/include/xlocale/_strings.h 266865 2014-05-30 01:09:07Z pfg $
 */

#ifndef _LOCALE_T_DEFINED
#define _LOCALE_T_DEFINED
typedef struct	_xlocale *locale_t;
#endif

/*
 * This file is included from both strings.h and xlocale.h.  We need to expose
 * the declarations unconditionally if we are included from xlocale.h, but only
 * if we are in POSIX2008 mode if included from string.h.
 */

#ifndef _XLOCALE_STRINGS1_H
#define _XLOCALE_STRINGS1_H

/*
 * POSIX2008 functions
 */
int	 strcasecmp_l(const char *, const char *, locale_t);
int	 strncasecmp_l(const char *, const char *, size_t, locale_t);
#endif /* _XLOCALE_STRINGS1_H */
