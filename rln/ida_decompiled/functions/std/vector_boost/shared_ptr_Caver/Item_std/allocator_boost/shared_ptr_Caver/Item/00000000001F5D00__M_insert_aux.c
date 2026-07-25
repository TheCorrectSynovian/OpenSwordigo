/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D00
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver4ItemEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Item>*,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>>,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000003AD294  Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *
 * Callees: 1
 *   0x00000000003AF2C0  std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Item>*,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>>>,boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D08 string=0x00000000001F5D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::Item>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver4ItemEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

