/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC8D0
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEEEE7destroyEPS9_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>*)
 *
 * Callers: 1
 *   0x000000000044CDC4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>> *)
 *
 * Callees: 1
 *   0x000000000044CE44  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC8D8 string=0x00000000001FC8DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEEEE7destroyEPS9_();
}

