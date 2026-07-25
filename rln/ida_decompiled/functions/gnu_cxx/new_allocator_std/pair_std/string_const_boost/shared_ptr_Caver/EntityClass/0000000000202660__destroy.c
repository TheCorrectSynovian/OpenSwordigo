/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202660
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver11EntityClassEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>*)
 *
 * Callers: 1
 *   0x00000000003C1DFC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>> *)
 *
 * Callees: 1
 *   0x00000000003C1E7C  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202668 string=0x000000000020266C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver11EntityClassEEEEE7destroyEPS8_();
}

