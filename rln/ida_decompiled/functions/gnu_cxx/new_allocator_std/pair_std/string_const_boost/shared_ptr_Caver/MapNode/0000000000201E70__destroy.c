/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E70
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7MapNodeEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>*)
 *
 * Callers: 1
 *   0x00000000003C2818  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>> *)
 *
 * Callees: 1
 *   0x00000000003C2898  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E78 string=0x0000000000201E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7MapNodeEEEEE7destroyEPS8_();
}

