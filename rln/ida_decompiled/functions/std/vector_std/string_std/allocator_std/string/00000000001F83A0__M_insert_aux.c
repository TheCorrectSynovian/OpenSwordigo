/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F83A0
 * Mangled: ._ZNSt6vectorISsSaISsEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPSsS1_EERKSs
 * Demangled: std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *
 * Callers: 11
 *   0x00000000002442A8  Caver::ComponentFactory::RegisterComponentClass(std::string const&,boost::function<Caver::Component * ()(void)>)
 *   0x000000000035EB00  sub_35EB00
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *   0x00000000003C3B20  Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000047DA4C  Caver::FWShell::AddArgument(std::string const&)
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *   0x00000000004BD468  Caver::StoreController_Android::FetchProductWithIdentifier(std::string const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callees: 1
 *   0x0000000000244F18  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F83A8 string=0x00000000001F83AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<std::string>::_M_insert_aux()
{
  JUMPOUT(0x245204);
}

