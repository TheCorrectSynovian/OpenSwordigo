/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571950
 * Mangled: sub_571950
 * Demangled: sub_571950
 *
 * Callers: 11
 *   0x0000000000547234  sub_547234
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000547574  sub_547574
 *   0x0000000000547764  sub_547764
 *   0x000000000056148C  sub_56148C
 *   0x00000000005615C4  sub_5615C4
 *   0x0000000000561714  sub_561714
 *   0x00000000005618B4  sub_5618B4
 *   0x0000000000561A68  sub_561A68
 *   0x0000000000561C08  sub_561C08
 *   0x00000000005717C4  sub_5717C4
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x0000000000571954 string=0x0000000000571958 "B"
 *   insn=0x0000000000571958 string=0x000000000057195C "#"
 *   insn=0x0000000000571960 string=0x0000000000571964 """
 *   insn=0x0000000000571968 string=0x000000000057196C """
 *   insn=0x0000000000571970 string=0x0000000000571974 "B"
 *   insn=0x0000000000571974 string=0x0000000000571978 "#"
 *   insn=0x000000000057197C string=0x0000000000571980 "C"
 *   insn=0x0000000000571980 string=0x0000000000571984 """
 *   insn=0x0000000000571988 string=0x000000000057198C "B"
 *   insn=0x000000000057198C string=0x0000000000571990 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_571950(__int64 *result, __int64 *a2)
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

