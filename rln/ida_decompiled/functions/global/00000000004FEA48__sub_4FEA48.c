/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FEA48
 * Mangled: sub_4FEA48
 * Demangled: sub_4FEA48
 *
 * Callers: 3
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F2368  sub_4F2368
 *
 * Callees: 3
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *
 * Referenced strings: 3
 *   insn=0x00000000004FEA60 string=0x00000000004FEA64 "h"
 *   insn=0x00000000004FEA6C string=0x00000000004FEAA4 "u""
 *   insn=0x00000000004FEA78 string=0x00000000004FEA7C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FEA48(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // w8
  unsigned int *v5; // x21

  sub_4FE488(a1, a2);
  if ( *a2 != 12 )
  {
    v5 = a2 + 2;
    goto LABEL_6;
  }
  v5 = a2 + 2;
  v4 = a2[2];
  if ( a2[4] != a2[5] )
  {
    if ( (int)v4 >= *(unsigned __int8 *)(a1 + 74) )
    {
      sub_4FE674(a1, a2, v4);
      return *v5;
    }
LABEL_6:
    sub_4FE5C0(a1, a2);
    return *v5;
  }
  return v4;
}

