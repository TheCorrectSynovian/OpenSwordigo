/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540CBC
 * Mangled: sub_540CBC
 * Demangled: sub_540CBC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000540A88  sub_540A88
 *
 * Referenced strings: 11
 *   insn=0x0000000000540CC0 string=0x0000000000540CC4 "!<"
 *   insn=0x0000000000540CC4 string=0x0000000000540CC8 "B"
 *   insn=0x0000000000540CCC string=0x0000000000540CD0 "D"
 *   insn=0x0000000000540CD0 string=0x0000000000540CD4 "B\t"
 *   insn=0x0000000000540CD8 string=0x0000000000540CDC "_ "
 *   insn=0x0000000000540CE0 string=0x0000000000540CE4 "_"
 *   insn=0x0000000000540CE4 string=0x0000000000540CE8 "`"
 *   insn=0x0000000000540CE8 string=0x0000000000540CEC "!<@"
 *   insn=0x0000000000540CEC string=0x0000000000540CF0 "f"
 *   insn=0x0000000000540CF4 string=0x0000000000540CF8 "!<"
 *   insn=0x0000000000540CF8 string=0x0000000000540CFC "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540CBC(_QWORD *a1, __int64 a2)
{
  int v2; // w2

  v2 = *(_DWORD *)((_BYTE *)a1 + *(_QWORD *)(*a1 - 24LL) + 24) & 0x4A;
  if ( v2 == 8 || v2 == 64 )
    a2 = (unsigned __int16)a2;
  else
    a2 = (__int16)a2;
  return sub_540A88(a1, a2);
}

