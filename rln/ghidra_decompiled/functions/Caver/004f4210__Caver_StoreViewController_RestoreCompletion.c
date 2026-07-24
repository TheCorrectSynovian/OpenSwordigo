/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f4210
 * Function: Caver::StoreViewController::RestoreCompletion
 * Signature: undefined __cdecl RestoreCompletion(vector * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::RestoreCompletion(std::vector<std::string, std::allocator<std::string
   > > const&, std::string const&) */

void Caver::StoreViewController::RestoreCompletion(vector *param_1,string *param_2)

{
  string *psVar1;
  string *psVar2;
  string *psVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  void *__s1;
  undefined *puVar10;
  GUIView *pGVar11;
  string *in_x2;
  int in_w5;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  void *pvVar18;
  size_t sVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_98 [8];
  undefined *local_90;
  GUIAlertView *local_88;
  long *local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  psVar1 = *(string **)(param_1 + 0x70);
  psVar3 = *(string **)(param_1 + 0x78);
  lVar12 = *(long *)(*(long *)in_x2 + -0x18);
  if (psVar1 != psVar3) {
    lVar20 = (long)psVar3 - (long)psVar1;
    psVar2 = psVar1;
    do {
      if (lVar20 != 0) {
        pvVar18 = *(void **)psVar1;
        lVar21 = 0;
        uVar14 = 0;
        sVar19 = *(size_t *)((long)pvVar18 + -0x18);
        do {
          if ((*(size_t *)((long)*(void **)(psVar2 + uVar14 * 8) + -0x18) == sVar19) &&
             (iVar9 = memcmp(*(void **)(psVar2 + uVar14 * 8),pvVar18,sVar19), iVar9 == 0)) {
            if (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x140) + lVar21) != 0) {
              UpdateProductBuyButton((StoreViewController *)param_1,psVar1);
            }
            break;
          }
          uVar14 = uVar14 + 1;
          lVar21 = lVar21 + 0x10;
        } while (uVar14 < (ulong)(lVar20 >> 3));
      }
      psVar1 = psVar1 + 8;
      if (psVar1 == psVar3) break;
      psVar2 = *(string **)(param_1 + 0x70);
      lVar20 = *(long *)(param_1 + 0x78) - (long)psVar2;
    } while( true );
  }
  puVar17 = *(undefined8 **)param_2;
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (puVar17 != puVar4) {
    lVar21 = *(long *)(param_1 + 0x78);
    lVar20 = *(long *)(param_1 + 0x70);
    do {
      lVar22 = lVar20;
      if (lVar21 != lVar20) {
        uVar14 = 0;
        do {
          lVar20 = lVar21;
          if (lVar20 - lVar22 != 0) {
            pvVar18 = (void *)*puVar17;
            lVar21 = 0;
            uVar16 = 0;
            sVar19 = *(size_t *)((long)pvVar18 + -0x18);
            do {
              __s1 = *(void **)(lVar22 + uVar16 * 8);
              if ((*(size_t *)((long)__s1 + -0x18) == sVar19) &&
                 (iVar9 = memcmp(__s1,pvVar18,sVar19), iVar9 == 0)) {
                if ((*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x140) + lVar21) != 0) &&
                   (plVar15 = *(long **)(param_1 + 0x50), plVar15 != (long *)0x0)) {
                  (**(code **)(*plVar15 + 8))(plVar15,param_1,puVar17);
                  lVar22 = *(long *)(param_1 + 0x70);
                  lVar20 = *(long *)(param_1 + 0x78);
                }
                break;
              }
              uVar16 = uVar16 + 1;
              lVar21 = lVar21 + 0x10;
            } while (uVar16 < (ulong)(lVar20 - lVar22 >> 3));
          }
          uVar14 = uVar14 + 1;
          lVar21 = lVar20;
        } while (uVar14 < (ulong)(lVar20 - lVar22 >> 3));
      }
      puVar17 = puVar17 + 1;
      lVar21 = lVar20;
      lVar20 = lVar22;
    } while (puVar17 != puVar4);
  }
  puVar8 = PTR_DAT_007e5de8;
  if (lVar12 == 0) {
    local_90 = PTR_DAT_007e5de8 + 0x18;
    local_70 = local_90;
    if (*(long *)(param_2 + 8) != *(long *)param_2) {
      FUN_0066918c(&local_70,"SUCCESS",7);
      FUN_0066918c(&local_90,"Your purchases have been restored.",0x22);
    }
    if (*(long *)(local_70 + -0x18) != 0) {
      FUN_00666bb8(&local_78,0x68f6ba,&local_88);
      GameInterfaceBuilder::AlertView
                ((GameInterfaceBuilder *)&local_70,(string *)&local_90,(string *)0x1,(int)&local_78,
                 (string *)0xffffffff,in_w5);
      pGVar11 = *(GUIView **)(param_1 + 0x18);
      if (pGVar11 == (GUIView *)0x0) {
        (**(code **)(*(long *)param_1 + 0x18))(param_1);
        pGVar11 = *(GUIView **)(param_1 + 0x18);
      }
      plVar15 = *(long **)(param_1 + 0x20);
      if (plVar15 != (long *)0x0) {
        plVar15[1] = plVar15[1] + 1;
      }
      GUIAlertView::PresentFromView(local_88,pGVar11);
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      if ((local_80 != (long *)0x0) &&
         (lVar12 = local_80[1], local_80[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*local_80 + 0x10))(local_80);
        lVar12 = local_80[2];
        local_80[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*local_80 + 0x18))(local_80);
        }
      }
      if ((undefined *)(local_78 + -0x18) != puVar8) {
        piVar13 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar13;
          *piVar13 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
    }
    if (local_90 + -0x18 != puVar8) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar13;
        *piVar13 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90 + -0x18);
      }
    }
    puVar10 = local_70 + -0x18;
    if (puVar10 == puVar8) goto LAB_004f46b8;
    piVar13 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004f4758:
      iVar9 = *piVar13;
      *piVar13 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    if (*(long *)(*(long *)in_x2 + -0x18) == 0) goto LAB_004f46b8;
    FUN_00666bb8(&local_70,0x68f6ba,&local_88);
    FUN_00666bb8(&local_90,&DAT_00693507,auStack_98);
    GameInterfaceBuilder::AlertView
              ((GameInterfaceBuilder *)&local_90,in_x2,(string *)0x1,(int)&local_70,
               (string *)0xffffffff,in_w5);
    puVar8 = PTR_DAT_007e5de8;
    if (local_90 + -0x18 != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar13;
        *piVar13 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_90 + -0x18);
      }
    }
    pGVar11 = *(GUIView **)(param_1 + 0x18);
    if (pGVar11 == (GUIView *)0x0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
      pGVar11 = *(GUIView **)(param_1 + 0x18);
    }
    plVar15 = *(long **)(param_1 + 0x20);
    if (plVar15 != (long *)0x0) {
      plVar15[1] = plVar15[1] + 1;
    }
    GUIAlertView::PresentFromView(local_88,pGVar11);
    if ((plVar15 != (long *)0x0) &&
       (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar12 = plVar15[2];
      plVar15[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    if ((local_80 != (long *)0x0) &&
       (lVar12 = local_80[1], local_80[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_80 + 0x10))(local_80);
      lVar12 = local_80[2];
      local_80[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_80 + 0x18))(local_80);
      }
    }
    puVar10 = local_70 + -0x18;
    if (puVar10 == puVar8) goto LAB_004f46b8;
    piVar13 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004f4758;
    do {
      iVar9 = *piVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (iVar9 < 1) {
    operator_delete(puVar10);
  }
LAB_004f46b8:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


