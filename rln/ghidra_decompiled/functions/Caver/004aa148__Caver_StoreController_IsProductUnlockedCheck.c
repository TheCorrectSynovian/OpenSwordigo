/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004aa148
 * Function: Caver::StoreController::IsProductUnlockedCheck
 * Signature: undefined __thiscall IsProductUnlockedCheck(StoreController * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController::IsProductUnlockedCheck(std::string const&) */

uint __thiscall
Caver::StoreController::IsProductUnlockedCheck(StoreController *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  StoreController *pSVar8;
  StoreController *extraout_x0;
  StoreController *extraout_x0_00;
  StoreController *extraout_x0_01;
  int *piVar9;
  int iVar10;
  size_t *psVar11;
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(&local_58,"compass",auStack_50);
  pvVar5 = local_58;
  pSVar8 = *(StoreController **)param_1;
  psVar11 = (size_t *)((long)local_58 + -0x18);
  if (*(size_t *)(pSVar8 + -0x18) == *psVar11) {
    uVar7 = memcmp(pSVar8,local_58,*(size_t *)(pSVar8 + -0x18));
    pSVar8 = (StoreController *)(ulong)uVar7;
    bVar6 = uVar7 == 0;
  }
  else {
                    /* try { // try from 004aa1b4 to 005aa1f7 has its CatchHandler @ 004aa2d8 */
    bVar6 = false;
  }
  puVar4 = PTR_DAT_007e5de8;
  if (psVar11 != (size_t *)PTR_DAT_007e5de8) {
    piVar9 = (int *)((long)pvVar5 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004aa1f8 to 005aa2ab has its CatchHandler @ 004a9cc0 */
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
      operator_delete(psVar11);
      pSVar8 = extraout_x0;
    }
  }
  if (bVar6) {
    uVar7 = IsGuideUnlockedCheck(pSVar8);
    goto LAB_004aa378;
  }
  FUN_00666bb8(&local_58,&DAT_00691aee,auStack_50);
  pvVar5 = local_58;
  pSVar8 = *(StoreController **)param_1;
  psVar11 = (size_t *)((long)local_58 + -0x18);
  if (*(size_t *)(pSVar8 + -0x18) == *psVar11) {
    uVar7 = memcmp(pSVar8,local_58,*(size_t *)(pSVar8 + -0x18));
    pSVar8 = (StoreController *)(ulong)uVar7;
    bVar6 = uVar7 == 0;
    if (psVar11 == (size_t *)puVar4) goto LAB_004aa274;
LAB_004aa280:
                    /* catch() { ... } // from try @ 004a9de8 with catch @ 004aa288 */
    piVar9 = (int *)((long)pvVar5 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
                    /* try { // try from 004aa2ac to 005aa323 has its CatchHandler @ 004aa32c */
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
    if (0 < iVar10) goto LAB_004aa274;
    operator_delete(psVar11);
    pSVar8 = extraout_x0_00;
    if (bVar6) goto LAB_004aa278;
  }
  else {
    bVar6 = false;
    if (psVar11 != (size_t *)puVar4) goto LAB_004aa280;
LAB_004aa274:
    if (bVar6) {
LAB_004aa278:
      uVar7 = IsCoinDoublerUnlockedCheck(pSVar8);
      goto LAB_004aa378;
    }
  }
                    /* catch() { ... } // from try @ 004aa1b4 with catch @ 004aa2d8 */
  FUN_00666bb8(&local_58,0x691afa,auStack_50);
  pSVar8 = *(StoreController **)param_1;
  psVar11 = (size_t *)((long)local_58 + -0x18);
  if (*(size_t *)(pSVar8 + -0x18) == *psVar11) {
    uVar7 = memcmp(pSVar8,local_58,*(size_t *)(pSVar8 + -0x18));
    pSVar8 = (StoreController *)(ulong)uVar7;
    bVar6 = uVar7 == 0;
    if (psVar11 == (size_t *)puVar4) goto LAB_004aa320;
LAB_004aa32c:
                    /* catch() { ... } // from try @ 004aa2ac with catch @ 004aa32c */
    piVar9 = (int *)((long)local_58 + -8);
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
    if (0 < iVar10) goto LAB_004aa320;
    operator_delete(psVar11);
    pSVar8 = extraout_x0_01;
    if (bVar6) goto LAB_004aa324;
  }
  else {
    bVar6 = false;
    if (psVar11 != (size_t *)puVar4) goto LAB_004aa32c;
LAB_004aa320:
    if (bVar6) {
LAB_004aa324:
                    /* try { // try from 004aa324 to 005aa32f has its CatchHandler @ 004a9cc0 */
      uVar7 = IsNoAdsUnlockedCheck(pSVar8);
      goto LAB_004aa378;
    }
  }
  uVar7 = 0;
LAB_004aa378:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


