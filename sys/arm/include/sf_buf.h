/*-
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * Copyright (c) 2003 Alan L. Cox <alc@cs.rice.edu>
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
 * $FreeBSD: releng/12.0/sys/arm/include/sf_buf.h 326258 2017-11-27 15:04:10Z pfg $
 */

#ifndef _MACHINE_SF_BUF_H_
#define _MACHINE_SF_BUF_H_

static inline void
sf_buf_map(struct sf_buf *sf, int flags)
{

#if __ARM_ARCH >= 6
	pmap_qenter(sf->kva, &(sf->m), 1);
#else
	pmap_kenter(sf->kva, VM_PAGE_TO_PHYS(sf->m));
#endif
}

static inline int
sf_buf_unmap(struct sf_buf *sf)
{

#if __ARM_ARCH >= 6
	pmap_qremove(sf->kva, 1);
#else
	pmap_kremove(sf->kva);
#endif
	return (1);
}
#endif /* !_MACHINE_SF_BUF_H_ */
