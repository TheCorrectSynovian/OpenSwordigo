/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496188
 * Mangled: _ZN5Caver9GUIButton11CancelPressEv
 * Demangled: Caver::GUIButton::CancelPress(void)
 *
 * Callers: 1
 *   0x00000000001FF930  Caver::GUIButton::CancelPress(void)
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 7
 *   insn=0x0000000000496194 string=0x0000000000496198 "h"
 *   insn=0x0000000000496198 string=0x000000000049619C "H"
 *   insn=0x00000000004961AC string=0x00000000004961B0 "a"A"
 *   insn=0x00000000004961B0 string=0x00000000004961B4 "(x"
 *   insn=0x00000000004961B8 string=0x00000000004961BC "h""
 *   insn=0x00000000004961C0 string=0x00000000004961C4 "h"
 *   insn=0x00000000004961C8 string=0x00000000004961CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::CancelPress(__int64 this)
{
  __int64 v1; // x19
  int v2; // w1

  v1 = this;
  if ( (*(_BYTE *)(this + 288) & 1) != 0 )
  {
    Caver::GUIControl::SendActionsForControlEvent();
    v2 = *(_DWORD *)(v1 + 288);
    *(_DWORD *)(v1 + 288) = v2 & 0xFFFFFFFE;
    if ( (v2 & 0xFFFFFFFE) != v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 304LL))(v1);
    this = Caver::GUIControl::SendActionsForControlEvent();
  }
  *(_QWORD *)(v1 + 456) = 0;
  return this;
}

