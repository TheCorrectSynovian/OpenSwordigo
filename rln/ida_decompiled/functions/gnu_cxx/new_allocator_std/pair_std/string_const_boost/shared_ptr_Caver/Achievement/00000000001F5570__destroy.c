/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5570
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver11AchievementEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>*)
 *
 * Callers: 1
 *   0x000000000037F134  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>> *)
 *
 * Callees: 1
 *   0x000000000037F1B4  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5578 string=0x00000000001F557C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver11AchievementEEEEE7destroyEPS8_();
}

