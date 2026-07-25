/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203250
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver8GUILabelEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>*)
 *
 * Callers: 1
 *   0x000000000043361C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>> *)
 *
 * Callees: 1
 *   0x000000000043369C  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203258 string=0x000000000020325C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver8GUILabelEEEEE7destroyEPS8_();
}

