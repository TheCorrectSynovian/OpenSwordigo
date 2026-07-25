/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC350
 * Mangled: ._ZN5Caver16RenderingContext10UseProgramERKN5boost10shared_ptrINS_16RenderingProgramEEE
 * Demangled: Caver::RenderingContext::UseProgram(boost::shared_ptr<Caver::RenderingProgram> const&)
 *
 * Callers: 1
 *   0x000000000048BCEC  Caver::RenderingContext::UseProgram(uint)
 *
 * Callees: 1
 *   0x000000000048BCEC  Caver::RenderingContext::UseProgram(uint)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC358 string=0x00000000001FC35C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::RenderingContext::UseProgram()
{
  JUMPOUT(0x48BE04);
}

