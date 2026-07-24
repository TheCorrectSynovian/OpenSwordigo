/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004aa3b4
 * Function: Caver::StoreController::UnlockProduct
 * Signature: undefined __thiscall UnlockProduct(StoreController * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::StoreController::UnlockProduct(std::string const&) */

void __thiscall Caver::StoreController::UnlockProduct(StoreController *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  GameOptions *pGVar9;
  GameOptions *extraout_x0;
  GameOptions *extraout_x0_00;
  GameOptions *extraout_x0_01;
  long lVar10;
  int *piVar11;
  int iVar12;
  size_t *psVar13;
  GameOptions *local_b8;
  long *local_b0;
  long local_a8;
  long *plStack_a0;
  GameOptions *local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  GameOptions *local_78;
  long *local_70;
  long local_68;
  long *plStack_60;
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(&local_58,"compass",auStack_50);
  pvVar5 = local_58;
  pGVar9 = *(GameOptions **)param_1;
  psVar13 = (size_t *)((long)local_58 + -0x18);
  if (*(size_t *)(pGVar9 + -0x18) == *psVar13) {
    uVar8 = memcmp(pGVar9,local_58,*(size_t *)(pGVar9 + -0x18));
    pGVar9 = (GameOptions *)(ulong)uVar8;
    bVar6 = uVar8 == 0;
  }
  else {
    bVar6 = false;
  }
  puVar4 = PTR_DAT_007e5de8;
  if (psVar13 == (size_t *)PTR_DAT_007e5de8) {
LAB_004aa434:
    if (bVar6) goto LAB_004aa438;
LAB_004aa4f4:
    FUN_00666bb8(&local_58,&DAT_00691aee,auStack_50);
    pvVar5 = local_58;
    pGVar9 = *(GameOptions **)param_1;
    psVar13 = (size_t *)((long)local_58 + -0x18);
    if (*(size_t *)(pGVar9 + -0x18) == *psVar13) {
      uVar8 = memcmp(pGVar9,local_58,*(size_t *)(pGVar9 + -0x18));
      pGVar9 = (GameOptions *)(ulong)uVar8;
      uVar7 = uVar8 == 0;
    }
    else {
      uVar7 = false;
    }
    if (psVar13 != (size_t *)puVar4) {
      piVar11 = (int *)((long)pvVar5 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar6) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(psVar13);
        pGVar9 = extraout_x0_00;
      }
    }
    if ((bool)uVar7) {
      pGVar9 = (GameOptions *)GameOptions::sharedOptions(pGVar9);
      *(undefined1 *)(local_88 + 0x51) = 1;
      if ((plStack_80 != (long *)0x0) &&
         (lVar10 = plStack_80[1], plStack_80[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        pGVar9 = (GameOptions *)(**(code **)(*plStack_80 + 0x10))(plStack_80);
        lVar10 = plStack_80[2];
        plStack_80[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          pGVar9 = (GameOptions *)(**(code **)(*plStack_80 + 0x18))(plStack_80);
        }
      }
      GameOptions::sharedOptions(pGVar9);
                    /* try { // try from 004aa5b4 to 005aa72b has its CatchHandler @ 004aa5b4
                       catch(type#1 @ 00000000) { ... } // from try @ 004aa5b4 with catch @ 004aa5b4
                       catch(type#1 @ 00000000) { ... } // from try @ 004aa734 with catch @ 004aa5b4
                       catch(type#1 @ 00000000) { ... } // from try @ 004aa80c with catch @ 004aa5b4
                        */
      GameOptions::SaveToFile(local_98);
    }
    else {
      FUN_00666bb8(&local_58,0x691afa,auStack_50);
      pGVar9 = *(GameOptions **)param_1;
      psVar13 = (size_t *)((long)local_58 + -0x18);
      if (*(size_t *)(pGVar9 + -0x18) == *psVar13) {
        uVar8 = memcmp(pGVar9,local_58,*(size_t *)(pGVar9 + -0x18));
        pGVar9 = (GameOptions *)(ulong)uVar8;
        uVar7 = uVar8 == 0;
      }
      else {
        uVar7 = false;
      }
      if (psVar13 != (size_t *)puVar4) {
        piVar11 = (int *)((long)local_58 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar12 = *piVar11;
          *piVar11 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar11;
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = iVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar12 < 1) {
          operator_delete(psVar13);
          pGVar9 = extraout_x0_01;
        }
      }
      if (!(bool)uVar7) goto LAB_004aa718;
      pGVar9 = (GameOptions *)GameOptions::sharedOptions(pGVar9);
      *(undefined1 *)(local_a8 + 0x52) = 1;
      if ((plStack_a0 != (long *)0x0) &&
         (lVar10 = plStack_a0[1], plStack_a0[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        pGVar9 = (GameOptions *)(**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        lVar10 = plStack_a0[2];
        plStack_a0[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          pGVar9 = (GameOptions *)(**(code **)(*plStack_a0 + 0x18))(plStack_a0);
        }
      }
      GameOptions::sharedOptions(pGVar9);
      GameOptions::SaveToFile(local_b8);
      local_90 = local_b0;
    }
  }
  else {
    piVar11 = (int *)((long)pvVar5 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar12) goto LAB_004aa434;
    operator_delete(psVar13);
    pGVar9 = extraout_x0;
    if (!bVar6) goto LAB_004aa4f4;
LAB_004aa438:
    pGVar9 = (GameOptions *)GameOptions::sharedOptions(pGVar9);
    *(undefined1 *)(local_68 + 0x50) = 1;
    if ((plStack_60 != (long *)0x0) &&
       (lVar10 = plStack_60[1], plStack_60[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      pGVar9 = (GameOptions *)(**(code **)(*plStack_60 + 0x10))(plStack_60);
      lVar10 = plStack_60[2];
      plStack_60[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        pGVar9 = (GameOptions *)(**(code **)(*plStack_60 + 0x18))(plStack_60);
      }
    }
    GameOptions::sharedOptions(pGVar9);
    GameOptions::SaveToFile(local_78);
    local_90 = local_70;
  }
  if ((local_90 != (long *)0x0) &&
     (lVar10 = local_90[1], local_90[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar10 = local_90[2];
    local_90[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
  }
LAB_004aa718:
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 004aa72c to 005aa733 has its CatchHandler @ 004aa7c4 */
                    /* try { // try from 004aa734 to 005aa7e3 has its CatchHandler @ 004aa5b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


