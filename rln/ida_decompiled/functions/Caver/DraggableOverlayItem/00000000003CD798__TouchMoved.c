/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CD798
 * Mangled: _ZN5Caver20DraggableOverlayItem10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::DraggableOverlayItem::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA40  Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Referenced strings: 15
 *   insn=0x00000000003CD7A4 string=0x00000000003CD7A8 "T"
 *   insn=0x00000000003CD7B4 string=0x00000000003CD7B8 "("
 *   insn=0x00000000003CD7B8 string=0x00000000003CD7BC "i2A"
 *   insn=0x00000000003CD7C0 string=0x00000000003CD7C4 "A"
 *   insn=0x00000000003CD7D0 string=0x00000000003CD7D4 "["
 *   insn=0x00000000003CD7D8 string=0x00000000003CD7DC "a6A"
 *   insn=0x00000000003CD7F0 string=0x00000000003CD7F4 "b.@"
 *   insn=0x00000000003CD7F8 string=0x00000000001FDA40 "0'"
 *   insn=0x00000000003CD7FC string=0x00000000003CD800 "i"
 *   insn=0x00000000003CD80C string=0x00000000003CD810 "X"
 *   insn=0x00000000003CD810 string=0x00000000003CD814 "`z@"
 *   insn=0x00000000003CD810 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003CD818 string=0x00000000003CD81C ""
 *   insn=0x00000000003CD820 string=0x00000000003CD824 ""
 *   insn=0x00000000003CD84C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const Caver::GUIView *__fastcall Caver::DraggableOverlayItem::TouchMoved(
        const Caver::GUIView *this,
        const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  __int64 v3; // x9
  float32x2_t v4; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v5; // [xsp+8h] [xbp-38h] BYREF
  __int64 v6; // [xsp+10h] [xbp-30h] BYREF
  _QWORD v7[3]; // [xsp+18h] [xbp-28h] BYREF

  v2 = (__int64)this;
  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)a2 == *((_QWORD *)this + 76) )
  {
    Caver::FWTouch::LocationInView((__int64 *)&v4, a2, this);
    v5 = vsub_f32(v4, *(float32x2_t *)(v2 + 616)).n64_u64[0];
    Caver::GUIView::ConvertPointToView(
      &v6,
      (Caver::GUIView *)v2,
      (const Caver::Vector2 *)&v5,
      *(Caver::GUIView **)(v2 + 88));
    v3 = *(_QWORD *)(v2 + 124);
    v7[0] = v6;
    v7[1] = v3;
    Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)v7);
    this = *(const Caver::GUIView **)(v2 + 240);
    if ( this )
      return (const Caver::GUIView *)(**(__int64 (__fastcall ***)(const Caver::GUIView *, __int64))this)(this, v2);
  }
  return this;
}

