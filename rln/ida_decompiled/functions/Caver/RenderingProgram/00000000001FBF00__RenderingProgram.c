/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF00
 * Mangled: ._ZN5Caver16RenderingProgramC2EPNS_16RenderingContextERKSs
 * Demangled: Caver::RenderingProgram::RenderingProgram(Caver::RenderingContext *,std::string const&)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048CDC0  Caver::RenderingProgram::RenderingProgram(Caver::RenderingContext *,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF08 string=0x00000000001FBF0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingProgram::RenderingProgram()
{
  return _ZN5Caver16RenderingProgramC2EPNS_16RenderingContextERKSs();
}

