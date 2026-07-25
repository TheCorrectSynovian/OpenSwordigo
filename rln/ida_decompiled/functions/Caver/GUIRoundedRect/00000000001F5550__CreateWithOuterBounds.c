/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5550
 * Mangled: ._ZN5Caver14GUIRoundedRect21CreateWithOuterBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *
 * Callers: 4
 *   0x00000000003CD540  Caver::DraggableOverlayItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000495598  Caver::GUIButton::LayoutSubviews(void)
 *   0x000000000049722C  Caver::GUIFrameView::LayoutSubviews(void)
 *   0x00000000004AA9A8  Caver::GUITextBubble::UpdateLayout(void)
 *
 * Callees: 1
 *   0x00000000004A99AC  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5554 string=0x00000000004A99AC ""
 *   insn=0x00000000001F5558 string=0x00000000001F555C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIRoundedRect::CreateWithOuterBounds(
        Caver::GUIRoundedRect *this,
        const Caver::Rectangle *a2)
{
  return _ZN5Caver14GUIRoundedRect21CreateWithOuterBoundsERKNS_9RectangleE(this, a2);
}

