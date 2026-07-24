/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bbdcc
 * Function: Caver::ProfileManager_Android::HandleSnapshotLoaded
 * Signature: undefined __cdecl HandleSnapshotLoaded(string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&, std::string const&) */

void Caver::ProfileManager_Android::HandleSnapshotLoaded(string *param_1,string *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  HandleDownloadedProfileData(param_1);
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = local_30[2];
    local_30[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
                    /* catch() { ... } // from try @ 005bbd58 with catch @ 005bbe3c */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


