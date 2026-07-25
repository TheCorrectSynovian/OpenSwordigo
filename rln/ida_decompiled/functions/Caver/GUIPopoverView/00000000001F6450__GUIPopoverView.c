/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6450
 * Mangled: ._ZN5Caver14GUIPopoverViewC2Ev
 * Demangled: Caver::GUIPopoverView::GUIPopoverView(void)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6458 string=0x00000000001F645C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIPopoverView::GUIPopoverView(Caver::GUIPopoverView *this)
{
  JUMPOUT(0x4D3998);
}

