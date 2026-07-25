/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD160
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10LevelStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::find(std::string const&)
 *
 * Callers: 2
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x00000000003B82D4  Caver::GameState::AllNodesVisited(void)
 *
 * Callees: 1
 *   0x00000000003BA070  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD168 string=0x00000000001FD16C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::find()
{
  JUMPOUT(0x3BA0EC);
}

