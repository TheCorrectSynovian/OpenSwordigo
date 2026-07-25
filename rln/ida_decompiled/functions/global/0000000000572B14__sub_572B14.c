/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572B14
 * Mangled: sub_572B14
 * Demangled: sub_572B14
 *
 * Callers: 3
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005762BC  sub_5762BC
 *   0x00000000005764B0  sub_5764B0
 *
 * Callees: 1
 *   0x00000000005728F4  sub_5728F4
 *
 * Referenced strings: 17
 *   insn=0x0000000000572B24 string=0x0000000000572B28 "#"
 *   insn=0x0000000000572B30 string=0x0000000000572B34 "a"
 *   insn=0x0000000000572B30 string=0x0000000000572BA0 """
 *   insn=0x0000000000572B34 string=0x0000000000572B38 "!"
 *   insn=0x0000000000572B38 string=0x0000000000572B3C "?$"
 *   insn=0x0000000000572B50 string=0x0000000000572B54 """
 *   insn=0x0000000000572B54 string=0x0000000000572B58 "A"
 *   insn=0x0000000000572B58 string=0x0000000000572B5C "!"
 *   insn=0x0000000000572B60 string=0x0000000000572B64 "!"
 *   insn=0x0000000000572B64 string=0x0000000000572B68 "b"
 *   insn=0x0000000000572B68 string=0x0000000000572B6C "B"
 *   insn=0x0000000000572B6C string=0x0000000000572B70 "_$"
 *   insn=0x0000000000572B74 string=0x0000000000572B78 "?"
 *   insn=0x0000000000572B84 string=0x0000000000572B88 "["
 *   insn=0x0000000000572B8C string=0x0000000000572B90 "a&"
 *   insn=0x0000000000572BA4 string=0x0000000000572BA8 "%"
 *   insn=0x0000000000572BA8 string=0x0000000000572BAC "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_572B14(__int64 a1)
{
  int v1; // w5
  unsigned __int8 *v2; // x1
  int v3; // w3
  __int64 v4; // x1
  char *v5; // x4
  __int64 v6; // x1
  char v7; // t1
  __int64 result; // x0

  v1 = 0;
  v2 = *(unsigned __int8 **)(a1 + 24);
  v3 = *v2;
  if ( v3 == 110 )
  {
    *(_QWORD *)(a1 + 24) = v2 + 1;
    v1 = 1;
    LOBYTE(v3) = v2[1];
  }
  if ( (unsigned __int8)(v3 - 48) > 9u )
    return 0;
  v4 = 0;
  v5 = (char *)(*(_QWORD *)(a1 + 24) + 1LL);
  do
  {
    *(_QWORD *)(a1 + 24) = v5;
    v6 = 10 * v4 + (unsigned __int8)v3;
    v7 = *v5++;
    LOBYTE(v3) = v7;
    v4 = v6 - 48;
  }
  while ( (unsigned __int8)(v7 - 48) <= 9u );
  if ( v4 <= 0 || v1 )
    return 0;
  result = sub_5728F4(a1, v4);
  *(_QWORD *)(a1 + 72) = result;
  return result;
}

