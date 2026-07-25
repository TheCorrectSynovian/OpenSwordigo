/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F63D0
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIKN5Caver5ModelEEEEE7destroyEPS9_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Model const>>*)
 *
 * Callers: 1
 *   0x000000000044CBE4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>> *)
 *
 * Callees: 1
 *   0x000000000044CC64  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Model const>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F63D8 string=0x00000000001F63DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIKN5Caver5ModelEEEEE7destroyEPS9_();
}

