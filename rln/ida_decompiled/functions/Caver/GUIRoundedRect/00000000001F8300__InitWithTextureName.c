/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8300
 * Mangled: ._ZN5Caver14GUIRoundedRect19InitWithTextureNameERKSs
 * Demangled: Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *
 * Callers: 2
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004A9820  Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8308 string=0x00000000001F830C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIRoundedRect::InitWithTextureName()
{
  return _ZN5Caver14GUIRoundedRect19InitWithTextureNameERKSs();
}

