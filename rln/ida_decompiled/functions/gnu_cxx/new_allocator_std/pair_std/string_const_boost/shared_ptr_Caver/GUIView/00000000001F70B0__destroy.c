/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F70B0
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>*)
 *
 * Callers: 1
 *   0x00000000003D8500  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Callees: 1
 *   0x00000000003D8580  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F70B8 string=0x00000000001F70BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEEE7destroyEPS8_();
}

