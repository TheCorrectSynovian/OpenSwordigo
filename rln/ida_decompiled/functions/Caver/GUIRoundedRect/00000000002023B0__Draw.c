/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002023B0
 * Mangled: ._ZNK5Caver14GUIRoundedRect4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Callers: 5
 *   0x00000000003CD540  Caver::DraggableOverlayItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049565C  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000497658  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004A9C2C  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002023B8 string=0x00000000002023BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIRoundedRect::Draw(Caver::GUIRoundedRect *this, Caver::RenderingContext *a2)
{
  return _ZNK5Caver14GUIRoundedRect4DrawEPNS_16RenderingContextE(this, a2);
}

