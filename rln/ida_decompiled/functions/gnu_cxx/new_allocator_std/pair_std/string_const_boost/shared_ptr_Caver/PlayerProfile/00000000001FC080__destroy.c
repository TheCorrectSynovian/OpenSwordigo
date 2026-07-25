/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC080
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>*)
 *
 * Callers: 2
 *   0x00000000003A7124  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *   0x00000000003A7754  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>> *)
 *
 * Callees: 1
 *   0x00000000003A77D4  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC088 string=0x00000000001FC08C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEEE7destroyEPS8_();
}

