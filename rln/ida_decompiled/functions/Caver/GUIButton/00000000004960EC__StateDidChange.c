/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004960EC
 * Mangled: _ZN5Caver9GUIButton14StateDidChangeENS_10GUIControl5StateE
 * Demangled: Caver::GUIButton::StateDidChange(Caver::GUIControl::State)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Referenced strings: 13
 *   insn=0x00000000004960F8 string=0x00000000004960FC "S"
 *   insn=0x00000000004960FC string=0x0000000000496100 "h"
 *   insn=0x0000000000496104 string=0x0000000000496108 " A"
 *   insn=0x0000000000496110 string=0x0000000000496164 "h"
 *   insn=0x0000000000496114 string=0x0000000000496118 "`"
 *   insn=0x000000000049612C string=0x0000000000496130 ""
 *   insn=0x0000000000496134 string=0x0000000000496138 "\t"
 *   insn=0x0000000000496140 string=0x0000000000496144 "\t"
 *   insn=0x0000000000496148 string=0x000000000049614C "\t"
 *   insn=0x0000000000496150 string=0x0000000000496154 "\t"
 *   insn=0x0000000000496160 string=0x00000000001F64D0 "0'"
 *   insn=0x0000000000496170 string=0x0000000000496184 "S"
 *   insn=0x0000000000496184 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::StateDidChange(__int64 result, char a2)
{
  int v2; // w8

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_DWORD *)(result + 288);
  if ( (a2 & 1) != 0 )
  {
    if ( (v2 & 1) == 0 && *(_QWORD *)(result + 312) )
      return Caver::GUIRoundedRect::SetColor();
  }
  else if ( (v2 & 1) != 0 )
  {
    result = *(_QWORD *)(result + 312);
    if ( result )
      return Caver::GUIRoundedRect::SetColor();
  }
  return result;
}

