/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f3374
 * Function: Caver::StoreViewController::ProductRequestCompletion
 * Signature: undefined __cdecl ProductRequestCompletion(string * param_1, shared_ptr * param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::ProductRequestCompletion(std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&) */

void Caver::StoreViewController::ProductRequestCompletion
               (string *param_1,shared_ptr *param_2,string *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  void *pvVar8;
  StoreController *this;
  void *__s1;
  GUIView *pGVar9;
  size_t sVar10;
  string *in_x3;
  int in_w5;
  long lVar11;
  int *piVar12;
  GUIAlertView *pGVar13;
  long lVar14;
  StoreProductView *this_00;
  GUIButton *this_01;
  long *plVar15;
  StripeView *this_02;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_88 [8];
  GUIAlertView *local_80;
  long *local_78;
  long local_70 [2];
  long local_60;
  long local_58;
  
                    /* try { // try from 004f3384 to 005f338b has its CatchHandler @ 004f33b8 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  param_1[0xd0] = (string)0x1;
                    /* catch() { ... } // from try @ 004f3384 with catch @ 004f33b8 */
  if (*(long *)param_3 == 0) {
    this = (StoreController *)StoreController::SharedController();
    uVar17 = StoreController::IsProductUnlockedCheck(this,(string *)param_2);
    if ((uVar17 & 1) == 0) {
      if (param_1[0x68] == (string)0x0) {
        this_02 = *(StripeView **)(*(long *)(param_1 + 0x58) + 0x110);
        plVar15 = (long *)StoreController::SharedController();
        (**(code **)(*plVar15 + 0x10))(local_70);
        FUN_0035a030(&local_60,"Could not connect to ",local_70);
        FUN_0066a528(&local_80,&local_60);
        FUN_006677d4(&local_80," Store",6);
        StripeView::SetTitle(this_02,(string *)&local_80);
        puVar6 = PTR_DAT_007e5de8;
        if (local_80 + -0x18 != (GUIAlertView *)PTR_DAT_007e5de8) {
          pGVar13 = local_80 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *(int *)pGVar13;
            *(int *)pGVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *(int *)pGVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
              if (bVar4) {
                *(int *)pGVar13 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete(local_80 + -0x18);
          }
        }
        if ((undefined *)(local_60 + -0x18) != puVar6) {
          piVar12 = (int *)(local_60 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar12;
            *piVar12 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_60 + -0x18));
          }
        }
        if ((undefined *)(local_70[0] + -0x18) != puVar6) {
          piVar12 = (int *)(local_70[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar12;
            *piVar12 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_70[0] + -0x18));
          }
        }
        param_1[0x68] = (string)0x1;
        FUN_00666bb8(&local_60,0x68f6ba,&local_80);
        FUN_00666bb8(local_70,&DAT_00692fe7,auStack_88);
        GameInterfaceBuilder::AlertView
                  ((GameInterfaceBuilder *)local_70,in_x3,(string *)0x1,(int)&local_60,
                   (string *)0xffffffff,in_w5);
        if ((undefined *)(local_70[0] + -0x18) != puVar6) {
          piVar12 = (int *)(local_70[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar12;
            *piVar12 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_70[0] + -0x18));
          }
        }
        pGVar13 = local_80;
        pGVar9 = *(GUIView **)(param_1 + 0x18);
        if (pGVar9 == (GUIView *)0x0) {
          (**(code **)(*(long *)param_1 + 0x18))(param_1);
          pGVar9 = *(GUIView **)(param_1 + 0x18);
        }
        plVar15 = *(long **)(param_1 + 0x20);
        if (plVar15 != (long *)0x0) {
          plVar15[1] = plVar15[1] + 1;
        }
        GUIAlertView::PresentFromView(pGVar13,pGVar9);
        if ((plVar15 != (long *)0x0) &&
           (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          lVar11 = plVar15[2];
          plVar15[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
        if ((local_78 != (long *)0x0) &&
           (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*local_78 + 0x10))(local_78);
          lVar11 = local_78[2];
          local_78[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*local_78 + 0x18))(local_78);
          }
        }
        if ((undefined *)(local_60 + -0x18) != puVar6) {
          piVar12 = (int *)(local_60 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar12;
            *piVar12 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_60 + -0x18));
          }
        }
      }
      lVar11 = *(long *)(param_1 + 0x70);
      lVar16 = *(long *)(param_1 + 0x78) - lVar11;
      if (lVar16 != 0) {
        pvVar8 = *(void **)param_2;
        lVar14 = 0;
        uVar17 = 0;
        sVar10 = *(size_t *)((long)pvVar8 + -0x18);
        do {
          __s1 = *(void **)(lVar11 + uVar17 * 8);
          if ((*(size_t *)((long)__s1 + -0x18) == sVar10) &&
             (iVar7 = memcmp(__s1,pvVar8,sVar10), iVar7 == 0)) {
            this_00 = *(StoreProductView **)(*(long *)(*(long *)(param_1 + 0x58) + 0x140) + lVar14);
            if (this_00 != (StoreProductView *)0x0) {
              StoreProductView::SetBuyButtonEnabled(this_00,false);
              this_01 = *(GUIButton **)(this_00 + 0x100);
              FUN_00666bb8(&local_80,"Unavailable",local_70);
              GUIButton::SetTitle(this_01,(string *)&local_80);
                    /* catch() { ... } // from try @ 004f3724 with catch @ 004f3710 */
              if (local_80 + -0x18 != (GUIAlertView *)PTR_DAT_007e5de8) {
                pGVar13 = local_80 + -8;
                if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                  iVar7 = *(int *)pGVar13;
                  *(int *)pGVar13 = iVar7 + -1;
                }
                else {
                  do {
                    iVar7 = *(int *)pGVar13;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
                    if (bVar4) {
                      *(int *)pGVar13 = iVar7 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                if (iVar7 < 1) {
                  operator_delete(local_80 + -0x18);
                }
              }
            }
            break;
          }
          uVar17 = uVar17 + 1;
          lVar14 = lVar14 + 0x10;
        } while (uVar17 < (ulong)(lVar16 >> 3));
      }
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0x70);
    if (*(long *)(param_1 + 0x78) != lVar11) {
      lVar16 = 0;
      uVar17 = 0;
      do {
        pvVar8 = *(void **)(lVar11 + uVar17 * 8);
        sVar10 = *(size_t *)((long)pvVar8 + -0x18);
        if ((sVar10 == *(size_t *)((long)*(void **)param_2 + -0x18)) &&
           (iVar7 = memcmp(pvVar8,*(void **)param_2,sVar10), iVar7 == 0)) {
          uVar2 = *(undefined8 *)param_3;
          lVar11 = *(long *)(param_3 + 8);
          lVar14 = *(long *)(param_1 + 0x88);
          if (lVar11 != 0) {
            *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
          }
          puVar1 = (undefined8 *)(lVar14 + lVar16);
          plVar15 = (long *)puVar1[1];
          *puVar1 = uVar2;
          puVar1[1] = lVar11;
          if ((plVar15 != (long *)0x0) &&
             (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            lVar11 = plVar15[2];
            plVar15[2] = lVar11 + -1;
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
        }
        lVar11 = *(long *)(param_1 + 0x70);
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x10;
      } while (uVar17 < (ulong)(*(long *)(param_1 + 0x78) - lVar11 >> 3));
    }
    UpdateProductBuyButton((StoreViewController *)param_1,(string *)param_2);
  }
                    /* try { // try from 004f3720 to 005f3723 has its CatchHandler @ 004f3734 */
                    /* try { // try from 004f3724 to 005f3747 has its CatchHandler @ 004f3710 */
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 004f3720 with catch @ 004f3734 */
  return;
}


