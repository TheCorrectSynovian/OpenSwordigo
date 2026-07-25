/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA70
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver5SkillEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Skill>*,std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>>,boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 4
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *   0x00000000003AD4DC  Caver::CharacterState::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *   0x00000000003B0038  Caver::GameData::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 1
 *   0x00000000003AED44  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA78 string=0x00000000001FAA7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::Skill>>::_M_insert_aux()
{
  JUMPOUT(0x3AEDC8);
}

