/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A70
 * Mangled: ._ZN5Caver14GUIRoundedRectC2Ev
 * Demangled: Caver::GUIRoundedRect::GUIRoundedRect(void)
 *
 * Callers: 8
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x0000000000442974  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>(boost::shared_ptr<Caver::TabView> const*,Caver::TabView *)
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x0000000000495E34  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000497274  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000004A9EB4  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004A97DC  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200A74 string=0x00000000004A97DC ""
 *   insn=0x0000000000200A78 string=0x0000000000200A7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIRoundedRect::GUIRoundedRect(Caver::GUIRoundedRect *this)
{
  return _ZN5Caver14GUIRoundedRectC2Ev(this);
}

