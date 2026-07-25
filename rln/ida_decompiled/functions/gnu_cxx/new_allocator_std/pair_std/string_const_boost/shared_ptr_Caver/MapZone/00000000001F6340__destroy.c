/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6340
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>*)
 *
 * Callers: 1
 *   0x00000000003C2638  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>> *)
 *
 * Callees: 1
 *   0x00000000003C26B8  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6348 string=0x00000000001F634C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEEE7destroyEPS8_();
}

