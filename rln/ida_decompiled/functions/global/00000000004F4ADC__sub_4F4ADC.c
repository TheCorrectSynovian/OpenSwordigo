/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4ADC
 * Mangled: sub_4F4ADC
 * Demangled: sub_4F4ADC
 *
 * Callers: 4
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x0000000000500970  sub_500970
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501F70  sub_501F70
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F43C0  sub_4F43C0
 *
 * Referenced strings: 21
 *   insn=0x00000000004F4AE8 string=0x00000000004F4AEC "S"
 *   insn=0x00000000004F4AEC string=0x00000000004F4AF0 "h"
 *   insn=0x00000000004F4AF8 string=0x00000000004F4AFC "(,@9J"
 *   insn=0x00000000004F4AFC string=0x00000000004F4B00 "J"
 *   insn=0x00000000004F4B00 string=0x00000000004F4B04 "+"
 *   insn=0x00000000004F4B04 string=0x00000000004F4B08 "(!"
 *   insn=0x00000000004F4B08 string=0x00000000004F4B0C ""
 *   insn=0x00000000004F4B0C string=0x00000000004F4B10 ""
 *   insn=0x00000000004F4B10 string=0x00000000004F4B14 "\t"
 *   insn=0x00000000004F4B14 string=0x00000000004F4B18 "-)"
 *   insn=0x00000000004F4B18 string=0x00000000004F4B1C "\t"
 *   insn=0x00000000004F4B1C string=0x00000000004F4B20 "?"
 *   insn=0x00000000004F4B24 string=0x00000000004F4B28 "\t\t@"
 *   insn=0x00000000004F4B24 string=0x00000000004F4B34 ""
 *   insn=0x00000000004F4B28 string=0x00000000004F4B2C "?"
 *   insn=0x00000000004F4B2C string=0x00000000004F4B30 "@"
 *   insn=0x00000000004F4B30 string=0x00000000004F4B58 ")"
 *   insn=0x00000000004F4B34 string=0x00000000004F4B38 "("
 *   insn=0x00000000004F4B54 string=0x00000000004F4B68 "i"
 *   insn=0x00000000004F4B6C string=0x00000000004F4B70 "?"
 *   insn=0x00000000004F4B8C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F4ADC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 v5; // [xsp+8h] [xbp-28h] BYREF
  int v6; // [xsp+10h] [xbp-20h]
  __int64 v7; // [xsp+18h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a2 + 32) + 40LL * (((1 << *(_BYTE *)(a2 + 11)) - 1) & *(_DWORD *)(a3 + 12));
  while ( *(_DWORD *)(v3 + 24) != 4 || *(_QWORD *)(v3 + 16) != a3 )
  {
    v3 = *(_QWORD *)(v3 + 32);
    if ( !v3 )
      goto LABEL_5;
  }
  if ( (__int64 *)v3 == &qword_599BC8 )
  {
LABEL_5:
    v5 = a3;
    v6 = 4;
    return sub_4F43C0(a1, a2, &v5);
  }
  return v3;
}

