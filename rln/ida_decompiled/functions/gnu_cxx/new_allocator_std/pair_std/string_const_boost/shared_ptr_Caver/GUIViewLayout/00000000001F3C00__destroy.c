/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C00
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>*)
 *
 * Callers: 1
 *   0x00000000003B56BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> *)
 *
 * Callees: 1
 *   0x00000000003B573C  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C08 string=0x00000000001F3C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEEE7destroyEPS8_();
}

