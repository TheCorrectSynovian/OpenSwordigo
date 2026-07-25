/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491C84
 * Mangled: _ZN5Caver12GUIAlertView10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::GUIAlertView::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3B80  Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Referenced strings: 9
 *   insn=0x0000000000491C94 string=0x0000000000491C98 "V"
 *   insn=0x0000000000491CA8 string=0x0000000000491CAC "h"
 *   insn=0x0000000000491CB0 string=0x0000000000491CB4 "h"
 *   insn=0x0000000000491CCC string=0x00000000001F3B80 "P'"
 *   insn=0x0000000000491CD4 string=0x0000000000491CD8 "J"
 *   insn=0x0000000000491CD8 string=0x0000000000491CDC "`"
 *   insn=0x0000000000491CE0 string=0x0000000000491CE4 "h"
 *   insn=0x0000000000491CF4 string=0x0000000000491D0C "q"
 *   insn=0x0000000000491D0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::TouchBegan(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  Caver::Rectangle *v4; // x21
  _QWORD v5[2]; // [xsp+0h] [xbp-30h] BYREF

  v2 = this;
  v5[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (*(_DWORD *)(this + 424) & 0x80000000) == 0 )
  {
    v4 = (Caver::Rectangle *)(*(_QWORD *)(this + 304) + 116LL);
    Caver::GUIView::ConvertPointFromView();
    this = Caver::Rectangle::PointInside(v4, (const Caver::Vector2 *)v5);
    if ( (this & 1) != 0 )
      *(_QWORD *)(v2 + 432) = *(_QWORD *)a2;
  }
  return this;
}

