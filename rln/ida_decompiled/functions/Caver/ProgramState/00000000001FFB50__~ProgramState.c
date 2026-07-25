/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB50
 * Mangled: ._ZN5Caver12ProgramStateD2Ev_0
 * Demangled: Caver::ProgramState::~ProgramState()
 *
 * Callers: 2
 *   0x00000000004C1F08  boost::detail::shared_count::shared_count<Caver::ProgramState>(Caver::ProgramState *)
 *   0x00000000004C1F9C  boost::detail::sp_counted_impl_p<Caver::ProgramState>::dispose(void)
 *
 * Callees: 1
 *   0x00000000004C109C  Caver::ProgramState::~ProgramState()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB58 string=0x00000000001FFB5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProgramState::~ProgramState(Caver::ProgramState *this)
{
  _ZN5Caver12ProgramStateD2Ev(this);
}

