/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F34C0
 * Mangled: ._ZN5Caver14CharacterState16HasSkillWithNameERKSs
 * Demangled: Caver::CharacterState::HasSkillWithName(std::string const&)
 *
 * Callers: 3
 *   0x000000000035D214  sub_35D214
 *   0x00000000003B82D4  Caver::GameState::AllNodesVisited(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003AD3AC  Caver::CharacterState::HasSkillWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F34C8 string=0x00000000001F34CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::HasSkillWithName()
{
  return _ZN5Caver14CharacterState16HasSkillWithNameERKSs();
}

