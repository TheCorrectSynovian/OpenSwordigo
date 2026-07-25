/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D40
 * Mangled: ._ZNSt4listIN5Caver12TargetActionIFvbRKSsEEESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *
 * Callers: 1
 *   0x00000000004BADE8  Caver::OnlineController_Android::AddGoogleServicesSignInHandler(Caver::TargetAction<void ()(bool,std::string const&)>)
 *
 * Callees: 1
 *   0x00000000004BB600  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D48 string=0x00000000001F5D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::list<Caver::TargetAction<void ()(bool,std::string const&)>>::_M_create_node()
{
  return _ZNSt4listIN5Caver12TargetActionIFvbRKSsEEESaIS5_EE14_M_create_nodeERKS5_();
}

