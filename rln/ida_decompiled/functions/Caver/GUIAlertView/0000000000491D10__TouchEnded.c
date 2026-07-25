/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491D10
 * Mangled: _ZN5Caver12GUIAlertView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUIAlertView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3B80  Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Referenced strings: 13
 *   insn=0x0000000000491D20 string=0x0000000000491D24 "U"
 *   insn=0x0000000000491D30 string=0x0000000000491D34 "h"
 *   insn=0x0000000000491D34 string=0x0000000000491D38 ")"
 *   insn=0x0000000000491D40 string=0x0000000000491D44 "h"
 *   insn=0x0000000000491D44 string=0x0000000000491D48 "! "
 *   insn=0x0000000000491D5C string=0x00000000001F3B80 "P'"
 *   insn=0x0000000000491D64 string=0x0000000000491D68 "&"
 *   insn=0x0000000000491D6C string=0x0000000000491D70 "`"
 *   insn=0x0000000000491D74 string=0x0000000000491D78 ""
 *   insn=0x0000000000491D78 string=0x0000000000491D7C "b"
 *   insn=0x0000000000491D80 string=0x0000000000491D84 ""
 *   insn=0x0000000000491D9C string=0x0000000000491DB4 "G"
 *   insn=0x0000000000491DB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::TouchEnded(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  Caver::Rectangle *v3; // x20
  _QWORD v4[2]; // [xsp+0h] [xbp-30h] BYREF

  v2 = this;
  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 432) == *(_QWORD *)a2 )
  {
    v3 = (Caver::Rectangle *)(*(_QWORD *)(this + 304) + 116LL);
    Caver::GUIView::ConvertPointFromView();
    this = Caver::Rectangle::PointInside(v3, (const Caver::Vector2 *)v4);
    if ( (this & 1) != 0 )
    {
      this = *(_QWORD *)(v2 + 280);
      if ( this )
        this = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD))this)(this, v2, *(unsigned int *)(v2 + 424));
    }
    *(_QWORD *)(v2 + 432) = 0;
  }
  return this;
}

