/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B30
 * Mangled: ._ZN5Caver16RenderingProgram15LinkWithShadersERKN5boost10shared_ptrINS_22RenderingProgramShaderEEES6_
 * Demangled: Caver::RenderingProgram::LinkWithShaders(boost::shared_ptr<Caver::RenderingProgramShader> const&,boost::shared_ptr<Caver::RenderingProgramShader> const&)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D0AC  Caver::RenderingProgram::LinkWithShaders(boost::shared_ptr<Caver::RenderingProgramShader> const&,boost::shared_ptr<Caver::RenderingProgramShader> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B38 string=0x00000000001F5B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingProgram::LinkWithShaders()
{
  return _ZN5Caver16RenderingProgram15LinkWithShadersERKN5boost10shared_ptrINS_22RenderingProgramShaderEEES6_();
}

