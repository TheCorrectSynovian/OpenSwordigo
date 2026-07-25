/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201940
 * Mangled: ._ZN5Caver5Proto9GameStateD2Ev_0
 * Demangled: Caver::Proto::GameState::~GameState()
 *
 * Callers: 1
 *   0x00000000002EF35C  Caver::Proto::GameState::~GameState()
 *
 * Callees: 1
 *   0x00000000002ED9BC  Caver::Proto::GameState::GameState(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201948 string=0x000000000020194C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameState::~GameState(Caver::Proto::GameState *this)
{
  JUMPOUT(0x2EDBC8);
}

