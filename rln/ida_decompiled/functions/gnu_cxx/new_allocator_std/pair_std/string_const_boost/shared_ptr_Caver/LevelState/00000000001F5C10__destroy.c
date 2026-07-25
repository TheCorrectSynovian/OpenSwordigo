/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C10
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver10LevelStateEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>*)
 *
 * Callers: 1
 *   0x00000000003B93A0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>> *)
 *
 * Callees: 1
 *   0x00000000003B9420  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5C18 string=0x00000000001F5C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver10LevelStateEEEEE7destroyEPS8_();
}

