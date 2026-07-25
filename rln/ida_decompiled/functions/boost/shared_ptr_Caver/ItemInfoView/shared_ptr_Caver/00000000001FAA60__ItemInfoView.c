/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA60
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12ItemInfoViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ItemInfoView>::shared_ptr<Caver::ItemInfoView>(Caver::ItemInfoView *)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x0000000000363AEC  std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA68 string=0x00000000001FAA6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ItemInfoView>::shared_ptr<Caver::ItemInfoView>()
{
  JUMPOUT(0x363EC8);
}

