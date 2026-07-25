/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200780
 * Mangled: ._ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE4findERKSs
 * Demangled: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
 *
 * Callers: 5
 *   0x000000000037DC80  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *   0x00000000003C3F54  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *   0x00000000004BD438  Caver::StoreController_Android::IsProductPurchased(std::string const&)
 *
 * Callees: 1
 *   0x0000000000380274  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(boost::shared_ptr<Caver::AchievementNotificationView> const*,Caver::AchievementNotificationView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200788 string=0x000000000020078C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find()
{
  JUMPOUT(0x380394);
}

