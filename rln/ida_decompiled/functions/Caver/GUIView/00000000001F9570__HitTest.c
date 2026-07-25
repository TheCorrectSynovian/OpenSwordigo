/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9570
 * Mangled: ._ZN5Caver7GUIView7HitTestERKNS_7Vector2E
 * Demangled: Caver::GUIView::HitTest(Caver::Vector2 const&)
 *
 * Callers: 4
 *   0x00000000003C8890  Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&)
 *   0x000000000040B21C  Caver::InventoryItemPanel::HitTest(Caver::Vector2 const&)
 *   0x000000000049BFA8  Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049C584  Caver::GUIScrollView::HitTest(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004A0964  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9578 string=0x00000000001F957C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::HitTest(Caver::GUIView *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver7GUIView7HitTestERKNS_7Vector2E(this, a2);
}

