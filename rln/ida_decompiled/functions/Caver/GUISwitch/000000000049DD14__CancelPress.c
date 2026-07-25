/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DD14
 * Mangled: _ZN5Caver9GUISwitch11CancelPressEv
 * Demangled: Caver::GUISwitch::CancelPress(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 7
 *   insn=0x000000000049DD20 string=0x000000000049DD24 "h"
 *   insn=0x000000000049DD24 string=0x000000000049DD28 "H"
 *   insn=0x000000000049DD38 string=0x000000000049DD3C "a"A"
 *   insn=0x000000000049DD3C string=0x000000000049DD40 "(x"
 *   insn=0x000000000049DD44 string=0x000000000049DD48 "h""
 *   insn=0x000000000049DD4C string=0x000000000049DD50 "h"
 *   insn=0x000000000049DD54 string=0x000000000049DD58 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::CancelPress(__int64 this)
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
  *(_QWORD *)(v1 + 344) = 0;
  return this;
}

