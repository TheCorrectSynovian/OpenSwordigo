/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00579528
 * Function: Java_com_touchfoo_swordigo_Native_storeProductFetched
 * Signature: undefined Java_com_touchfoo_swordigo_Native_storeProductFetched(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_storeProductFetched
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  StoreController_Android *this;
  undefined8 uVar6;
  StoreProduct *pSVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_88 [8];
  long local_80;
  StoreProduct *local_78;
  long *local_70;
  long local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (DAT_007e9c50 != (StoreController_Android *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    FUN_00666bb8(local_58,uVar6,&local_78);
    uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
    FUN_00666bb8(&local_60,uVar6,&local_78);
    uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_5,0);
    FUN_00666bb8(&local_68,uVar6,&local_78);
    pSVar7 = operator_new(0x10);
    FUN_0066a528(pSVar7,local_58);
    FUN_0066a528(pSVar7 + 8,&local_68);
    local_78 = pSVar7;
    boost::detail::shared_count::shared_count<Caver::StoreProduct>((shared_count *)&local_70,pSVar7)
    ;
    boost::detail::sp_enable_shared_from_this(&local_78,pSVar7,pSVar7);
    this = DAT_007e9c50;
    FUN_00666bb8(&local_80,&DAT_0068fbeb,auStack_88);
    Caver::StoreController_Android::HandleProductFetch
              (this,(string *)local_58,(shared_ptr *)&local_78,(string *)&local_80);
    puVar5 = PTR_DAT_007e5de8;
    plVar4 = local_70;
    if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
        plVar4 = local_70;
      }
    }
    if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[1], plVar4[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar8 = plVar4[2];
      plVar4[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((undefined *)(local_68 + -0x18) != puVar5) {
      piVar9 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_68 + -0x18));
      }
    }
    if ((undefined *)(local_60 + -0x18) != puVar5) {
      piVar9 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
    if ((undefined *)(local_58[0] + -0x18) != puVar5) {
      piVar9 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


