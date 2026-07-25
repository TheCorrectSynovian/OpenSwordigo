/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F64D0
 * Mangled: ._ZN5Caver14GUIRoundedRect8SetColorENS_5ColorE
 * Demangled: Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Callers: 8
 *   0x00000000003CD43C  Caver::DraggableOverlayItem::SetColor(Caver::Color)
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x000000000049565C  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000496024  Caver::GUIButton::SetBackgroundColor(Caver::Color)
 *   0x00000000004960EC  Caver::GUIButton::StateDidChange(Caver::GUIControl::State)
 *   0x0000000000497274  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000004975D0  Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *   0x00000000004A9EB4  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004A9BDC  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F64D4 string=0x00000000004A9BDC "("
 *   insn=0x00000000001F64D8 string=0x00000000001F64DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIRoundedRect::SetColor()
{
  return _ZN5Caver14GUIRoundedRect8SetColorENS_5ColorE();
}

