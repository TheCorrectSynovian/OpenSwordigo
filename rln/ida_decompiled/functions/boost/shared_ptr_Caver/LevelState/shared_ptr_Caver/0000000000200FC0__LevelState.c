/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200FC0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver10LevelStateEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>(Caver::LevelState *)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200FC8 string=0x0000000000200FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>()
{
  JUMPOUT(0x3B6BF0);
}

