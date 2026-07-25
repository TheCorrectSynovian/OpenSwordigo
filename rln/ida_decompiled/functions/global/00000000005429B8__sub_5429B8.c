/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005429B8
 * Mangled: sub_5429B8
 * Demangled: sub_5429B8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000541E9C  sub_541E9C
 *   0x0000000000542648  sub_542648
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 7
 *   insn=0x00000000005429CC string=0x00000000005429D0 "`"
 *   insn=0x00000000005429D4 string=0x00000000005429D8 "`"
 *   insn=0x00000000005429D8 string=0x0000000000542A04 "1"
 *   insn=0x00000000005429DC string=0x00000000005429E0 "A"
 *   insn=0x00000000005429E0 string=0x00000000005429E4 "B(@"
 *   insn=0x00000000005429E4 string=0x00000000005429E8 "@"
 *   insn=0x00000000005429FC string=0x0000000000542A00 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_5429B8(__int64 *a1)
{
  __int64 v2; // x0
  unsigned int v3; // w0
  __int64 *v4; // x0

  v2 = *(__int64 *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 240);
  if ( !v2 )
    sub_5652C8(0);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, 10);
  v4 = sub_542648(a1, v3);
  return sub_541E9C((char *)v4);
}

