/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDE2C
 * Mangled: sub_4FDE2C
 * Demangled: sub_4FDE2C
 *
 * Callers: 3
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F0E8C  sub_4F0E8C
 *   0x00000000004F28AC  sub_4F28AC
 *
 * Callees: 1
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 18
 *   insn=0x00000000004FDE2C string=0x00000000004FDE30 "?"
 *   insn=0x00000000004FDE30 string=0x00000000004FDE34 "4"
 *   insn=0x00000000004FDE38 string=0x00000000004FDE3C "\t8@"
 *   insn=0x00000000004FDE3C string=0x00000000004FDE40 "?"
 *   insn=0x00000000004FDE54 string=0x00000000004FDE58 ""
 *   insn=0x00000000004FDE5C string=0x00000000004FDE60 ""
 *   insn=0x00000000004FDE68 string=0x00000000004FDE6C "h"
 *   insn=0x00000000004FDE6C string=0x00000000004FDE70 "I9H"
 *   insn=0x00000000004FDE74 string=0x00000000004FDE78 "?"
 *   insn=0x00000000004FDE78 string=0x00000000004FDE7C "i"
 *   insn=0x00000000004FDE7C string=0x00000000004FDE80 "?"
 *   insn=0x00000000004FDE80 string=0x00000000004FDE84 "!"
 *   insn=0x00000000004FDE8C string=0x00000000004FDE90 "5"
 *   insn=0x00000000004FDE94 string=0x00000000004FDE98 "?"
 *   insn=0x00000000004FDEA4 string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FDEB4 string=0x00000000004FDEB8 ")9"
 *   insn=0x00000000004FDEB8 string=0x00000000004FDEBC "\t5"
 *   insn=0x00000000004FDEBC string=0x00000000004FDEC0 "iz4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FDE2C(__int64 result, int a2)
{
  int v2; // w9
  __int64 v3; // x19
  int v4; // w12
  unsigned int v5; // w8
  int v6; // w21
  int v7; // w9

  *(_DWORD *)(result + 52) = *(_DWORD *)(result + 48);
  if ( a2 != -1 )
  {
    v2 = *(_DWORD *)(result + 56);
    if ( v2 == -1 )
    {
      *(_DWORD *)(result + 56) = a2;
    }
    else
    {
      v3 = *(_QWORD *)(*(_QWORD *)result + 24LL);
      do
      {
        v4 = v2;
        v5 = *(_DWORD *)(v3 + 4LL * v2);
        if ( v5 >> 14 == 131070 )
          v2 = -1;
        else
          v2 += (v5 >> 14) - 0x1FFFF + 1;
      }
      while ( v2 != -1 );
      v6 = ~v4 + a2;
      if ( v6 >= 0 )
        v7 = ~v4 + a2;
      else
        v7 = -v6;
      if ( v7 >= 0x20000 )
        sub_500968(*(_QWORD *)(result + 24), "control structure too long");
      *(_DWORD *)(v3 + 4LL * v4) = ((v6 << 14) + 2147467264) & 0xFFFFC000 | v5 & 0x3FFF;
    }
  }
  return result;
}

