/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA680
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver4ItemEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Item>>*)
 *
 * Callers: 1
 *   0x00000000003C21BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Item>>> *)
 *
 * Callees: 1
 *   0x00000000003C223C  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Item>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA688 string=0x00000000001FA68C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver4ItemEEEEE7destroyEPS8_();
}

