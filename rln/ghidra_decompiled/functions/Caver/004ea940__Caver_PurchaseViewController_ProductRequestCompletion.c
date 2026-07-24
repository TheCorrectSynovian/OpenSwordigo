/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ea940
 * Function: Caver::PurchaseViewController::ProductRequestCompletion
 * Signature: undefined __cdecl ProductRequestCompletion(string * param_1, shared_ptr * param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&) */

void Caver::PurchaseViewController::ProductRequestCompletion
               (string *param_1,shared_ptr *param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  GUIView *pGVar6;
  string *in_x3;
  int in_w5;
  size_t __n;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_78 [8];
  long local_70;
  GUIAlertView *local_68;
  long *local_60;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __n = *(size_t *)((long)*(void **)param_2 + -0x18);
  if ((__n == *(size_t *)((long)*(void **)(param_1 + 0x60) + -0x18)) &&
     (iVar5 = memcmp(*(void **)param_2,*(void **)(param_1 + 0x60),__n), iVar5 == 0)) {
    lVar7 = *(long *)param_3;
    if (lVar7 != 0) {
      lVar9 = *(long *)(param_3 + 8);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
      }
      plVar10 = *(long **)(param_1 + 0x70);
      *(long *)(param_1 + 0x68) = lVar7;
      *(long *)(param_1 + 0x70) = lVar9;
      if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar7 = plVar10[2];
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      FUN_00666bb8(&local_50,0x68f6ba,&local_68);
      FUN_00666bb8(&local_70,&DAT_00692fe7,auStack_78);
      GameInterfaceBuilder::AlertView
                ((GameInterfaceBuilder *)&local_70,in_x3,(string *)0x1,(int)&local_50,
                 (string *)0xffffffff,in_w5);
      puVar4 = PTR_DAT_007e5de8;
      if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_70 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar5 = *piVar8;
          *piVar8 = iVar5 + -1;
        }
        else {
          do {
            iVar5 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar5 < 1) {
          operator_delete((undefined *)(local_70 + -0x18));
        }
      }
      pGVar6 = *(GUIView **)(param_1 + 0x18);
      if (pGVar6 == (GUIView *)0x0) {
        (**(code **)(*(long *)param_1 + 0x18))(param_1);
        pGVar6 = *(GUIView **)(param_1 + 0x18);
      }
      plVar10 = *(long **)(param_1 + 0x20);
      if (plVar10 != (long *)0x0) {
        plVar10[1] = plVar10[1] + 1;
      }
      GUIAlertView::PresentFromView(local_68,pGVar6);
      if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar7 = plVar10[2];
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      param_1[0x78] = (string)0x1;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar7 = local_60[2];
        local_60[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*local_60 + 0x18))(local_60);
        }
      }
      if ((undefined *)(local_50 + -0x18) != puVar4) {
        piVar8 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar5 = *piVar8;
          *piVar8 = iVar5 + -1;
        }
        else {
          do {
            iVar5 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar5 < 1) {
          operator_delete((undefined *)(local_50 + -0x18));
        }
      }
    }
    UpdateView((PurchaseViewController *)param_1);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


