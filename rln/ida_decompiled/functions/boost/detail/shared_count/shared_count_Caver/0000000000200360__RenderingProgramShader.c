/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200360
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver22RenderingProgramShaderEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>(Caver::RenderingProgramShader *)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200368 string=0x000000000020036C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>()
{
  JUMPOUT(0x48EDF8);
}

