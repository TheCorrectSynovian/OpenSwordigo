/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4E8C
 * Mangled: sub_4F4E8C
 * Demangled: sub_4F4E8C
 *
 * Callers: 6
 *   0x00000000004ED86C  sub_4ED86C
 *   0x00000000004ED9A0  sub_4ED9A0
 *   0x00000000004EE534  sub_4EE534
 *   0x00000000004F6020  sub_4F6020
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F6604  sub_4F6604
 *
 * Callees: 1
 *   0x00000000004F40C4  sub_4F40C4
 *
 * Referenced strings: 6
 *   insn=0x00000000004F4EA4 string=0x00000000004F4EA8 "@"
 *   insn=0x00000000004F4EA4 string=0x00000000004F40C4 "\t,@9*"
 *   insn=0x00000000004F4EAC string=0x00000000004F4EB0 "h*@9"
 *   insn=0x00000000004F4EB4 string=0x00000000004F4EB8 ")!"
 *   insn=0x00000000004F4EBC string=0x00000000004F4EC0 "("
 *   insn=0x00000000004F4EC0 string=0x00000000004F4EC4 "h*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F4E8C(__int64 a1, char a2, __int64 a3)
{
  __int64 *result; // x0

  result = sub_4F40C4(a1, a3);
  if ( !*((_DWORD *)result + 2) )
  {
    result = 0;
    *(_BYTE *)(a1 + 10) |= 1 << a2;
  }
  return result;
}

