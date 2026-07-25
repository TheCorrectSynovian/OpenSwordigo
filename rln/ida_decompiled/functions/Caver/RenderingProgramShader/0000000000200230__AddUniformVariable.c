/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200230
 * Mangled: ._ZN5Caver22RenderingProgramShader18AddUniformVariableEiRKSs
 * Demangled: Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000004D32DC  Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200238 string=0x000000000020023C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingProgramShader::AddUniformVariable()
{
  return _ZN5Caver22RenderingProgramShader18AddUniformVariableEiRKSs();
}

