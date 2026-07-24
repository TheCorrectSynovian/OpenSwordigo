/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a9de0
 * Function: Caver::StoreController::IsNoAdsUnlockedCheck
 * Signature: undefined __thiscall IsNoAdsUnlockedCheck(StoreController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController::IsNoAdsUnlockedCheck() */

void __thiscall Caver::StoreController::IsNoAdsUnlockedCheck(StoreController *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  StoreController *pSVar8;
  ulong uVar9;
  GameOptions *pGVar10;
  GameOptions *extraout_x0;
  long lVar11;
  long *plVar12;
  int iVar13;
  code *pcVar14;
  GameOptions *local_80;
  long *local_78;
  long local_70;
  long *plStack_68;
  long local_60;
  long *plStack_58;
  long *local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
                    /* try { // try from 004a9de8 to 005a9e2b has its CatchHandler @ 004aa288 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GameOptions::sharedOptions((GameOptions *)this);
  cVar2 = *(char *)(local_60 + 0x52);
  if ((plStack_58 != (long *)0x0) &&
     (lVar11 = plStack_58[1], plStack_58[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 004a9e2c to 005aa1b3 has its CatchHandler @ 004a9cc0 */
    (**(code **)(*plStack_58 + 0x10))(plStack_58);
    lVar11 = plStack_58[2];
    plStack_58[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_58 + 0x18))(plStack_58);
    }
  }
  if (cVar2 == '\0') {
    if (DAT_007e9970 == (long *)0x0) {
      pSVar8 = operator_new(0x10);
      puVar1 = PTR_DAT_007e5de8 + 0x18;
      *(undefined **)pSVar8 = PTR_vtable_007e6678 + 0x10;
      *(undefined **)(pSVar8 + 8) = puVar1;
      boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>
                ((shared_ptr<Caver::StoreController> *)&local_50,pSVar8);
      plVar6 = local_48;
      plVar5 = local_50;
      plVar12 = DAT_007e9978;
      local_50 = DAT_007e9970;
      local_48 = DAT_007e9978;
      DAT_007e9970 = plVar5;
      DAT_007e9978 = plVar6;
      if ((plVar12 != (long *)0x0) &&
         (lVar11 = plVar12[1], plVar12[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar11 = plVar12[2];
        plVar12[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
    }
    plVar12 = DAT_007e9970;
    pcVar14 = *(code **)(*DAT_007e9970 + 0x18);
    FUN_00666bb8(&local_50,0x691afa,auStack_40);
    uVar9 = (*pcVar14)(plVar12,&local_50);
    pGVar10 = (GameOptions *)(local_50 + -3);
    if (pGVar10 != (GameOptions *)PTR_DAT_007e5de8) {
      plVar12 = local_50 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = (int)*plVar12;
        *(int *)plVar12 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = (int)*plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar13 < 1) {
        operator_delete(pGVar10);
        pGVar10 = extraout_x0;
      }
    }
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
      goto LAB_004a9e4c;
    }
    pGVar10 = (GameOptions *)GameOptions::sharedOptions(pGVar10);
    *(undefined1 *)(local_70 + 0x52) = 1;
    if ((plStack_68 != (long *)0x0) &&
       (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      pGVar10 = (GameOptions *)(**(code **)(*plStack_68 + 0x10))(plStack_68);
      lVar11 = plStack_68[2];
      plStack_68[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        pGVar10 = (GameOptions *)(**(code **)(*plStack_68 + 0x18))(plStack_68);
      }
    }
    GameOptions::sharedOptions(pGVar10);
    GameOptions::SaveToFile(local_80);
    if ((local_78 != (long *)0x0) &&
       (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      lVar11 = local_78[2];
      local_78[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_78 + 0x18))(local_78);
      }
    }
  }
  uVar7 = 1;
LAB_004a9e4c:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


