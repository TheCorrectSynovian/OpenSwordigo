/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571CAC
 * Mangled: sub_571CAC
 * Demangled: sub_571CAC
 *
 * Callers: 10
 *   0x0000000000549540  sub_549540
 *   0x0000000000549880  sub_549880
 *   0x0000000000549A70  sub_549A70
 *   0x00000000005637F4  sub_5637F4
 *   0x000000000056392C  sub_56392C
 *   0x0000000000564494  sub_564494
 *   0x0000000000564634  sub_564634
 *   0x0000000000564D3C  sub_564D3C
 *   0x0000000000564EDC  sub_564EDC
 *   0x0000000000571B20  sub_571B20
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x0000000000571CB0 string=0x0000000000571CB4 "B"
 *   insn=0x0000000000571CB4 string=0x0000000000571CB8 "#"
 *   insn=0x0000000000571CBC string=0x0000000000571CC0 """
 *   insn=0x0000000000571CC4 string=0x0000000000571CC8 """
 *   insn=0x0000000000571CCC string=0x0000000000571CD0 "B"
 *   insn=0x0000000000571CD0 string=0x0000000000571CD4 "#"
 *   insn=0x0000000000571CD8 string=0x0000000000571CDC "C"
 *   insn=0x0000000000571CDC string=0x0000000000571CE0 """
 *   insn=0x0000000000571CE4 string=0x0000000000571CE8 "B"
 *   insn=0x0000000000571CE8 string=0x0000000000571CEC "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_571CAC(__int64 *result, __int64 *a2)
{
  __int64 v2; // x2
  __int64 v3; // x2
  __int64 v4; // x2

  v2 = *a2;
  *result = *a2;
  *(__int64 *)((char *)result + *(_QWORD *)(v2 - 24)) = a2[5];
  result[2] = a2[6];
  v3 = a2[3];
  result[2] = v3;
  *(__int64 *)((char *)result + *(_QWORD *)(v3 - 24) + 16) = a2[4];
  v4 = a2[1];
  *result = v4;
  *(__int64 *)((char *)result + *(_QWORD *)(v4 - 24)) = a2[2];
  return result;
}

