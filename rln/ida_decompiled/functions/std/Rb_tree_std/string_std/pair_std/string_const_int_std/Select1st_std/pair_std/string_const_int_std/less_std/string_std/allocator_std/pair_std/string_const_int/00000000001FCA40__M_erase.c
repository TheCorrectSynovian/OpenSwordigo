/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA40
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
 *
 * Callers: 6
 *   0x0000000000211F78  Caver::PlayerProfile::~PlayerProfile()
 *   0x0000000000230CB8  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *   0x00000000003B4244  boost::detail::sp_counted_impl_p<Caver::GameEvent>::dispose(void)
 *   0x000000000044D1A8  Caver::PODLoader::~PODLoader()
 *
 * Callees: 1
 *   0x0000000000211F78  Caver::PlayerProfile::~PlayerProfile()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA48 string=0x00000000001FCA4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase()
{
  JUMPOUT(0x2125E4);
}

