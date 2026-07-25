/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D664
 * Mangled: _ZN5Caver9GUISlider10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUISlider::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 1
 *   insn=0x000000000049D670 string=0x000000000049D674 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISlider::TouchEnded(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19

  v2 = this;
  if ( *(_BYTE *)(this + 353) )
    this = Caver::GUIControl::SendActionsForControlEvent();
  *(_BYTE *)(v2 + 353) = 0;
  return this;
}

