/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00466ce0
 * Function: Caver::GuidePurchaseViewController::PurchaseCompletion
 * Signature: undefined __cdecl PurchaseCompletion(string * param_1, bool param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::PurchaseCompletion(std::string const&, bool, std::string
   const&) */

void Caver::GuidePurchaseViewController::PurchaseCompletion
               (string *param_1,bool param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  GUIView *pGVar8;
  size_t __n;
  string *in_x3;
  int in_w5;
  long lVar9;
  int *piVar10;
  long *plVar11;
  GUIAlertView *this;
  size_t *psVar12;
  undefined1 auStack_88 [8];
  long local_80;
  void *local_78;
  long *local_70;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(&local_78,"compass",&local_60);
  pvVar5 = local_78;
  __n = *(size_t *)((long)*(void **)(ulong)param_2 + -0x18);
  psVar12 = (size_t *)((long)local_78 + -0x18);
  if (__n == *psVar12) {
    iVar7 = memcmp(*(void **)(ulong)param_2,local_78,__n);
    bVar6 = iVar7 != 0;
  }
  else {
    bVar6 = true;
  }
  puVar4 = PTR_DAT_007e5de8;
  if (psVar12 != (size_t *)PTR_DAT_007e5de8) {
    piVar10 = (int *)((long)pvVar5 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar10;
      *piVar10 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(psVar12);
    }
  }
  if (!bVar6) {
    if (((ulong)param_3 & 1) == 0) {
      if (*(long *)(*(long *)in_x3 + -0x18) != 0) {
        FUN_00666bb8(&local_60,0x68f6ba,&local_78);
        FUN_00666bb8(&local_80,"STORE ERROR",auStack_88);
        GameInterfaceBuilder::AlertView
                  ((GameInterfaceBuilder *)&local_80,in_x3,(string *)0x1,(int)&local_60,
                   (string *)0xffffffff,in_w5);
        if (local_70 != (long *)0x0) {
          local_70[1] = local_70[1] + 1;
        }
        plVar11 = *(long **)(param_1 + 0x78);
        *(void **)(param_1 + 0x70) = local_78;
        *(long **)(param_1 + 0x78) = local_70;
        if ((plVar11 != (long *)0x0) &&
           (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar9 = plVar11[2];
          plVar11[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        if ((local_70 != (long *)0x0) &&
           (lVar9 = local_70[1], local_70[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*local_70 + 0x10))(local_70);
          lVar9 = local_70[2];
          local_70[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00466be0 with catch @ 00466e6c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00466b74 with catch @ 00466e78
                        */
            (**(code **)(*local_70 + 0x18))(local_70);
          }
        }
        if ((undefined *)(local_80 + -0x18) != puVar4) {
          piVar10 = (int *)(local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar10;
            *piVar10 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar10;
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar6) {
                *piVar10 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_80 + -0x18));
          }
        }
        this = *(GUIAlertView **)(param_1 + 0x70);
        *(string **)(this + 0x118) = param_1 + 0x50;
                    /* try { // try from 00466e98 to 00566e9f has its CatchHandler @ 00466ea8 */
        pGVar8 = *(GUIView **)(param_1 + 0x18);
        if (pGVar8 == (GUIView *)0x0) {
                    /* try { // try from 00466ea0 to 00566eab has its CatchHandler @ 00466a5c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00466e98 with catch @ 00466ea8
                        */
          (**(code **)(*(long *)param_1 + 0x18))(param_1);
          pGVar8 = *(GUIView **)(param_1 + 0x18);
        }
        plVar11 = *(long **)(param_1 + 0x20);
        if (plVar11 != (long *)0x0) {
          plVar11[1] = plVar11[1] + 1;
        }
        GUIAlertView::PresentFromView(this,pGVar8);
        if ((plVar11 != (long *)0x0) &&
           (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar9 = plVar11[2];
          plVar11[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        if ((undefined *)(local_60 + -0x18) != puVar4) {
          piVar10 = (int *)(local_60 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar10;
            *piVar10 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar10;
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar6) {
                *piVar10 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_60 + -0x18));
          }
        }
      }
      lVar9 = *(long *)(param_1 + 0x60);
      *(undefined1 *)(*(long *)(lVar9 + 0x140) + 0xe4) = 0;
      *(undefined1 *)(*(long *)(lVar9 + 0x130) + 0xe4) = 0;
      SetBuyButtonEnabled((GuidePurchaseViewController *)param_1,true);
    }
    else {
      HandlePurchaseSuccess((GuidePurchaseViewController *)param_1);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


