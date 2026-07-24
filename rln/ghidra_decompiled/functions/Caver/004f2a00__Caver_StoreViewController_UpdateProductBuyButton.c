/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f2a00
 * Function: Caver::StoreViewController::UpdateProductBuyButton
 * Signature: undefined __thiscall UpdateProductBuyButton(StoreViewController * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::UpdateProductBuyButton(std::string const&) */

void __thiscall
Caver::StoreViewController::UpdateProductBuyButton(StoreViewController *this,string *param_1)

{
  string *psVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  StoreViewController *pSVar8;
  StoreController *this_00;
  undefined *puVar9;
  int *piVar10;
  long lVar11;
  GUIButton *pGVar12;
  long lVar13;
  StoreProductView *this_01;
  void *__s2;
  size_t __n;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float local_88;
  long local_80;
  long local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
                    /* catch() { ... } // from try @ 004f2a7c with catch @ 004f2a10 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar11 = *(long *)(this + 0x70);
  if (*(long *)(this + 0x78) - lVar11 != 0) {
    __s2 = *(void **)param_1;
    uVar15 = 0;
    uVar16 = *(long *)(this + 0x78) - lVar11 >> 3;
    __n = *(size_t *)((long)__s2 + -0x18);
    do {
      psVar1 = (string *)(lVar11 + uVar15 * 8);
      pvVar7 = *(void **)psVar1;
                    /* try { // try from 004f2a74 to 005f2a7b has its CatchHandler @ 004f2af8 */
      if ((*(size_t *)((long)pvVar7 + -0x18) == __n) &&
         (iVar6 = memcmp(pvVar7,__s2,__n), iVar6 == 0)) {
        lVar13 = 0;
                    /* try { // try from 004f2a7c to 005f2b0b has its CatchHandler @ 004f2a10 */
        uVar14 = 0;
        do {
          pvVar7 = *(void **)(lVar11 + uVar14 * 8);
          if ((*(size_t *)((long)pvVar7 + -0x18) == __n) &&
             (iVar6 = memcmp(pvVar7,__s2,__n), iVar6 == 0)) {
            this_01 = *(StoreProductView **)(*(long *)(*(long *)(this + 0x58) + 0x140) + lVar13);
            if (this_01 != (StoreProductView *)0x0) {
              if ((this[0xd1] == (StoreViewController)0x0) &&
                 (pSVar8 = (StoreViewController *)
                           std::
                           _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                           ::find((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                                   *)(this + 0xa0),psVar1), this + 0xa8 == pSVar8)) {
                pGVar12 = *(GUIButton **)(this_01 + 0x100);
                FUN_00666bb8(&local_78,&DAT_0068f6a7,auStack_70);
                GUIButton::SetTitle(pGVar12,(string *)&local_78);
                if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
                  piVar10 = (int *)(local_78 + -8);
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar6 = *piVar10;
                    *piVar10 = iVar6 + -1;
                  }
                  else {
                    do {
                      iVar6 = *piVar10;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                      if (bVar4) {
                        *piVar10 = iVar6 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  if (iVar6 < 1) {
                    operator_delete((undefined *)(local_78 + -0x18));
                  }
                }
                StoreProductView::SetBuyButtonEnabled(this_01,false);
                goto LAB_004f2ad0;
              }
              this_00 = (StoreController *)StoreController::SharedController();
              uVar16 = StoreController::IsProductUnlockedCheck(this_00,param_1);
              if ((uVar16 & 1) != 0) {
                StoreProductView::SetBuyButtonEnabled(this_01,false);
                pGVar12 = *(GUIButton **)(this_01 + 0x100);
                FUN_00666bb8(&local_78,"Owned",auStack_70);
                GUIButton::SetTitle(pGVar12,(string *)&local_78);
                if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
                  piVar10 = (int *)(local_78 + -8);
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar6 = *piVar10;
                    *piVar10 = iVar6 + -1;
                  }
                  else {
                    do {
                      iVar6 = *piVar10;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                      if (bVar4) {
                        *piVar10 = iVar6 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  if (iVar6 < 1) {
                    operator_delete((undefined *)(local_78 + -0x18));
                  }
                }
                goto LAB_004f2ad0;
              }
              plVar2 = (long *)(*(long *)(this + 0x88) + uVar15 * 0x10);
              lVar11 = *plVar2;
              plVar2 = (long *)plVar2[1];
              if (plVar2 != (long *)0x0) {
                plVar2[1] = plVar2[1] + 1;
              }
              if (lVar11 != 0) {
                StoreProductView::SetBuyButtonEnabled(this_01,true);
                pGVar12 = *(GUIButton **)(this_01 + 0x100);
                lVar11 = lVar11 + 8;
                FUN_0066a528(&local_80,lVar11);
                FUN_0066a528(&local_78,&local_80);
                FUN_006677d4(&local_78," - Details",10);
                GUIButton::SetTitle(pGVar12,(string *)&local_78);
                puVar9 = PTR_DAT_007e5de8;
                if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
                  piVar10 = (int *)(local_78 + -8);
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar6 = *piVar10;
                    *piVar10 = iVar6 + -1;
                  }
                  else {
                    do {
                      iVar6 = *piVar10;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                      if (bVar4) {
                        *piVar10 = iVar6 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  if (iVar6 < 1) {
                    operator_delete((undefined *)(local_78 + -0x18));
                  }
                }
                if ((undefined *)(local_80 + -0x18) != puVar9) {
                  piVar10 = (int *)(local_80 + -8);
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar6 = *piVar10;
                    *piVar10 = iVar6 + -1;
                  }
                  else {
                    do {
                      iVar6 = *piVar10;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                      if (bVar4) {
                        *piVar10 = iVar6 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  if (iVar6 < 1) {
                    operator_delete((undefined *)(local_80 + -0x18));
                  }
                }
                GUIButton::titleLabel(*(GUIButton **)(this_01 + 0x100));
                GUILabel::TextSize();
                pGVar12 = *(GUIButton **)(this_01 + 0x100);
                if (*(float *)(pGVar12 + 0x8c) + -10.0 < local_88) {
                  FUN_0066a528(&local_80,lVar11);
                  FUN_0066a528(&local_78,&local_80);
                  FUN_006677d4(&local_78," - Info",7);
                  GUIButton::SetTitle(pGVar12,(string *)&local_78);
                  if ((undefined *)(local_78 + -0x18) != puVar9) {
                    piVar10 = (int *)(local_78 + -8);
                    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                      iVar6 = *piVar10;
                      *piVar10 = iVar6 + -1;
                    }
                    else {
                      do {
                        iVar6 = *piVar10;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                        if (bVar4) {
                          *piVar10 = iVar6 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    if (iVar6 < 1) {
                    /* try { // try from 004f2f78 to 005f2f8b has its CatchHandler @ 004f2fb0 */
                      operator_delete((undefined *)(local_78 + -0x18));
                    }
                  }
                  if ((undefined *)(local_80 + -0x18) != puVar9) {
                    piVar10 = (int *)(local_80 + -8);
                    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                      iVar6 = *piVar10;
                      *piVar10 = iVar6 + -1;
                    }
                    else {
                      do {
                        iVar6 = *piVar10;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                        if (bVar4) {
                          *piVar10 = iVar6 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    if (iVar6 < 1) {
                      operator_delete((undefined *)(local_80 + -0x18));
                    }
                  }
                }
                goto joined_r0x004f2f58;
              }
              if (this[0xd0] == (StoreViewController)0x0) {
                StoreProductView::SetBuyButtonEnabled(this_01,false);
                pGVar12 = *(GUIButton **)(this_01 + 0x100);
                FUN_00666bb8(&local_78,&DAT_0068f6a7,auStack_70);
                GUIButton::SetTitle(pGVar12,(string *)&local_78);
                puVar9 = (undefined *)(local_78 + -0x18);
                if (puVar9 == PTR_DAT_007e5de8) goto joined_r0x004f2f58;
                piVar10 = (int *)(local_78 + -8);
                    /* try { // try from 004f2f8c to 005f2fb3 has its CatchHandler @ 004f2f5c */
                if (PTR_pthread_create_007e4e78 != (undefined *)0x0) goto LAB_004f2f90;
              }
              else {
                StoreProductView::SetBuyButtonEnabled(this_01,false);
                pGVar12 = *(GUIButton **)(this_01 + 0x100);
                FUN_00666bb8(&local_78,"Unavailable",auStack_70);
                GUIButton::SetTitle(pGVar12,(string *)&local_78);
                puVar9 = (undefined *)(local_78 + -0x18);
                if (puVar9 == PTR_DAT_007e5de8) goto joined_r0x004f2f58;
                piVar10 = (int *)(local_78 + -8);
                if (PTR_pthread_create_007e4e78 != (undefined *)0x0) goto LAB_004f2d3c;
              }
              iVar6 = *piVar10;
              *piVar10 = iVar6 + -1;
              goto LAB_004f2fb0;
            }
            break;
          }
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x10;
        } while (uVar14 < uVar16);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar16);
  }
  goto LAB_004f2ad0;
LAB_004f2d3c:
  do {
    iVar6 = *piVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar4) {
      *piVar10 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_004f2fb0;
LAB_004f2f90:
  do {
    iVar6 = *piVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar4) {
      *piVar10 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_004f2fb0:
                    /* catch() { ... } // from try @ 004f2f78 with catch @ 004f2fb0 */
  if (iVar6 < 1) {
    operator_delete(puVar9);
  }
joined_r0x004f2f58:
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
LAB_004f2ad0:
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 004f2a74 with catch @ 004f2af8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


