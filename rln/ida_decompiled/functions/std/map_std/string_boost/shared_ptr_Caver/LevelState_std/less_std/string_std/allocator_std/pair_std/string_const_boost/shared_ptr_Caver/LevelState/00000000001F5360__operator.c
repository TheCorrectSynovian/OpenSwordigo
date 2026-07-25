/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5360
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver10LevelStateEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5368 string=0x00000000001F536C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<std::string,boost::shared_ptr<Caver::LevelState>>::operator[]()
{
  JUMPOUT(0x3B6D88);
}

