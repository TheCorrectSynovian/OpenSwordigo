/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A80
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver9GameEventEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GameEvent>*,std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>>,boost::shared_ptr<Caver::GameEvent> const&)
 *
 * Callers: 1
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Callees: 1
 *   0x00000000003B3E64  std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GameEvent>*,std::vector<boost::shared_ptr<Caver::GameEvent>,std::allocator<boost::shared_ptr<Caver::GameEvent>>>>,boost::shared_ptr<Caver::GameEvent> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A88 string=0x0000000000202A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GameEvent>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver9GameEventEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

