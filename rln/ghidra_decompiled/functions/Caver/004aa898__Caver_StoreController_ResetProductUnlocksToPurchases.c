/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004aa898
 * Function: Caver::StoreController::ResetProductUnlocksToPurchases
 * Signature: undefined __thiscall ResetProductUnlocksToPurchases(StoreController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController::ResetProductUnlocksToPurchases() */

void __thiscall Caver::StoreController::ResetProductUnlocksToPurchases(StoreController *this)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  GameOptions *pGVar8;
  GameOptions *extraout_x0;
  GameOptions *extraout_x0_00;
  GameOptions *extraout_x0_01;
  long lVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  GameOptions *local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  long local_b8;
  long *plStack_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long *plStack_90;
  long local_88;
  long *local_80;
  long local_78;
  long *plStack_70;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pcVar12 = *(code **)(*(long *)this + 0x18);
  FUN_00666bb8(&local_68,"compass",auStack_60);
                    /* catch() { ... } // from try @ 004aa854 with catch @ 004aa8e4 */
  bVar7 = (*pcVar12)(this,&local_68);
  puVar6 = PTR_DAT_007e5de8;
  pGVar8 = (GameOptions *)(local_68 + -0x18);
  if (pGVar8 != (GameOptions *)PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(pGVar8);
      pGVar8 = extraout_x0;
    }
  }
  pGVar8 = (GameOptions *)GameOptions::sharedOptions(pGVar8);
  bVar1 = bVar7 ^ *(char *)(local_78 + 0x50) != '\0';
  if ((plStack_70 == (long *)0x0) ||
     (lVar9 = plStack_70[1], plStack_70[1] = lVar9 + -1, lVar9 + -1 != 0)) {
LAB_004aa958:
                    /* try { // try from 004aa958 to 005aa9ff has its CatchHandler @ 004aa958
                       catch(type#1 @ 00000000) { ... } // from try @ 004aa958 with catch @ 004aa958
                       catch(type#1 @ 00000000) { ... } // from try @ 004aaa28 with catch @ 004aa958
                       catch(type#1 @ 00000000) { ... } // from try @ 004aab68 with catch @ 004aa958
                        */
    if ((bVar1 & 1) != 0) goto LAB_004aa95c;
LAB_004aa9d4:
    bVar3 = false;
  }
  else {
    pGVar8 = (GameOptions *)(**(code **)(*plStack_70 + 0x10))(plStack_70);
    lVar9 = plStack_70[2];
    plStack_70[2] = lVar9 + -1;
                    /* catch() { ... } // from try @ 004aa83c with catch @ 004aa954 */
    if (lVar9 + -1 != 0) goto LAB_004aa958;
    pGVar8 = (GameOptions *)(**(code **)(*plStack_70 + 0x18))(plStack_70);
    if ((bVar1 & 1) == 0) goto LAB_004aa9d4;
LAB_004aa95c:
    GameOptions::sharedOptions(pGVar8);
    *(byte *)(local_88 + 0x50) = bVar7 & 1;
    if ((local_80 != (long *)0x0) &&
       (lVar9 = local_80[1], local_80[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_80 + 0x10))(local_80);
      lVar9 = local_80[2];
      local_80[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_80 + 0x18))(local_80);
      }
    }
    bVar3 = true;
  }
  pcVar12 = *(code **)(*(long *)this + 0x18);
  FUN_00666bb8(&local_68,&DAT_00691aee,auStack_60);
  bVar7 = (*pcVar12)(this,&local_68);
                    /* try { // try from 004aaa00 to 005aaa27 has its CatchHandler @ 004aab20 */
  pGVar8 = (GameOptions *)(local_68 + -0x18);
  if (pGVar8 != (GameOptions *)puVar6) {
    piVar10 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(pGVar8);
      pGVar8 = extraout_x0_00;
    }
  }
  pGVar8 = (GameOptions *)GameOptions::sharedOptions(pGVar8);
  cVar2 = *(char *)(local_98 + 0x51);
                    /* try { // try from 004aaa28 to 005aab3f has its CatchHandler @ 004aa958 */
  if ((plStack_90 != (long *)0x0) &&
     (lVar9 = plStack_90[1], plStack_90[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    pGVar8 = (GameOptions *)(**(code **)(*plStack_90 + 0x10))(plStack_90);
    lVar9 = plStack_90[2];
    plStack_90[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      pGVar8 = (GameOptions *)(**(code **)(*plStack_90 + 0x18))(plStack_90);
    }
  }
  if (((bVar7 ^ cVar2 != '\0') & 1) != 0) {
    GameOptions::sharedOptions(pGVar8);
    *(byte *)(local_a8 + 0x51) = bVar7 & 1;
    if ((local_a0 != (long *)0x0) &&
       (lVar9 = local_a0[1], local_a0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar9 = local_a0[2];
      local_a0[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
    }
    bVar3 = true;
  }
  pcVar12 = *(code **)(*(long *)this + 0x18);
  FUN_00666bb8(&local_68,0x691afa,auStack_60);
  bVar7 = (*pcVar12)(this,&local_68);
  pGVar8 = (GameOptions *)(local_68 + -0x18);
  if (pGVar8 != (GameOptions *)puVar6) {
    piVar10 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(pGVar8);
      pGVar8 = extraout_x0_01;
    }
  }
  pGVar8 = (GameOptions *)GameOptions::sharedOptions(pGVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004aaa00 with catch @ 004aab20
                        */
  bVar1 = bVar7 ^ *(char *)(local_b8 + 0x52) != '\0';
                    /* try { // try from 004aab40 to 005aab67 has its CatchHandler @ 004aab70 */
  if ((plStack_b0 == (long *)0x0) ||
     (lVar9 = plStack_b0[1], plStack_b0[1] = lVar9 + -1, lVar9 + -1 != 0)) {
LAB_004aab64:
    if ((bVar1 & 1) != 0) goto LAB_004aab68;
LAB_004aabdc:
    if (!bVar3) goto LAB_004aac38;
  }
  else {
    pGVar8 = (GameOptions *)(**(code **)(*plStack_b0 + 0x10))(plStack_b0);
    lVar9 = plStack_b0[2];
    plStack_b0[2] = lVar9 + -1;
    if (lVar9 + -1 != 0) goto LAB_004aab64;
    pGVar8 = (GameOptions *)(**(code **)(*plStack_b0 + 0x18))(plStack_b0);
    if ((bVar1 & 1) == 0) goto LAB_004aabdc;
LAB_004aab68:
                    /* try { // try from 004aab68 to 005aab73 has its CatchHandler @ 004aa958 */
    pGVar8 = (GameOptions *)GameOptions::sharedOptions(pGVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004aab40 with catch @ 004aab70
                        */
                    /* try { // try from 004aab74 to 005aad7b has its CatchHandler @ 004aab74
                       catch(type#1 @ 00000000) { ... } // from try @ 004aab74 with catch @ 004aab74
                       catch(type#1 @ 00000000) { ... } // from try @ 004aad84 with catch @ 004aab74
                       catch(type#1 @ 00000000) { ... } // from try @ 004aaf8c with catch @ 004aab74
                        */
    *(byte *)(local_c8 + 0x52) = bVar7 & 1;
    if ((local_c0 != (long *)0x0) &&
       (lVar9 = local_c0[1], local_c0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      pGVar8 = (GameOptions *)(**(code **)(*local_c0 + 0x10))(local_c0);
      lVar9 = local_c0[2];
      local_c0[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        pGVar8 = (GameOptions *)(**(code **)(*local_c0 + 0x18))(local_c0);
      }
    }
  }
  GameOptions::sharedOptions(pGVar8);
  GameOptions::SaveToFile(local_d8);
  if ((local_d0 != (long *)0x0) && (lVar9 = local_d0[1], local_d0[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_d0 + 0x10))(local_d0);
    lVar9 = local_d0[2];
    local_d0[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_d0 + 0x18))(local_d0);
    }
  }
LAB_004aac38:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


