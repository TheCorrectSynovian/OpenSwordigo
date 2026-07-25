/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDBA0
 * Mangled: sub_4FDBA0
 * Demangled: sub_4FDBA0
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F28AC  sub_4F28AC
 *
 * Callees: 2
 *   0x00000000005001E8  sub_5001E8
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 13
 *   insn=0x00000000004FDBB8 string=0x00000000004FDBBC "\t"
 *   insn=0x00000000004FDBDC string=0x00000000004FDBE0 " "
 *   insn=0x00000000004FDBF0 string=0x00000000004FDBF4 "\n"
 *   insn=0x00000000004FDC04 string=0x00000000004FDC08 ",9Hm"
 *   insn=0x00000000004FDC08 string=0x00000000004FDC0C "m"
 *   insn=0x00000000004FDC10 string=0x00000000004FDC14 "L"
 *   insn=0x00000000004FDC18 string=0x00000000004FDC1C "!"
 *   insn=0x00000000004FDC1C string=0x00000000004FDC20 "w}@"
 *   insn=0x00000000004FDC2C string=0x00000000004FDC30 "?"
 *   insn=0x00000000004FDC3C string=0x00000000004FDC44 "I"
 *   insn=0x00000000004FDC3C string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FDC4C string=0x00000000004FDC50 ")9"
 *   insn=0x00000000004FDC50 string=0x00000000004FDC54 "\t5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FDBA0(__int64 a1)
{
  unsigned int v2; // w22
  unsigned int v3; // w19
  int v4; // w12
  __int64 v5; // x21
  int v6; // w11
  unsigned int v7; // w8
  int v8; // w22
  int v9; // w9

  v2 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = -1;
  v3 = sub_5001E8();
  if ( v2 != -1 )
  {
    if ( v3 == -1 )
    {
      return v2;
    }
    else
    {
      v4 = v3;
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      do
      {
        v6 = v4;
        v7 = *(_DWORD *)(v5 + 4LL * v4);
        if ( v7 >> 14 == 131070 )
          v4 = -1;
        else
          v4 += (v7 >> 14) - 0x1FFFF + 1;
      }
      while ( v4 != -1 );
      v8 = v2 + ~v6;
      if ( v8 >= 0 )
        v9 = v8;
      else
        v9 = -v8;
      if ( v9 >= 0x20000 )
        sub_500968(*(_QWORD *)(a1 + 24), "control structure too long");
      *(_DWORD *)(v5 + 4LL * v6) = ((v8 << 14) + 2147467264) & 0xFFFFC000 | v7 & 0x3FFF;
    }
  }
  return v3;
}

