/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDC94
 * Mangled: sub_4FDC94
 * Demangled: sub_4FDC94
 *
 * Callers: 1
 *   0x00000000004EFACC  sub_4EFACC
 *
 * Callees: 1
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 17
 *   insn=0x00000000004FDC98 string=0x00000000004FDC9C ")"
 *   insn=0x00000000004FDC9C string=0x00000000004FDCA0 "?"
 *   insn=0x00000000004FDCA4 string=0x00000000004FDD34 """
 *   insn=0x00000000004FDCB4 string=0x00000000004FDCB8 ""
 *   insn=0x00000000004FDCBC string=0x00000000004FDCC0 ""
 *   insn=0x00000000004FDCC8 string=0x00000000004FDCCC "h"
 *   insn=0x00000000004FDCCC string=0x00000000004FDCD0 "I9H"
 *   insn=0x00000000004FDCD4 string=0x00000000004FDCD8 "?"
 *   insn=0x00000000004FDCD8 string=0x00000000004FDCDC "i"
 *   insn=0x00000000004FDCDC string=0x00000000004FDCE0 "?"
 *   insn=0x00000000004FDCE0 string=0x00000000004FDCE4 "!"
 *   insn=0x00000000004FDCEC string=0x00000000004FDCF0 "5"
 *   insn=0x00000000004FDCF4 string=0x00000000004FDCF8 "?"
 *   insn=0x00000000004FDD04 string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FDD14 string=0x00000000004FDD18 ")9"
 *   insn=0x00000000004FDD18 string=0x00000000004FDD1C "\t5"
 *   insn=0x00000000004FDD1C string=0x00000000004FDD20 "iz4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_4FDC94(_QWORD *result, int *a2, int a3)
{
  int v3; // w9
  __int64 v4; // x19
  int v5; // w12
  unsigned int v6; // w8
  int v7; // w21
  int v8; // w9

  if ( a3 != -1 )
  {
    v3 = *a2;
    if ( *a2 == -1 )
    {
      *a2 = a3;
    }
    else
    {
      v4 = *(_QWORD *)(*result + 24LL);
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
      v7 = ~v5 + a3;
      if ( v7 >= 0 )
        v8 = ~v5 + a3;
      else
        v8 = -v7;
      if ( v8 >= 0x20000 )
        sub_500968(result[3], "control structure too long");
      *(_DWORD *)(v4 + 4LL * v5) = ((v7 << 14) + 2147467264) & 0xFFFFC000 | v6 & 0x3FFF;
    }
  }
  return result;
}

