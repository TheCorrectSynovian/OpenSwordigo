/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8000
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x00000000003B9CF8  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::string const&)
 *
 * Callees: 1
 *   0x00000000003B9F30  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8008 string=0x00000000001F800C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_();
}

