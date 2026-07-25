/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000525EC4
 * Mangled: sub_525EC4
 * Demangled: sub_525EC4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000528E58  sub_528E58
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 4
 *   insn=0x0000000000525EDC string=0x0000000000525EE0 "`"
 *   insn=0x0000000000525EEC string=0x0000000000525EF0 "A"
 *   insn=0x0000000000525EF4 string=0x0000000000525EF8 "c(@"
 *   insn=0x0000000000525EF8 string=0x0000000000525EFC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_525EC4(_QWORD *a1)
{
  __int64 v1; // x0

  v1 = *(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 240);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, 10);
    JUMPOUT(0x529F14);
  }
  sub_5652C8(0);
}

