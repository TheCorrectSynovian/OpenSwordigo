/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4ED4
 * Mangled: sub_4F4ED4
 * Demangled: sub_4F4ED4
 *
 * Callers: 6
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004F6020  sub_4F6020
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 1
 *   0x00000000004F40C4  sub_4F40C4
 *
 * Referenced strings: 16
 *   insn=0x00000000004F4ED8 string=0x00000000004F4EDC "`"
 *   insn=0x00000000004F4EDC string=0x00000000004F4EE8 "("
 *   insn=0x00000000004F4EE0 string=0x00000000004F4EE4 "A"
 *   insn=0x00000000004F4EE4 string=0x00000000004F4F0C "\t"
 *   insn=0x00000000004F4EE8 string=0x00000000004F4EEC "A"
 *   insn=0x00000000004F4EEC string=0x00000000004F4EF0 ""
 *   insn=0x00000000004F4EF4 string=0x00000000004F4EF8 "\t"
 *   insn=0x00000000004F4EF4 string=0x00000000004F4F24 " "
 *   insn=0x00000000004F4EFC string=0x00000000004F4F00 ")M""
 *   insn=0x00000000004F4F00 string=0x00000000004F4F04 "!"
 *   insn=0x00000000004F4F04 string=0x00000000004F4F08 "o"
 *   insn=0x00000000004F4F08 string=0x00000000004F40C4 "\t,@9*"
 *   insn=0x00000000004F4F0C string=0x00000000004F4F10 "}@"
 *   insn=0x00000000004F4F10 string=0x00000000004F4F14 "("
 *   insn=0x00000000004F4F14 string=0x00000000004F4F18 ""
 *   insn=0x00000000004F4F18 string=0x00000000004F4F1C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F4ED4(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v3; // w8
  __int64 v4; // x8

  v3 = a2[2];
  if ( v3 == 7 || v3 == 5 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v4 )
      return sub_4F40C4(v4, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a3 + 296));
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v3 + 224);
    if ( v4 )
      return sub_4F40C4(v4, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a3 + 296));
  }
  return &qword_599BC8;
}

