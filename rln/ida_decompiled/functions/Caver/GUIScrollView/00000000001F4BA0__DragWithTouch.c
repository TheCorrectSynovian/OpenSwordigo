/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4BA0
 * Mangled: ._ZN5Caver13GUIScrollView13DragWithTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x000000000049BFA8  Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049BDEC  Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4BA8 string=0x00000000001F4BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIScrollView::DragWithTouch(Caver::GUIScrollView *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver13GUIScrollView13DragWithTouchERKNS_7FWTouchE(this, a2);
}

