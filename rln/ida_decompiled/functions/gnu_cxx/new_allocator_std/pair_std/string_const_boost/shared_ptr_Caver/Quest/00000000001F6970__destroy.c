/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6970
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver5QuestEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Quest>>*)
 *
 * Callers: 1
 *   0x00000000003C1FDC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>> *)
 *
 * Callees: 1
 *   0x00000000003C205C  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Quest>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6978 string=0x00000000001F697C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver5QuestEEEEE7destroyEPS8_();
}

