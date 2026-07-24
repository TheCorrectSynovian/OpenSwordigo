/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5d0c
 * Function: Caver::ProfileManager::sharedManager
 * Signature: undefined __cdecl sharedManager(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::sharedManager() */

void Caver::ProfileManager::sharedManager(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ProfileManager *pPVar4;
  long lVar5;
  ProfileManager *pPVar6;
  ProfileManager *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_007e9950 == (ProfileManager *)0x0) {
    pPVar4 = operator_new(0x88);
    *(undefined **)pPVar4 = PTR_vtable_007e7540 + 0x10;
    pPVar6 = pPVar4 + 0x10;
    *(undefined8 *)pPVar6 = 0;
    *(undefined8 *)(pPVar4 + 0x18) = 0;
    *(ProfileManager **)(pPVar4 + 0x20) = pPVar6;
    *(ProfileManager **)(pPVar4 + 0x28) = pPVar6;
    *(undefined8 *)(pPVar4 + 0x30) = 0;
    *(undefined8 *)(pPVar4 + 0x38) = 0;
    *(undefined8 *)(pPVar4 + 0x40) = 0;
    pPVar6 = pPVar4 + 0x50;
    *(undefined8 *)pPVar6 = 0;
    *(ProfileManager **)(pPVar4 + 0x60) = pPVar6;
    *(ProfileManager **)(pPVar4 + 0x68) = pPVar6;
    *(undefined8 *)(pPVar4 + 0x80) = 0xc059000000000000;
    *(undefined8 *)(pPVar4 + 0x58) = 0;
    *(undefined8 *)(pPVar4 + 0x70) = 0;
    pPVar4[0x78] = (ProfileManager)0x0;
    local_48 = pPVar4;
    boost::detail::shared_count::shared_count<Caver::ProfileManager>
              ((shared_count *)&local_40,pPVar4);
    boost::detail::sp_enable_shared_from_this(&local_48,pPVar4,pPVar4);
    plVar3 = local_40;
    pPVar4 = local_48;
    plVar2 = DAT_007e9958;
    local_48 = DAT_007e9950;
    local_40 = DAT_007e9958;
    DAT_007e9950 = pPVar4;
    DAT_007e9958 = plVar3;
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_007e9950);
  }
  return;
}


