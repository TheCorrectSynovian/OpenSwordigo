/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004671c8
 * Function: Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed
 * Signature: undefined __cdecl GuidePurchaseViewRestoreButtonPressed(GuidePurchaseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView*)
    */

void Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed
               (GuidePurchaseView *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  GUIButton *pGVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined *local_c0;
  undefined8 uStack_b8;
  GuidePurchaseView *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  GuidePurchaseView *local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined8 uStack_68;
  GuidePurchaseView *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 004671ec to 0056739b has its CatchHandler @ 00467130 */
  pGVar6 = *(GUIButton **)(*(long *)(param_1 + 0x60) + 0x150);
  uVar1 = *(uint *)(pGVar6 + 0x120);
  uVar2 = uVar1 | 2;
  *(uint *)(pGVar6 + 0x120) = uVar2;
  if (uVar2 != uVar1) {
    (**(code **)(*(long *)pGVar6 + 0x130))();
    pGVar6 = *(GUIButton **)(*(long *)(param_1 + 0x60) + 0x150);
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x4c4c4c4c);
  GUIButton::SetTintColor(pGVar6,&local_70);
  pGVar6 = *(GUIButton **)(*(long *)(param_1 + 0x60) + 0x150);
  FUN_00666bb8(&local_70,0x68f6b2,auStack_78);
  GUIButton::SetTitle(pGVar6,(string *)&local_70);
  if (local_70 + -0x18 != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
  lVar9 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(*(long *)(lVar9 + 0x140) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(lVar9 + 0x130) + 0xe4) = 1;
  plVar7 = (long *)StoreController::SharedController();
  plVar13 = *(long **)(param_1 + 0x10);
  if ((plVar13 == (long *)0x0) || (plVar13[1] == 0)) {
    local_70 = PTR_vtable_007e6120 + 0x10;
                    /* try { // try from 004674e0 to 00567513 has its CatchHandler @ 004673d4 */
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_70);
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 8);
    pcVar14 = *(code **)(*plVar7 + 0x38);
    plVar13[1] = plVar13[1] + 2;
                    /* catch() { ... } // from try @ 004671b0 with catch @ 004672c8 */
    uStack_68 = 0;
    local_70 = PTR_RestoreCompletion_007e79b8;
    local_60 = param_1;
    uVar8 = boost::detail::function::has_empty_target(&local_70);
    if ((uVar8 & 1) == 0) {
      local_b0 = local_60;
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      puVar10 = PTR_stored_vtable_007e6a00;
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    plVar13[2] = plVar13[2] + 1;
    local_98 = (undefined *)0x0;
    local_a8 = uVar15;
    local_a0 = plVar13;
    if (puVar10 != (undefined *)0x0) {
      local_98 = puVar10;
      if (((ulong)puVar10 & 1) == 0) {
                    /* catch() { ... } // from try @ 0046717c with catch @ 0046732c */
        (**(code **)((ulong)puVar10 & 0xfffffffffffffffe))(&local_c0,&local_90,0);
      }
      else {
        local_80 = local_b0;
        uStack_88 = uStack_b8;
        local_90 = local_c0;
      }
    }
    (*pcVar14)(plVar7,&local_a8);
    if (local_98 != (undefined *)0x0) {
      if ((((ulong)local_98 & 1) == 0) &&
         (*(code **)((ulong)local_98 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_98 & 0xfffffffffffffffe))(&local_90,&local_90,2);
      }
      local_98 = (undefined *)0x0;
    }
                    /* catch() { ... } // from try @ 0046715c with catch @ 00467398 */
    if ((local_a0 != (long *)0x0) &&
       (lVar9 = local_a0[2], local_a0[2] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x18))();
    }
    if (((puVar10 != (undefined *)0x0) && (((ulong)puVar10 & 1) == 0)) &&
       (*(code **)((ulong)puVar10 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 004673d4 to 00567417 has its CatchHandler @ 004673d4
                       catch(type#1 @ 00000000) { ... } // from try @ 004673d4 with catch @ 004673d4
                       catch(type#1 @ 00000000) { ... } // from try @ 004674e0 with catch @ 004673d4
                       catch(type#1 @ 00000000) { ... } // from try @ 0046751c with catch @ 004673d4
                        */
      (**(code **)((ulong)puVar10 & 0xfffffffffffffffe))(&local_c0,&local_c0,2);
    }
    lVar9 = plVar13[1];
    plVar13[1] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* try { // try from 00467418 to 005674df has its CatchHandler @ 00467510 */
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    lVar9 = plVar13[1];
    plVar13[1] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


