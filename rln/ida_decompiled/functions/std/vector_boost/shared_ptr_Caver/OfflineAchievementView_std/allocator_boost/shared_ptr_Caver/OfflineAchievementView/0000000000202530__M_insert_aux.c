/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202530
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver22OfflineAchievementViewEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::OfflineAchievementView>,std::allocator<boost::shared_ptr<Caver::OfflineAchievementView>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::OfflineAchievementView>*,std::vector<boost::shared_ptr<Caver::OfflineAchievementView>,std::allocator<boost::shared_ptr<Caver::OfflineAchievementView>>>>,boost::shared_ptr<Caver::OfflineAchievementView> const&)
 *
 * Callers: 1
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x00000000003850AC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>(boost::shared_ptr<Caver::OfflineAchievementView> const*,Caver::OfflineAchievementView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202538 string=0x000000000020253C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::OfflineAchievementView>>::_M_insert_aux()
{
  JUMPOUT(0x3851CC);
}

