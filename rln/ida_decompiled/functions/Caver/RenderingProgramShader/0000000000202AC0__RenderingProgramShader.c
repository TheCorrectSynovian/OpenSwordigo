/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202AC0
 * Mangled: ._ZN5Caver22RenderingProgramShaderC2EPNS_16RenderingContextERKSsNS_26RenderingProgramShaderTypeEPKc
 * Demangled: Caver::RenderingProgramShader::RenderingProgramShader(Caver::RenderingContext *,std::string const&,Caver::RenderingProgramShaderType,char const*)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000004D3160  Caver::RenderingProgramShader::RenderingProgramShader(Caver::RenderingContext *,std::string const&,Caver::RenderingProgramShaderType,char const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202AC8 string=0x0000000000202ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingProgramShader::RenderingProgramShader()
{
  return _ZN5Caver22RenderingProgramShaderC2EPNS_16RenderingContextERKSsNS_26RenderingProgramShaderTypeEPKc();
}

