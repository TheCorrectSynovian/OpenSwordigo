/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a76b4
 * Function: Caver::ProfileManager::RemoveDelegate
 * Signature: undefined __thiscall RemoveDelegate(ProfileManager * this, IProfileManagerDelegate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate*) */

void __thiscall
Caver::ProfileManager::RemoveDelegate(ProfileManager *this,IProfileManagerDelegate *param_1)

{
  long lVar1;
  IProfileManagerDelegate *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004a76cc to 005a7787 has its CatchHandler @ 004a724c */
  local_30 = param_1;
  std::
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  ::erase((_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
           *)(this + 8),&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


