/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A76B4
 * Mangled: _ZN5Caver14ProfileManager14RemoveDelegateEPNS_23IProfileManagerDelegateE
 * Demangled: Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callers: 1
 *   0x00000000001F78D0  Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6530  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000003A76C0 string=0x00000000003A76C4 "S"
 *   insn=0x00000000003A76C4 string=0x00000000003A76C8 "h"
 *   insn=0x00000000003A76DC string=0x00000000003A76E0 "h"
 *   insn=0x00000000003A76DC string=0x00000000001F6530 "0'"
 *   insn=0x00000000003A7700 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProfileManager::RemoveDelegate()
{
  _ReadStatusReg(TPIDR_EL0);
  return std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase();
}

