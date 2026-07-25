/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544B60
 * Mangled: sub_544B60
 * Demangled: sub_544B60
 *
 * Callers: 4
 *   0x0000000000547CF0  sub_547CF0
 *   0x0000000000548A64  sub_548A64
 *   0x000000000054933C  sub_54933C
 *   0x0000000000549D84  sub_549D84
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 4
 *   insn=0x0000000000544B68 string=0x0000000000544B6C "7"
 *   insn=0x0000000000544BB8 string=0x0000000000544BEC "w"
 *   insn=0x0000000000544BD4 string=0x0000000000544BD8 "`"
 *   insn=0x0000000000544BF0 string=0x0000000000544BF4 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544B60(const wchar_t *a1, __int64 a2)
{
  __int64 v2; // x23
  size_t v3; // x20
  __int64 v5; // x0
  __int64 v6; // x19
  __int64 v7; // x22
  __int64 result; // x0

  v2 = a2 - (_QWORD)a1;
  v3 = (a2 - (__int64)a1) >> 2;
  v5 = sub_56C5B8(v3, 0);
  v6 = v5;
  v7 = v5 + 24;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v5 + 24) = *a1;
    if ( (__int64 *)v5 == &qword_6FD300 )
      return v7;
  }
  else
  {
    wmemcpy((wchar_t *)(v5 + 24), a1, v3);
    if ( (__int64 *)v6 == &qword_6FD300 )
      return v7;
  }
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = v3;
  result = v7;
  *(_DWORD *)(v6 + v2 + 24) = 0;
  return result;
}

