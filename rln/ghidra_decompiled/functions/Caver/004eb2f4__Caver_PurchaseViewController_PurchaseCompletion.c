/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004eb2f4
 * Function: Caver::PurchaseViewController::PurchaseCompletion
 * Signature: undefined __cdecl PurchaseCompletion(string * param_1, bool param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::PurchaseCompletion(std::string const&, bool, std::string const&)
    */

void Caver::PurchaseViewController::PurchaseCompletion(string *param_1,bool param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  GUIView *pGVar7;
  size_t __n;
  string *in_x3;
  int in_w5;
  long lVar8;
  GUIAlertView *pGVar9;
  int *piVar10;
  long *plVar11;
  GUIAlertView *pGVar12;
  undefined1 auStack_88 [8];
  long local_80;
  GUIAlertView *local_78;
  long *local_70;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0066a528(&local_78,*(undefined8 *)(param_1 + 0x68));
  pGVar9 = local_78;
  __n = *(size_t *)((long)*(void **)(ulong)param_2 + -0x18);
  pGVar12 = local_78 + -0x18;
  if (__n == *(size_t *)pGVar12) {
    iVar6 = memcmp(*(void **)(ulong)param_2,local_78,__n);
    bVar5 = iVar6 != 0;
  }
  else {
    bVar5 = true;
  }
  puVar4 = PTR_DAT_007e5de8;
  if (pGVar12 != (GUIAlertView *)PTR_DAT_007e5de8) {
    pGVar9 = pGVar9 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *(int *)pGVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar2) {
          *(int *)pGVar9 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(pGVar12);
    }
  }
  if (!bVar5) {
    if (((ulong)param_3 & 1) == 0) {
      if (*(long *)(*(long *)in_x3 + -0x18) != 0) {
        FUN_00666bb8(&local_60,0x68f6ba,&local_78);
        FUN_00666bb8(&local_80,"PURCHASE FAILED",auStack_88);
        GameInterfaceBuilder::AlertView
                  ((GameInterfaceBuilder *)&local_80,in_x3,(string *)0x1,(int)&local_60,
                   (string *)0xffffffff,in_w5);
        if ((undefined *)(local_80 + -0x18) != puVar4) {
          piVar10 = (int *)(local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar6 = *piVar10;
            *piVar10 = iVar6 + -1;
          }
          else {
            do {
              iVar6 = *piVar10;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = iVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar6 < 1) {
            operator_delete((undefined *)(local_80 + -0x18));
          }
        }
        pGVar7 = *(GUIView **)(param_1 + 0x18);
        if (pGVar7 == (GUIView *)0x0) {
          (**(code **)(*(long *)param_1 + 0x18))(param_1);
          pGVar7 = *(GUIView **)(param_1 + 0x18);
        }
        plVar11 = *(long **)(param_1 + 0x20);
        if (plVar11 != (long *)0x0) {
          plVar11[1] = plVar11[1] + 1;
        }
        GUIAlertView::PresentFromView(local_78,pGVar7);
        if ((plVar11 != (long *)0x0) &&
           (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        if ((local_70 != (long *)0x0) &&
           (lVar8 = local_70[1], local_70[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          (**(code **)(*local_70 + 0x10))(local_70);
          lVar8 = local_70[2];
          local_70[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            (**(code **)(*local_70 + 0x18))(local_70);
          }
        }
        if ((undefined *)(local_60 + -0x18) != puVar4) {
          piVar10 = (int *)(local_60 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar6 = *piVar10;
            *piVar10 = iVar6 + -1;
          }
          else {
            do {
              iVar6 = *piVar10;
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = iVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar6 < 1) {
            operator_delete((undefined *)(local_60 + -0x18));
          }
        }
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 0x138) + 0xe4) = 0;
      EnableBuyButton((PurchaseViewController *)param_1);
    }
    else {
      HandlePurchaseSuccess((PurchaseViewController *)param_1);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


