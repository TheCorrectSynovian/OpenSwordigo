/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE10
 * Mangled: ._ZN5Caver8GameData12SkillForNameERKSs
 * Demangled: Caver::GameData::SkillForName(std::string const&)
 *
 * Callers: 3
 *   0x000000000035DC24  sub_35DC24
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003B0C20  Caver::GameData::SkillForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE18 string=0x00000000001FFE1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameData::SkillForName()
{
  return _ZN5Caver8GameData12SkillForNameERKSs();
}

