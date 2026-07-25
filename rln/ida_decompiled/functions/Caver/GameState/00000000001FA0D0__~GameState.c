/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA0D0
 * Mangled: ._ZN5Caver9GameStateD2Ev
 * Demangled: Caver::GameState::~GameState()
 *
 * Callers: 2
 *   0x00000000003C2EB0  boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *   0x00000000003C2F44  boost::detail::sp_counted_impl_p<Caver::GameState>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003C2F98  Caver::GameState::~GameState()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA0D8 string=0x00000000001FA0DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameState::~GameState(Caver::GameState *this)
{
  _ZN5Caver9GameStateD2Ev(this);
}

