/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F79D0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver16RenderingProgramEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048EEE0  boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F79D8 string=0x00000000001F79DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::RenderingProgram>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver16RenderingProgramEEEPT_();
}

