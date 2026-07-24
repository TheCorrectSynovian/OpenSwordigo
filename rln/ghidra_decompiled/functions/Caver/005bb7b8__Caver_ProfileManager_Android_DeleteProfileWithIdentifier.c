/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb7b8
 * Function: Caver::ProfileManager_Android::DeleteProfileWithIdentifier
 * Signature: undefined __thiscall DeleteProfileWithIdentifier(ProfileManager_Android * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::DeleteProfileWithIdentifier(std::string const&) */

void __thiscall
Caver::ProfileManager_Android::DeleteProfileWithIdentifier
          (ProfileManager_Android *this,string *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ProfileManager::ProfileWithIdentifier((string *)this);
  if (local_48 != 0) {
    AndroidDeleteSnapshot(param_1);
  }
  ProfileManager::DeleteProfileWithIdentifier((ProfileManager *)this,param_1);
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 005bb848 to 006bb853 has its CatchHandler @ 005bba68 */
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
                    /* try { // try from 005bb858 to 006bb8d3 has its CatchHandler @ 005bba74 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


