/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202DA0
 * Mangled: ._ZNSt4listIN5boost10shared_ptrIN5Caver12ProgramStateEEESaIS4_EE6removeERKS4_
 * Demangled: std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Callers: 1
 *   0x00000000004C1468  Caver::ProgramState::RemoveChildState(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Callees: 1
 *   0x00000000004C14BC  std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202DA8 string=0x0000000000202DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::list<boost::shared_ptr<Caver::ProgramState>>::remove()
{
  return _ZNSt4listIN5boost10shared_ptrIN5Caver12ProgramStateEEESaIS4_EE6removeERKS4_();
}

