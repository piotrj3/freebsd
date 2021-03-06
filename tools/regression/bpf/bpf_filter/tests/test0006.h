/*-
 * Test 0006:	BPF_LD+BPF_B+BPF_ABS
 *
 * $FreeBSD: releng/12.0/tools/regression/bpf/bpf_filter/tests/test0006.h 307708 2016-10-21 06:56:30Z jkim $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_B+BPF_ABS, 1),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x01, 0x23,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0x23;

/* Expected signal */
static int	expect_signal =	0;
