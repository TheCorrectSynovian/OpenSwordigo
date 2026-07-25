/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D00
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEEE7destroyEPSA_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy(std::pair<std::string const,boost::function<Caver::Component * ()(void)>>*)
 *
 * Callers: 1
 *   0x00000000002449E4  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *
 * Callees: 1
 *   0x0000000000244A64  __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy(std::pair<std::string const,boost::function<Caver::Component * ()(void)>>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203D08 string=0x0000000000203D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEEE7destroyEPSA_();
}

