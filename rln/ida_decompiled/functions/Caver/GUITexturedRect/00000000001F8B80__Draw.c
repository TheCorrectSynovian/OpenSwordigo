/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B80
 * Mangled: ._ZNK5Caver15GUITexturedRect4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *
 * Callers: 7
 *   0x0000000000400A80  Caver::DraggableMenuItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000040AD04  Caver::InventoryItemPanel::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000040E0F4  Caver::InventoryTrinketSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000042A45C  Caver::MenuItemSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049565C  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000497658  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004AB308  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B88 string=0x00000000001F8B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITexturedRect::Draw(Caver::GUITexturedRect *this, Caver::RenderingContext *a2)
{
  return _ZNK5Caver15GUITexturedRect4DrawEPNS_16RenderingContextE(this, a2);
}

