/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F51E0
 * Mangled: ._ZN5Caver13GUITextBubble15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_5ColorE
 * Demangled: Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callers: 3
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *
 * Callees: 1
 *   0x00000000004A9EB4  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F51E8 string=0x00000000001F51EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUITextBubble::SetFrameTexture()
{
  return _ZN5Caver13GUITextBubble15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_5ColorE();
}

