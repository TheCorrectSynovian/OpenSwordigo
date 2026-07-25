/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC40
 * Mangled: ._ZN5Caver5Proto9GameStateD2Ev
 * Demangled: Caver::Proto::GameState::~GameState()
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002ED9BC  Caver::Proto::GameState::GameState(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC48 string=0x00000000001FAC4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameState::~GameState(Caver::Proto::GameState *this)
{
  JUMPOUT(0x2EDBC8);
}

