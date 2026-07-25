/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC7B0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver12ProgramStateEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ProgramState>(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004C133C  Caver::ProgramState::CreateChildState(void)
 *
 * Callees: 1
 *   0x00000000004C1F08  boost::detail::shared_count::shared_count<Caver::ProgramState>(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC7B8 string=0x00000000001FC7BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::ProgramState>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver12ProgramStateEEEPT_();
}

