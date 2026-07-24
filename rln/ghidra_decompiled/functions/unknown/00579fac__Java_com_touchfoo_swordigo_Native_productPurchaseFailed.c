/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00579fac
 * Function: Java_com_touchfoo_swordigo_Native_productPurchaseFailed
 * Signature: undefined Java_com_touchfoo_swordigo_Native_productPurchaseFailed(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_productPurchaseFailed
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  long local_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (DAT_007e9c50 != (StoreController_Android *)0x0) {
    uVar5 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    FUN_00666bb8(&local_48,uVar5,&local_50);
    uVar5 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
    FUN_00666bb8(&local_50,uVar5,auStack_40);
    Caver::StoreController_Android::HandleProductPurchase
              (DAT_007e9c50,(string *)&local_48,false,(string *)&local_50);
    puVar4 = PTR_DAT_007e5de8;
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if ((undefined *)(local_48 + -0x18) != puVar4) {
      piVar6 = (int *)(local_48 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


