/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDD68
 * Mangled: sub_4FDD68
 * Demangled: sub_4FDD68
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F28AC  sub_4F28AC
 *
 * Callees: 2
 *   0x00000000004FDEDC  sub_4FDEDC
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 19
 *   insn=0x00000000004FDD6C string=0x00000000004FDD70 "A"
 *   insn=0x00000000004FDD70 string=0x00000000004FDD74 "?"
 *   insn=0x00000000004FDD7C string=0x00000000004FDD80 "\t8@"
 *   insn=0x00000000004FDD80 string=0x00000000004FDD84 "?"
 *   insn=0x00000000004FDD98 string=0x00000000004FDD9C ""
 *   insn=0x00000000004FDDA0 string=0x00000000004FDDA4 ""
 *   insn=0x00000000004FDDAC string=0x00000000004FDDB0 "h"
 *   insn=0x00000000004FDDB0 string=0x00000000004FDDB4 "I9H"
 *   insn=0x00000000004FDDB8 string=0x00000000004FDDBC "?"
 *   insn=0x00000000004FDDBC string=0x00000000004FDDC0 "i"
 *   insn=0x00000000004FDDC0 string=0x00000000004FDDC4 "?"
 *   insn=0x00000000004FDDC4 string=0x00000000004FDDC8 "!"
 *   insn=0x00000000004FDDD0 string=0x00000000004FDDD4 "5"
 *   insn=0x00000000004FDDD8 string=0x00000000004FDDDC "?"
 *   insn=0x00000000004FDDE8 string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FDDF8 string=0x00000000004FDDFC ")9"
 *   insn=0x00000000004FDDFC string=0x00000000004FDE00 "\t5"
 *   insn=0x00000000004FDE00 string=0x00000000004FDE04 "iz4"
 *   insn=0x00000000004FDE1C string=0x00000000004FDE20 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FDD68(__int64 result, int a2, int a3)
{
  int v3; // w9
  __int64 v4; // x19
  int v5; // w12
  unsigned int v6; // w8
  int v7; // w21
  int v8; // w9

  if ( *(_DWORD *)(result + 48) != a3 )
    return sub_4FDEDC();
  *(_DWORD *)(result + 52) = a3;
  if ( a2 != -1 )
  {
    v3 = *(_DWORD *)(result + 56);
    if ( v3 == -1 )
    {
      *(_DWORD *)(result + 56) = a2;
    }
    else
    {
      v4 = *(_QWORD *)(*(_QWORD *)result + 24LL);
      do
      {
        v5 = v3;
        v6 = *(_DWORD *)(v4 + 4LL * v3);
        if ( v6 >> 14 == 131070 )
          v3 = -1;
        else
          v3 += (v6 >> 14) - 0x1FFFF + 1;
      }
      while ( v3 != -1 );
      v7 = ~v5 + a2;
      if ( v7 >= 0 )
        v8 = ~v5 + a2;
      else
        v8 = -v7;
      if ( v8 >= 0x20000 )
        sub_500968(*(_QWORD *)(result + 24), "control structure too long");
      *(_DWORD *)(v4 + 4LL * v5) = ((v7 << 14) + 2147467264) & 0xFFFFC000 | v6 & 0x3FFF;
    }
  }
  return result;
}

