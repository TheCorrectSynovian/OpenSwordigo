/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FEACC
 * Mangled: sub_4FEACC
 * Demangled: sub_4FEACC
 *
 * Callers: 1
 *   0x00000000004F2128  sub_4F2128
 *
 * Callees: 3
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FE674  sub_4FE674
 *
 * Referenced strings: 6
 *   insn=0x00000000004FEADC string=0x00000000004FEAE0 "uZB)"
 *   insn=0x00000000004FEAE4 string=0x00000000004FEAE8 "h"
 *   insn=0x00000000004FEAF0 string=0x00000000004FEAF4 "h"
 *   insn=0x00000000004FEAFC string=0x00000000004FEB00 "h&B)"
 *   insn=0x00000000004FEB08 string=0x00000000004FEB1C "b\n@"
 *   insn=0x00000000004FEB20 string=0x00000000004FEB24 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall sub_4FEACC(__int64 a1, _DWORD *a2)
{
  int v3; // w21
  int v4; // w22
  double result; // d0
  signed int v7; // w2

  v3 = a2[4];
  v4 = a2[5];
  sub_4FE488(a1, a2);
  if ( v3 != v4 )
  {
    if ( *a2 == 12 )
    {
      if ( a2[4] == a2[5] )
        return result;
      v7 = a2[2];
      if ( v7 >= *(unsigned __int8 *)(a1 + 74) )
        return sub_4FE674(a1, a2, v7);
    }
    sub_4FE5C0(a1, a2);
  }
  return result;
}

