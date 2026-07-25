/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA00
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver5SkillEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Skill>(Caver::Skill *)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B171C  std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA08 string=0x00000000001FDA0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::Skill>()
{
  JUMPOUT(0x3B1AF8);
}

