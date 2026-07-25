/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F70
 * Mangled: ._ZN5Caver16RenderingContext10AddProgramEjRKN5boost10shared_ptrINS_16RenderingProgramEEE
 * Demangled: Caver::RenderingContext::AddProgram(uint,boost::shared_ptr<Caver::RenderingProgram> const&)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048B9D8  Caver::RenderingContext::AddProgram(uint,boost::shared_ptr<Caver::RenderingProgram> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F78 string=0x00000000001F6F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingContext::AddProgram()
{
  return _ZN5Caver16RenderingContext10AddProgramEjRKN5boost10shared_ptrINS_16RenderingProgramEEE();
}

