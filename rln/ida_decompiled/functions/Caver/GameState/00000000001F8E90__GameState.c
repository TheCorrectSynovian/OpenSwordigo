/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E90
 * Mangled: ._ZN5Caver9GameStateC2ERKN5boost10shared_ptrINS_8GameDataEEE
 * Demangled: Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E98 string=0x00000000001F8E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameState::GameState()
{
  return _ZN5Caver9GameStateC2ERKN5boost10shared_ptrINS_8GameDataEEE();
}

