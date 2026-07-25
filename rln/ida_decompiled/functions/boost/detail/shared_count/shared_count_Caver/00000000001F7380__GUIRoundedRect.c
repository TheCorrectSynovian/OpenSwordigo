/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7380
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver14GUIRoundedRectEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
 *
 * Callers: 2
 *   0x00000000004A9EB4  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004AAC0C  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7388 string=0x00000000001F738C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver14GUIRoundedRectEEEPT_();
}

