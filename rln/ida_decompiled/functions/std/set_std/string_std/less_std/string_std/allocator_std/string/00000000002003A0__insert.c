/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002003A0
 * Mangled: ._ZNSt3setISsSt4lessISsESaISsEE6insertERKSs
 * Demangled: std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Callers: 6
 *   0x000000000037DC80  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *   0x00000000003C3E38  Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *   0x00000000003C3E90  Caver::StateProperties::AddFlag(std::string const&)
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *
 * Callees: 1
 *   0x000000000037E0F0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002003A8 string=0x00000000002003AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::set<std::string>::insert()
{
  return _ZNSt3setISsSt4lessISsESaISsEE6insertERKSs();
}

