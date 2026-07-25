/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6530
 * Mangled: ._ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5eraseERKS2_
 * Demangled: std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *
 * Callers: 1
 *   0x00000000003A76B4  Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callees: 1
 *   0x00000000003A7F2C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6538 string=0x00000000001F653C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase()
{
  return _ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE5eraseERKS2_();
}

