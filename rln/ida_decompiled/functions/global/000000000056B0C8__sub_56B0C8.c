/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B0C8
 * Mangled: sub_56B0C8
 * Demangled: sub_56B0C8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002031D0  .strerror
 *   0x0000000000566BB8  sub_566BB8
 *
 * Referenced strings: 1
 *   insn=0x000000000056B0D8 string=0x000000000056B0DC "=`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_56B0C8@<X0>(int a1@<W1>, _QWORD *a2@<X8>)
{
  char *v3; // x0

  v3 = strerror(a1);
  sub_566BB8(a2, v3);
  return a2;
}

