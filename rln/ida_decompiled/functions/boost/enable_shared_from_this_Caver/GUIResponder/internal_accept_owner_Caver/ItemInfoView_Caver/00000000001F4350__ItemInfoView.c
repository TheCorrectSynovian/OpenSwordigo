/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4350
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12ItemInfoViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *
 * Callers: 1
 *   0x0000000000363AEC  std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *
 * Callees: 1
 *   0x0000000000363FD4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4358 string=0x00000000001F435C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12ItemInfoViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

