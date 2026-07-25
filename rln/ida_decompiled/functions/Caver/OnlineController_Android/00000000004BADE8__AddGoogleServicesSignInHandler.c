/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BADE8
 * Mangled: _ZN5Caver24OnlineController_Android30AddGoogleServicesSignInHandlerENS_12TargetActionIFvbRKSsEEE
 * Demangled: Caver::OnlineController_Android::AddGoogleServicesSignInHandler(Caver::TargetAction<void ()(bool,std::string const&)>)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5D40  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 2
 *   insn=0x00000000004BADFC string=0x00000000001F5D40 "P'"
 *   insn=0x00000000004BAE0C string=0x000000000052A9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController_Android::AddGoogleServicesSignInHandler(__int64 a1)
{
  __int64 v1; // x19
  __int64 node; // x0

  v1 = a1 + 16;
  node = std::list<Caver::TargetAction<void ()(bool,std::string const&)>>::_M_create_node();
  return sub_52A9AC(node, v1);
}

