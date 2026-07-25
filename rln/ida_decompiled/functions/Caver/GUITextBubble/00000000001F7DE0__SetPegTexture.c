/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7DE0
 * Mangled: ._ZN5Caver13GUITextBubble13SetPegTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_5ColorE
 * Demangled: Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callers: 2
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callees: 1
 *   0x00000000004AA054  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7DE8 string=0x00000000001F7DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUITextBubble::SetPegTexture()
{
  return _ZN5Caver13GUITextBubble13SetPegTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_5ColorE();
}

