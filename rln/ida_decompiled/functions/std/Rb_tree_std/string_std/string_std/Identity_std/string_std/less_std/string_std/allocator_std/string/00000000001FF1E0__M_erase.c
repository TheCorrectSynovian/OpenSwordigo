/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF1E0
 * Mangled: ._ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE8_M_eraseEPSt13_Rb_tree_nodeISsE
 * Demangled: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *
 * Callers: 11
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x000000000037F058  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B9604  boost::detail::sp_counted_impl_p<Caver::LevelState>::dispose(void)
 *   0x00000000003C2F98  Caver::GameState::~GameState()
 *   0x00000000003F0554  Caver::StoreViewController::~StoreViewController()
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *   0x00000000004BD270  Caver::StoreController_Android::~StoreController_Android()
 *   0x00000000004BEA80  Caver::StoreController_Android::StartedRestoringPurchases(void)
 *
 * Callees: 1
 *   0x000000000037F058  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF1E8 string=0x00000000001FF1EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE8_M_eraseEPSt13_Rb_tree_nodeISsE();
}

