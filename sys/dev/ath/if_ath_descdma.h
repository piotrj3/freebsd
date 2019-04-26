/*-
 * Copyright (c) 2015 Adrian Chadd <adrian@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer,
 *    without modification.
 * 2. Redistributions in binary form must reproduce at minimum a disclaimer
 *    similar to the "NO WARRANTY" disclaimer below ("Disclaimer") and any
 *    redistribution must be conditioned upon including a substantially
 *    similar Disclaimer requirement for further binary redistribution.
 *
 * NO WARRANTY
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF NONINFRINGEMENT, MERCHANTIBILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGES.
 *
 * $FreeBSD: releng/12.0/sys/dev/ath/if_ath_descdma.h 291233 2015-11-24 03:42:58Z adrian $
 */
#ifndef	__IF_ATH_DESCDMA_H__
#define	__IF_ATH_DESCDMA_H__

extern  int ath_descdma_alloc_desc(struct ath_softc *sc,
	    struct ath_descdma *dd, ath_bufhead *head, const char *name,
	    int ds_size, int ndesc);
extern  int ath_descdma_setup(struct ath_softc *sc, struct ath_descdma *dd,
	    ath_bufhead *head, const char *name, int ds_size, int nbuf,
	    int ndesc);
extern  int ath_descdma_setup_rx_edma(struct ath_softc *sc,
	    struct ath_descdma *dd, ath_bufhead *head, const char *name,
	    int nbuf, int desclen);
extern  void ath_descdma_cleanup(struct ath_softc *sc,
	    struct ath_descdma *dd, ath_bufhead *head);

#endif
