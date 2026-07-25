/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E20
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver5QuestEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Quest>,std::allocator<boost::shared_ptr<Caver::Quest>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Quest>*,std::vector<boost::shared_ptr<Caver::Quest>,std::allocator<boost::shared_ptr<Caver::Quest>>>>,boost::shared_ptr<Caver::Quest> const&)
 *
 * Callers: 1
 *   0x00000000003B0084  Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *
 * Callees: 1
 *   0x00000000003B2F98  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Quest>> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E28 string=0x0000000000201E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::Quest>>::_M_insert_aux()
{
  JUMPOUT(0x3B3014);
}

