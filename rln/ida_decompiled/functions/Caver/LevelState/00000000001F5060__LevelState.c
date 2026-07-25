/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5060
 * Mangled: ._ZN5Caver10LevelStateC2Ev
 * Demangled: Caver::LevelState::LevelState(void)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000003BAAA0  Caver::LevelState::LevelState(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5068 string=0x00000000001F506C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LevelState::LevelState(Caver::LevelState *this)
{
  return _ZN5Caver10LevelStateC2Ev(this);
}

