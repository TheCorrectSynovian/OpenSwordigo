/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005081c8
 * Function: Caver::InventoryItemPanel::UpdateLabels
 * Signature: undefined __thiscall UpdateLabels(InventoryItemPanel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::UpdateLabels() */

void __thiscall Caver::InventoryItemPanel::UpdateLabels(InventoryItemPanel *this)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  size_t *psVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  GUILabel *pGVar16;
  uint uVar17;
  long *plVar18;
  void *pvVar19;
  uint uVar20;
  float fVar21;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_c8;
  long *local_c0;
  long local_b8;
  long *local_b0;
  int *local_a8;
  long *local_a0;
  void *local_90;
  long *local_88;
  char acStack_7c [4];
  long local_78;
  
                    /* catch() { ... } // from try @ 005080ac with catch @ 005081ec */
  lVar5 = tpidr_el0;
                    /* catch() { ... } // from try @ 00507cd4 with catch @ 005081f0 */
  local_78 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(this + 0x120);
  local_a8 = *(int **)(lVar12 + 0x100);
  local_a0 = *(long **)(lVar12 + 0x108);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  local_b8 = *(long *)(lVar12 + 0x110);
  local_b0 = *(long **)(lVar12 + 0x118);
  if (local_b0 != (long *)0x0) {
    local_b0[1] = local_b0[1] + 1;
  }
  local_c8 = (void *)0x0;
  local_c0 = (long *)0x0;
  lVar13 = *(long *)(*(long *)(this + 0x130) + 0x110);
  lVar12 = *(long *)(lVar13 + 0x100);
  plVar18 = *(long **)(lVar13 + 0x108);
  if (plVar18 == (long *)0x0) {
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar13 + 0x100);
LAB_00508394:
      plVar18 = (long *)0x0;
      bVar4 = true;
      goto LAB_00508398;
    }
LAB_005082c4:
    GameInterfaceBuilder::TextGradient(DAT_00687988,0.0,1.0,1.0);
    plVar18 = local_c0;
    if (local_88 != (long *)0x0) {
      local_88[1] = local_88[1] + 1;
    }
    local_c8 = local_90;
    local_c0 = local_88;
    if ((plVar18 != (long *)0x0) &&
       (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      lVar12 = plVar18[2];
      plVar18[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    plVar18 = local_88;
    if ((local_88 != (long *)0x0) &&
       (lVar12 = local_88[1], local_88[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_88 + 0x10))(local_88);
      lVar12 = plVar18[2];
      plVar18[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    bVar4 = false;
  }
  else {
    if (plVar18[1] == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      lVar13 = plVar18[2];
      plVar18[2] = lVar13 + -1;
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    if (lVar12 == 0) goto LAB_005082c4;
    lVar12 = *(long *)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
    plVar18 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
    if (plVar18 == (long *)0x0) goto LAB_00508394;
    bVar4 = false;
    plVar18[1] = plVar18[1] + 1;
LAB_00508398:
    FUN_0066a528(&local_90,lVar12 + 8);
    iVar7 = FUN_006689e0(&local_90,"firetrinket");
    puVar8 = PTR_DAT_007e5de8;
    if ((undefined *)((long)local_90 + -0x18) != PTR_DAT_007e5de8) {
      piVar14 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar14;
                    /* try { // try from 005094d0 to 006094e3 has its CatchHandler @ 00509508 */
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)((long)local_90 + -0x18));
      }
    }
                    /* try { // try from 005094e4 to 0060950b has its CatchHandler @ 005094b4 */
    if ((!bVar4) && (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      lVar12 = plVar18[2];
      plVar18[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    if (iVar7 == 0) {
      GameInterfaceBuilder::TextGradient(DAT_0069207c,1.0,1.0,1.0);
      plVar18 = local_c0;
      if (local_88 != (long *)0x0) {
        local_88[1] = local_88[1] + 1;
      }
      local_c8 = local_90;
      local_c0 = local_88;
      if ((plVar18 != (long *)0x0) &&
         (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        lVar12 = plVar18[2];
        plVar18[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      plVar18 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar12 = local_88[1], local_88[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*local_88 + 0x10))(local_88);
        lVar12 = plVar18[2];
        plVar18[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
    }
    else {
      lVar12 = *(long *)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
      plVar18 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
      if (plVar18 != (long *)0x0) {
        plVar18[1] = plVar18[1] + 1;
      }
      FUN_0066a528(&local_90,lVar12 + 8);
      iVar7 = FUN_006689e0(&local_90,0x68eb35);
      if ((undefined *)((long)local_90 + -0x18) != puVar8) {
        piVar14 = (int *)((long)local_90 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00509748 to 0060974f has its CatchHandler @ 00509758 */
          iVar15 = *piVar14;
                    /* try { // try from 00509750 to 0060975b has its CatchHandler @ 005095c0 */
          *piVar14 = iVar15 + -1;
        }
        else {
          do {
                    /* catch() { ... } // from try @ 005094e4 with catch @ 005094b4 */
            iVar15 = *piVar14;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar4) {
              *piVar14 = iVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
                    /* catch() { ... } // from try @ 00509748 with catch @ 00509758 */
        if (iVar15 < 1) {
                    /* catch() { ... } // from try @ 005097e8 with catch @ 0050975c
                       catch() { ... } // from try @ 00509870 with catch @ 0050975c */
          operator_delete((undefined *)((long)local_90 + -0x18));
        }
      }
      if ((plVar18 != (long *)0x0) &&
         (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        lVar12 = plVar18[2];
        plVar18[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      if (iVar7 == 0) {
        GameInterfaceBuilder::TextGradient(DAT_00693eac,1.0,1.0,DAT_0068ea20);
        plVar18 = local_c0;
        if (local_88 != (long *)0x0) {
          local_88[1] = local_88[1] + 1;
        }
                    /* catch() { ... } // from try @ 0050873c with catch @ 0050870c */
        local_c8 = local_90;
        local_c0 = local_88;
        if ((plVar18 != (long *)0x0) &&
           (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 00508728 to 0060873b has its CatchHandler @ 00508760 */
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar12 = plVar18[2];
                    /* try { // try from 0050873c to 00608763 has its CatchHandler @ 0050870c */
          plVar18[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
        plVar18 = local_88;
                    /* catch() { ... } // from try @ 00508728 with catch @ 00508760 */
        if ((local_88 != (long *)0x0) &&
           (lVar12 = local_88[1], local_88[1] = lVar12 + -1, lVar12 + -1 == 0)) {
          (**(code **)(*local_88 + 0x10))(local_88);
          lVar12 = plVar18[2];
          plVar18[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
      }
      else {
        lVar12 = *(long *)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
        plVar18 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
        if (plVar18 != (long *)0x0) {
          plVar18[1] = plVar18[1] + 1;
        }
        FUN_0066a528(&local_90,lVar12 + 8);
        iVar7 = FUN_006689e0(&local_90,"shadowtrinket");
        if ((undefined *)((long)local_90 + -0x18) != puVar8) {
          piVar14 = (int *)((long)local_90 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar15 = *piVar14;
            *piVar14 = iVar15 + -1;
          }
          else {
            do {
              iVar15 = *piVar14;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar4) {
                *piVar14 = iVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar15 < 1) {
            operator_delete((undefined *)((long)local_90 + -0x18));
          }
        }
        if ((plVar18 != (long *)0x0) &&
           (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar12 = plVar18[2];
          plVar18[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
        if (iVar7 == 0) {
          GameInterfaceBuilder::TextGradient(DAT_00693ea8,1.0,1.0,DAT_006846c8);
          plVar18 = local_c0;
          if (local_88 != (long *)0x0) {
            local_88[1] = local_88[1] + 1;
          }
          local_c8 = local_90;
          local_c0 = local_88;
          if ((plVar18 != (long *)0x0) &&
             (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            lVar12 = plVar18[2];
            plVar18[2] = lVar12 + -1;
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
          }
          plVar18 = local_88;
          if ((local_88 != (long *)0x0) &&
             (lVar12 = local_88[1], local_88[1] = lVar12 + -1, lVar12 + -1 == 0)) {
            (**(code **)(*local_88 + 0x10))(local_88);
            lVar12 = plVar18[2];
            plVar18[2] = lVar12 + -1;
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
          }
        }
      }
    }
    bVar4 = true;
  }
  GUILabel::ClearText(*(GUILabel **)(this + 0x150));
                    /* catch() { ... } // from try @ 005087f8 with catch @ 005087ac */
  if (local_a8 == (int *)0x0) {
    if (local_b8 != 0) {
      pGVar16 = *(GUILabel **)(this + 0x150);
                    /* try { // try from 0050884c to 00608867 has its CatchHandler @ 00508a04 */
      FUN_00666bb8(&local_90,"Spell: ",&local_f0);
      local_d8 = 0xffffffff;
      GUILabel::AddText(pGVar16,&local_90,&local_d8);
      puVar8 = PTR_DAT_007e5de8;
                    /* try { // try from 00508868 to 00608a07 has its CatchHandler @ 00508804 */
      if ((undefined *)((long)local_90 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 005095b4 with catch @ 0050955c */
        piVar14 = (int *)((long)local_90 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
                    /* catch() { ... } // from try @ 005097e4 with catch @ 00509864 */
                    /* try { // try from 00509868 to 0060986f has its CatchHandler @ 00509878 */
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
                    /* try { // try from 00509870 to 0060987b has its CatchHandler @ 0050975c */
        if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 00509868 with catch @ 00509878 */
          operator_delete((undefined *)((long)local_90 + -0x18));
        }
      }
      pGVar16 = *(GUILabel **)(this + 0x150);
      FUN_0066a528(&local_90,local_b8 + 8);
      local_dc = 0xffffffff;
      GUILabel::AddText(pGVar16,&local_90,&local_dc);
      puVar9 = (undefined *)((long)local_90 + -0x18);
      if (puVar9 != puVar8) {
        piVar14 = (int *)((long)local_90 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00509484;
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_00509490;
      }
    }
  }
  else {
    if (*local_a8 == 2) {
      pGVar16 = *(GUILabel **)(this + 0x150);
      FUN_00666bb8(&local_90,"Armor: ",&local_f0);
      local_d0 = 0xffffffff;
      GUILabel::AddText(pGVar16,&local_90,&local_d0);
      puVar8 = (undefined *)((long)local_90 + -0x18);
      if (puVar8 != PTR_DAT_007e5de8) {
        piVar14 = (int *)((long)local_90 + -8);
                    /* catch() { ... } // from try @ 00509598 with catch @ 005095a8 */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_005095c0:
                    /* try { // try from 005095c0 to 0060961f has its CatchHandler @ 005095c0
                       catch() { ... } // from try @ 005095c0 with catch @ 005095c0
                       catch() { ... } // from try @ 0050963c with catch @ 005095c0
                       catch() { ... } // from try @ 005096e0 with catch @ 005095c0
                       catch() { ... } // from try @ 00509750 with catch @ 005095c0 */
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
                    /* try { // try from 005095ac to 006095b3 has its CatchHandler @ 005095bc */
            iVar7 = *piVar14;
                    /* try { // try from 005095b4 to 006095bf has its CatchHandler @ 0050955c */
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
LAB_005095cc:
        if (iVar7 < 1) {
          operator_delete(puVar8);
        }
      }
    }
    else if (*local_a8 == 1) {
      pGVar16 = *(GUILabel **)(this + 0x150);
      FUN_00666bb8(&local_90,"Weapon: ",&local_f0);
                    /* try { // try from 005087dc to 006087df has its CatchHandler @ 005087ec */
      local_cc = 0xffffffff;
                    /* catch() { ... } // from try @ 005087dc with catch @ 005087ec */
                    /* try { // try from 005087f0 to 006087f7 has its CatchHandler @ 00508800 */
      GUILabel::AddText(pGVar16,&local_90,&local_cc);
                    /* try { // try from 005087f8 to 00608803 has its CatchHandler @ 005087ac */
                    /* catch() { ... } // from try @ 005087f0 with catch @ 00508800 */
      puVar8 = (undefined *)((long)local_90 + -0x18);
                    /* try { // try from 00508804 to 0060884b has its CatchHandler @ 00508804
                       catch(type#1 @ 00000000) { ... } // from try @ 00508804 with catch @ 00508804
                       catch(type#1 @ 00000000) { ... } // from try @ 00508868 with catch @ 00508804
                       catch(type#1 @ 00000000) { ... } // from try @ 00508a10 with catch @ 00508804
                        */
      if (puVar8 != PTR_DAT_007e5de8) {
        piVar14 = (int *)((long)local_90 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_005095c0;
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_005095cc;
      }
    }
    pGVar16 = *(GUILabel **)(this + 0x150);
    FUN_0066a528(&local_90,local_a8 + 4);
    local_d4 = 0xffffffff;
    GUILabel::AddText(pGVar16,&local_90,&local_d4);
    puVar9 = (undefined *)((long)local_90 + -0x18);
    if (puVar9 != PTR_DAT_007e5de8) {
      piVar14 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00509484:
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
LAB_00509490:
      if (iVar7 < 1) {
        operator_delete(puVar9);
      }
    }
  }
  GUILabel::ClearText(*(GUILabel **)(this + 0x160));
  uVar6 = DAT_00688c08;
  pGVar16 = *(GUILabel **)(this + 0x160);
  pGVar16[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar16 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar16 + 0x148) = uVar6;
  GUILabel::UpdateText(pGVar16);
  pGVar16 = *(GUILabel **)(this + 0x160);
  if ((((pGVar16[0x108] != (GUILabel)0xff) || (pGVar16[0x109] != (GUILabel)0xff)) ||
      (pGVar16[0x10a] != (GUILabel)0xff)) || (pGVar16[0x10b] != (GUILabel)0xff)) {
    plVar18 = *(long **)(pGVar16 + 0x118);
    *(undefined4 *)(pGVar16 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar16 + 0x110) = 0;
    *(undefined8 *)(pGVar16 + 0x118) = 0;
    if ((plVar18 != (long *)0x0) &&
       (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0050884c with catch @ 00508a04
                        */
      lVar12 = plVar18[2];
                    /* try { // try from 00508a08 to 00608a0f has its CatchHandler @ 00508a18 */
      plVar18[2] = lVar12 + -1;
                    /* try { // try from 00508a10 to 00608a1b has its CatchHandler @ 00508804 */
      if (lVar12 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00508a08 with catch @ 00508a18
                        */
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    GUILabel::UpdateText(pGVar16);
  }
  puVar8 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00508a58 with catch @ 00508a34 */
  local_e8 = PTR_DAT_007e5de8 + 0x18;
  if (local_a8 != (int *)0x0) {
    if (*local_a8 == 2) {
      lVar12 = *(long *)(this + 0x100);
      local_90 = *(void **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
      local_88 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
      if (local_88 != (long *)0x0) {
        local_88[1] = local_88[1] + 1;
      }
      fVar21 = (float)CharacterState::ArmorDamageMultiplierWithItem
                                ((shared_ptr *)(lVar12 + 0x10),(shared_ptr *)&local_a8);
      plVar18 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar12 = local_88[1], local_88[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*local_88 + 0x10))(local_88);
        lVar12 = plVar18[2];
        plVar18[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      pGVar16 = *(GUILabel **)(this + 0x160);
      uVar20 = (uint)(1.0 / fVar21);
      uVar17 = -uVar20;
      if (-1 < (int)uVar20) {
        uVar17 = uVar20;
      }
      local_100 = puVar8 + 0x18;
      pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                          (uVar17,acStack_7c);
      puVar9 = puVar8 + 0x18;
      if ((int)uVar20 < 0) {
        pcVar10 = pcVar10 + -1;
        *pcVar10 = '-';
        puVar9 = local_100;
      }
      FUN_00669e1c(&local_100,0,*(undefined8 *)(puVar9 + -0x18),pcVar10,
                   (long)acStack_7c - (long)pcVar10);
      FUN_0035a030(&local_f8,&DAT_00693eed,&local_100);
      FUN_0066a528(&local_f0,&local_f8);
      FUN_006677d4(&local_f0," Damage",7);
      GUILabel::AddText(pGVar16,(string *)&local_f0,(shared_ptr *)&local_c8);
      if ((undefined *)(local_f0 + -0x18) != puVar8) {
        piVar14 = (int *)(local_f0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 00509620 to 0060963b has its CatchHandler @ 00509744 */
          } while (cVar2 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_f0 + -0x18));
        }
      }
      if ((undefined *)(local_f8 + -0x18) != puVar8) {
        piVar14 = (int *)(local_f8 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
                    /* try { // try from 0050963c to 006096db has its CatchHandler @ 005095c0 */
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_f8 + -0x18));
        }
      }
      if (local_100 + -0x18 != puVar8) {
        piVar14 = (int *)(local_100 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete(local_100 + -0x18);
        }
      }
      lVar12 = *(long *)(this + 0x100);
      local_90 = *(void **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
      local_88 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
      if (local_88 != (long *)0x0) {
        local_88[1] = local_88[1] + 1;
      }
      CharacterState::TrinketBonusForArmors((shared_ptr *)(lVar12 + 0x10));
      FUN_0066a6a8(&local_e8,&local_f0);
      plVar18 = local_88;
      if ((undefined *)(local_f0 + -0x18) != puVar8) {
        piVar14 = (int *)(local_f0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_f0 + -0x18));
          plVar18 = local_88;
        }
      }
      local_88 = plVar18;
      if ((plVar18 != (long *)0x0) &&
         (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        lVar12 = plVar18[2];
        plVar18[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
    }
    else {
                    /* try { // try from 00508a54 to 00608a57 has its CatchHandler @ 00508a68 */
      if (*local_a8 == 1) {
                    /* try { // try from 00508a58 to 00608a7b has its CatchHandler @ 00508a34 */
        lVar12 = *(long *)(this + 0x100);
                    /* catch() { ... } // from try @ 00508a54 with catch @ 00508a68 */
        local_90 = *(void **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
        local_88 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
        if (local_88 != (long *)0x0) {
          local_88[1] = local_88[1] + 1;
        }
        lVar12 = CharacterState::WeaponDamageRangeWithItem
                           ((CharacterState *)(lVar12 + 0x10),(shared_ptr *)&local_a8,
                            (shared_ptr *)&local_90);
        plVar18 = local_88;
        if ((local_88 != (long *)0x0) &&
           (lVar13 = local_88[1], local_88[1] = lVar13 + -1, lVar13 + -1 == 0)) {
          (**(code **)(*local_88 + 0x10))(local_88);
          lVar13 = plVar18[2];
          plVar18[2] = lVar13 + -1;
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
        pGVar16 = *(GUILabel **)(this + 0x160);
        FUN_00666bb8(&local_90,"Damage: ",&local_f8);
        GUILabel::AddText(pGVar16,(string *)&local_90,(shared_ptr *)&local_c8);
        if ((undefined *)((long)local_90 + -0x18) != puVar8) {
          piVar14 = (int *)((long)local_90 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)((long)local_90 + -0x18));
          }
        }
        pGVar16 = *(GUILabel **)(this + 0x160);
        uVar20 = (uint)lVar12;
        uVar17 = -uVar20;
        if (-1 < (int)uVar20) {
          uVar17 = uVar20;
        }
        local_100 = puVar8 + 0x18;
        pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                            (uVar17,acStack_7c);
        puVar9 = puVar8 + 0x18;
        if ((int)uVar20 < 0) {
          pcVar10 = pcVar10 + -1;
          *pcVar10 = '-';
          puVar9 = local_100;
        }
        FUN_00669e1c(&local_100,0,*(undefined8 *)(puVar9 + -0x18),pcVar10,
                     (long)acStack_7c - (long)pcVar10);
        FUN_0066a528(&local_f8,&local_100);
        FUN_006677d4(&local_f8,&DAT_0068f69b,3);
        uVar20 = (uint)((ulong)lVar12 >> 0x20);
        uVar17 = -uVar20;
        if (-1 < lVar12) {
          uVar17 = uVar20;
        }
        local_108 = puVar8 + 0x18;
        pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                            (uVar17,acStack_7c);
        puVar9 = puVar8 + 0x18;
        if (lVar12 < 0) {
          pcVar10 = pcVar10 + -1;
          *pcVar10 = '-';
          puVar9 = local_108;
        }
        FUN_00669e1c(&local_108,0,*(undefined8 *)(puVar9 + -0x18),pcVar10,
                     (long)acStack_7c - (long)pcVar10);
        FUN_0066a528(&local_f0,&local_f8);
        FUN_00667614(&local_f0,&local_108);
        GUILabel::AddText(pGVar16,(string *)&local_f0,(shared_ptr *)&local_c8);
        if ((undefined *)(local_f0 + -0x18) != puVar8) {
          piVar14 = (int *)(local_f0 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_f0 + -0x18));
                    /* catch() { ... } // from try @ 00509980 with catch @ 0050996c */
          }
        }
        if (local_108 + -0x18 != puVar8) {
          piVar14 = (int *)(local_108 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
                    /* try { // try from 0050997c to 0060997f has its CatchHandler @ 00509990 */
                    /* try { // try from 00509980 to 006099a3 has its CatchHandler @ 0050996c */
          if (iVar7 < 1) {
            operator_delete(local_108 + -0x18);
          }
        }
        if ((undefined *)(local_f8 + -0x18) != puVar8) {
                    /* try { // try from 005096dc to 006096df has its CatchHandler @ 00509730 */
                    /* try { // try from 005096e0 to 00609747 has its CatchHandler @ 005095c0 */
          piVar14 = (int *)(local_f8 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 0050997c with catch @ 00509990 */
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_f8 + -0x18));
          }
        }
        if (local_100 + -0x18 != puVar8) {
          piVar14 = (int *)(local_100 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete(local_100 + -0x18);
          }
        }
        lVar12 = *(long *)(this + 0x100);
        local_90 = *(void **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
        local_88 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
        if (local_88 != (long *)0x0) {
          local_88[1] = local_88[1] + 1;
        }
        CharacterState::TrinketBonusForWeapons((shared_ptr *)(lVar12 + 0x10));
        FUN_0066a6a8(&local_e8,&local_f0);
        plVar18 = local_88;
        if ((undefined *)(local_f0 + -0x18) != puVar8) {
          piVar14 = (int *)(local_f0 + -8);
                    /* catch() { ... } // from try @ 005096dc with catch @ 00509730 */
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_f0 + -0x18));
            plVar18 = local_88;
          }
        }
        local_88 = plVar18;
        if ((plVar18 != (long *)0x0) &&
           (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0)) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar12 = plVar18[2];
          plVar18[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
      }
    }
    goto LAB_005091d0;
  }
  if (local_b8 == 0) goto LAB_005091d0;
  lVar12 = *(long *)(this + 0x100);
  local_90 = *(void **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
  local_88 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
  if (local_88 != (long *)0x0) {
    local_88[1] = local_88[1] + 1;
  }
  lVar12 = CharacterState::SkillDamageRangeWithSkill
                     ((CharacterState *)(lVar12 + 0x10),(shared_ptr *)&local_b8,
                      (shared_ptr *)&local_90);
  plVar18 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar13 = local_88[1], local_88[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar13 = plVar18[2];
    plVar18[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  pGVar16 = *(GUILabel **)(this + 0x160);
  uVar17 = (uint)lVar12;
  uVar20 = (uint)((ulong)lVar12 >> 0x20);
  if (uVar20 == 0 && uVar17 == 0) {
    FUN_0066a528(&local_90,local_b8 + 0x10);
    pvVar19 = local_90;
    psVar11 = (size_t *)((long)local_90 + -0x18);
    if ((*psVar11 != *(size_t *)((long)*(void **)(pGVar16 + 0x100) + -0x18)) ||
       (iVar7 = memcmp(local_90,*(void **)(pGVar16 + 0x100),*psVar11), iVar7 != 0)) {
      FUN_0066a6a8(pGVar16 + 0x100,&local_90);
      GUILabel::UpdateText(pGVar16);
      psVar11 = (size_t *)((long)local_90 + -0x18);
      pvVar19 = local_90;
    }
    if (psVar11 != (size_t *)puVar8) {
      piVar14 = (int *)((long)pvVar19 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto joined_r0x00509ac8;
    }
  }
  else {
    FUN_00666bb8(&local_90,"Damage: ",&local_f8);
    GUILabel::AddText(pGVar16,(string *)&local_90,(shared_ptr *)&local_c8);
    if ((undefined *)((long)local_90 + -0x18) != puVar8) {
      piVar14 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)((long)local_90 + -0x18));
      }
    }
    pGVar16 = *(GUILabel **)(this + 0x160);
    uVar1 = -uVar17;
    if (-1 < (int)uVar17) {
      uVar1 = uVar17;
    }
    local_100 = puVar8 + 0x18;
    pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (uVar1,acStack_7c);
    puVar9 = puVar8 + 0x18;
    if ((int)uVar17 < 0) {
      pcVar10 = pcVar10 + -1;
      *pcVar10 = '-';
      puVar9 = local_100;
    }
    FUN_00669e1c(&local_100,0,*(undefined8 *)(puVar9 + -0x18),pcVar10,
                 (long)acStack_7c - (long)pcVar10);
    FUN_0066a528(&local_f8,&local_100);
    FUN_006677d4(&local_f8,&DAT_0068f69b,3);
    uVar17 = -uVar20;
    if (-1 < lVar12) {
      uVar17 = uVar20;
    }
    local_108 = puVar8 + 0x18;
    pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (uVar17,acStack_7c);
    puVar9 = puVar8 + 0x18;
    if (lVar12 < 0) {
      pcVar10 = pcVar10 + -1;
      *pcVar10 = '-';
      puVar9 = local_108;
    }
    FUN_00669e1c(&local_108,0,*(undefined8 *)(puVar9 + -0x18),pcVar10,
                 (long)acStack_7c - (long)pcVar10);
    FUN_0066a528(&local_f0,&local_f8);
    FUN_00667614(&local_f0,&local_108);
    GUILabel::AddText(pGVar16,(string *)&local_f0,(shared_ptr *)&local_c8);
    if ((undefined *)(local_f0 + -0x18) != puVar8) {
      piVar14 = (int *)(local_f0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
                    /* try { // try from 00509a5c to 00609be3 has its CatchHandler @ 00509a5c
                       catch() { ... } // from try @ 00509a5c with catch @ 00509a5c
                       catch() { ... } // from try @ 00509be8 with catch @ 00509a5c */
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
                    /* try { // try from 005097e4 to 006097e7 has its CatchHandler @ 00509864 */
                    /* try { // try from 005097e8 to 00609867 has its CatchHandler @ 0050975c */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_f0 + -0x18));
      }
    }
    if (local_108 + -0x18 != puVar8) {
      piVar14 = (int *)(local_108 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(local_108 + -0x18);
      }
    }
    if ((undefined *)(local_f8 + -0x18) != puVar8) {
      piVar14 = (int *)(local_f8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_f8 + -0x18));
      }
    }
    psVar11 = (size_t *)(local_100 + -0x18);
    if (psVar11 != (size_t *)puVar8) {
      piVar14 = (int *)(local_100 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
joined_r0x00509ac8:
      if (iVar7 < 1) {
        operator_delete(psVar11);
      }
    }
  }
  lVar12 = *(long *)(this + 0x100);
  local_90 = *(void **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
  local_88 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
  if (local_88 != (long *)0x0) {
    local_88[1] = local_88[1] + 1;
  }
  CharacterState::TrinketBonusForSkills((shared_ptr *)(lVar12 + 0x10));
  FUN_0066a6a8(&local_e8,&local_f0);
  plVar18 = local_88;
  if ((undefined *)(local_f0 + -0x18) != puVar8) {
    piVar14 = (int *)(local_f0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar14;
      *piVar14 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_f0 + -0x18));
      plVar18 = local_88;
    }
  }
  local_88 = plVar18;
  if ((plVar18 != (long *)0x0) && (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    lVar12 = plVar18[2];
    plVar18[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
LAB_005091d0:
  if (bVar4) {
    if (*(long *)(local_e8 + -0x18) == 0) {
      FUN_0066918c(&local_e8,&DAT_0068fbeb,0);
    }
    else {
      FUN_0035a030(&local_f0,&LAB_00698488,&local_e8);
      FUN_0066a528(&local_90,&local_f0);
      FUN_006677d4(&local_90,&DAT_006933db,1);
      FUN_0066a6a8(&local_e8,&local_90);
      if ((undefined *)((long)local_90 + -0x18) != puVar8) {
        piVar14 = (int *)((long)local_90 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar4) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* catch() { ... } // from try @ 005094d0 with catch @ 00509508 */
          } while (cVar2 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)((long)local_90 + -0x18));
        }
      }
      if ((undefined *)(local_f0 + -0x18) != puVar8) {
        piVar14 = (int *)(local_f0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar14;
          *piVar14 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar14;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar4) {
              *piVar14 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_f0 + -0x18));
        }
      }
    }
    pGVar16 = *(GUILabel **)(this + 0x160);
    FUN_0035a030(&local_90,&DAT_006923a4,&local_e8);
    GUILabel::AddText(pGVar16,(string *)&local_90,(shared_ptr *)&local_c8);
    if ((undefined *)((long)local_90 + -0x18) != puVar8) {
      piVar14 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)((long)local_90 + -0x18));
      }
    }
  }
  plVar18 = local_c0;
  if (local_e8 + -0x18 != puVar8) {
    piVar14 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar14;
      *piVar14 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar14;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_e8 + -0x18);
      plVar18 = local_c0;
    }
  }
  local_c0 = plVar18;
  if ((plVar18 != (long *)0x0) && (lVar12 = plVar18[1], plVar18[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    lVar12 = plVar18[2];
    plVar18[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  plVar18 = local_b0;
  if ((local_b0 != (long *)0x0) &&
     (lVar12 = local_b0[1], local_b0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_b0 + 0x10))(local_b0);
    lVar12 = plVar18[2];
    plVar18[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  plVar18 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar12 = local_a0[1], local_a0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar12 = plVar18[2];
    plVar18[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


