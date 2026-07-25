/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A40
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>> *)
 *
 * Callers: 3
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *   0x00000000003B9078  Caver::GameState::CurrentGuideTarget(void)
 *   0x00000000003C2F98  Caver::GameState::~GameState()
 *
 * Callees: 1
 *   0x00000000003B9078  Caver::GameState::CurrentGuideTarget(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A48 string=0x0000000000200A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_erase()
{
  JUMPOUT(0x3B91C0);
}

