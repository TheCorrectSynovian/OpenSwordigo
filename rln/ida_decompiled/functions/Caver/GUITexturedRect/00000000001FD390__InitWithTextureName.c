/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD390
 * Mangled: ._ZN5Caver15GUITexturedRect19InitWithTextureNameERKSsRKNS_7Vector2E
 * Demangled: Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004AB048  Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD398 string=0x00000000001FD39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUITexturedRect::InitWithTextureName()
{
  return _ZN5Caver15GUITexturedRect19InitWithTextureNameERKSsRKNS_7Vector2E();
}

