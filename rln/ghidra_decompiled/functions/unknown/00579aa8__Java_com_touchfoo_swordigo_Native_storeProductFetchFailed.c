/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00579aa8
 * Function: Java_com_touchfoo_swordigo_Native_storeProductFetchFailed
 * Signature: undefined Java_com_touchfoo_swordigo_Native_storeProductFetchFailed(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_storeProductFetchFailed
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined8 local_58;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00576d48 with catch @ 00579ab0 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (DAT_007e9c50 != (StoreController_Android *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    FUN_00666bb8(&local_40,uVar6,&local_58);
                    /* catch() { ... } // from try @ 00576d34 with catch @ 00579b10 */
                    /* catch() { ... } // from try @ 00576d0c with catch @ 00579b14 */
    uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
    FUN_00666bb8(&local_48,uVar6,&local_58);
    local_58 = 0;
    local_50 = (long *)0x0;
    Caver::StoreController_Android::HandleProductFetch
              (DAT_007e9c50,(string *)&local_40,(shared_ptr *)&local_58,(string *)&local_48);
    plVar5 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar7 = plVar5[2];
      plVar5[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_48 + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_48 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
    if ((undefined *)(local_40 + -0x18) != puVar4) {
      piVar8 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


