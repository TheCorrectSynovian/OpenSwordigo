/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E10
 * Mangled: ._ZN5Caver14GUIRoundedRect15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 6
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x0000000000495E34  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000497274  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000004A9820  Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *   0x00000000004A9EB4  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004A9820  Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9E18 string=0x00000000001F9E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIRoundedRect::InitWithTexture()
{
  JUMPOUT(0x4A98EC);
}

