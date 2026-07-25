/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051558C
 * Mangled: _ZNK11CPVRTString6substrEmm
 * Demangled: CPVRTString::substr(ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 14
 *   insn=0x00000000005155A4 string=0x00000000005155A8 ""
 *   insn=0x00000000005155A8 string=0x00000000005155AC "_"
 *   insn=0x00000000005155AC string=0x00000000005155B0 "A"
 *   insn=0x00000000005155B0 string=0x00000000005155B4 "h~"
 *   insn=0x00000000005155B4 string=0x00000000005155B8 "\t"
 *   insn=0x00000000005155B8 string=0x00000000005155BC ""
 *   insn=0x00000000005155C8 string=0x00000000005155CC "6"
 *   insn=0x00000000005155CC string=0x00000000005155D0 "("
 *   insn=0x00000000005155D0 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005155DC string=0x00000000005155E0 "u^"
 *   insn=0x00000000005155E0 string=0x00000000005155E4 "s"
 *   insn=0x00000000005155E4 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000005155E8 string=0x00000000005155EC "T"
 *   insn=0x00000000005155EC string=0x00000000005155F0 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__usercall CPVRTString::substr@<X0>(CPVRTString *this@<X0>, __int64 a2@<X1>, size_t a3@<X2>, _QWORD *a4@<X8>)
{
  size_t v5; // x21
  const void *v6; // x22
  void *v7; // x20
  void *result; // x0

  *a4 = off_6D8E38;
  a4[1] = 0;
  if ( a3 == -1 )
    v5 = *((_QWORD *)this + 2) - a2;
  else
    v5 = a3;
  v6 = (const void *)(*((_QWORD *)this + 1) + a2);
  v7 = malloc(v5 + 1);
  a4[2] = v5;
  a4[3] = v5 + 1;
  result = memmove(v7, v6, v5);
  *((_BYTE *)v7 + v5) = 0;
  if ( v7 )
    a4[1] = v7;
  return result;
}

