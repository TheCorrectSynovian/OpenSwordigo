/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD850
 * Mangled: ._ZN5Caver15GUITexturedRectC2Ev
 * Demangled: Caver::GUITexturedRect::GUITexturedRect(void)
 *
 * Callers: 8
 *   0x0000000000400394  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040DF30  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *   0x0000000000495D00  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000497274  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004AAE20  Caver::GUITexturedRect::GUITexturedRect(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD854 string=0x00000000004AAE20 ""
 *   insn=0x00000000001FD858 string=0x00000000001FD85C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITexturedRect::GUITexturedRect(Caver::GUITexturedRect *this)
{
  return _ZN5Caver15GUITexturedRectC2Ev(this);
}

