/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496024
 * Mangled: _ZN5Caver9GUIButton18SetBackgroundColorENS_5ColorE
 * Demangled: Caver::GUIButton::SetBackgroundColor(Caver::Color)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Referenced strings: 12
 *   insn=0x0000000000496030 string=0x0000000000496034 "S"
 *   insn=0x0000000000496034 string=0x0000000000496038 "i"
 *   insn=0x0000000000496040 string=0x0000000000496044 ")"
 *   insn=0x0000000000496048 string=0x000000000049604C "\t"
 *   insn=0x000000000049604C string=0x0000000000496050 "`"
 *   insn=0x0000000000496050 string=0x0000000000496054 "("
 *   insn=0x0000000000496050 string=0x000000000049607C "h"
 *   insn=0x0000000000496058 string=0x000000000049605C "("
 *   insn=0x0000000000496060 string=0x0000000000496064 "(@9"
 *   insn=0x0000000000496068 string=0x000000000049606C "("
 *   insn=0x0000000000496078 string=0x00000000001F64D0 "0'"
 *   insn=0x000000000049609C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::SetBackgroundColor(__int64 a1, _DWORD *a2)
{
  __int64 result; // x0

  _ReadStatusReg(TPIDR_EL0);
  result = *(_QWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 440) = *a2;
  if ( result )
    return Caver::GUIRoundedRect::SetColor();
  return result;
}

