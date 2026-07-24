/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046673c
 * Function: Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed
 * Signature: undefined __cdecl GuidePurchaseViewBuyButtonPressed(GuidePurchaseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(Caver::GuidePurchaseView*)
    */

void Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed
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
  undefined *local_d0;
  undefined8 uStack_c8;
  GuidePurchaseView *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  GuidePurchaseView *local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined8 uStack_78;
  GuidePurchaseView *local_70;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* try { // try from 00466778 to 0056677b has its CatchHandler @ 004667ac */
    pGVar6 = *(GUIButton **)(*(long *)(param_1 + 0x60) + 0x130);
                    /* try { // try from 0046677c to 005667bf has its CatchHandler @ 004666c8 */
    uVar1 = *(uint *)(pGVar6 + 0x120);
    uVar2 = uVar1 | 2;
    *(uint *)(pGVar6 + 0x120) = uVar2;
    if (uVar2 != uVar1) {
      (**(code **)(*(long *)pGVar6 + 0x130))();
      pGVar6 = *(GUIButton **)(*(long *)(param_1 + 0x60) + 0x130);
    }
                    /* catch() { ... } // from try @ 00466778 with catch @ 004667ac */
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x7f7f7f7f);
    GUIButton::SetTintColor(pGVar6,&local_80);
    GuidePurchaseView::UpdateBuyButtonSize(*(GuidePurchaseView **)(param_1 + 0x60));
                    /* try { // try from 004667c0 to 005667c7 has its CatchHandler @ 004667d0 */
    pGVar6 = *(GUIButton **)(*(long *)(param_1 + 0x60) + 0x130);
                    /* try { // try from 004667c8 to 0056681b has its CatchHandler @ 004666c8 */
                    /* catch() { ... } // from try @ 004667c0 with catch @ 004667d0 */
    FUN_00666bb8(&local_80,&DAT_0068f6a7,auStack_88);
                    /* catch() { ... } // from try @ 0046672c with catch @ 004667dc */
    GUIButton::SetTitle(pGVar6,(string *)&local_80);
    if (local_80 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 00466a20 to 00566a33 has its CatchHandler @ 00466a58 */
      piVar11 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
                    /* try { // try from 00466a34 to 00566a5b has its CatchHandler @ 00466a04 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
                    /* catch() { ... } // from try @ 00466a20 with catch @ 00466a58 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00466be4 with catch @ 00466a5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00466ea0 with catch @ 00466a5c
                        */
        operator_delete(local_80 + -0x18);
      }
    }
    lVar9 = *(long *)(param_1 + 0x60);
    *(undefined1 *)(*(long *)(lVar9 + 0x150) + 0xe4) = 1;
    *(undefined1 *)(*(long *)(lVar9 + 0x160) + 0xe4) = 1;
    plVar7 = (long *)StoreController::SharedController();
    plVar13 = *(long **)(param_1 + 0x10);
                    /* try { // try from 0046681c to 0056681f has its CatchHandler @ 0046683c */
    if ((plVar13 == (long *)0x0) || (plVar13[1] == 0)) {
      local_80 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_80);
      goto LAB_00466a7c;
    }
    uVar15 = *(undefined8 *)(param_1 + 8);
                    /* catch() { ... } // from try @ 0046681c with catch @ 0046683c */
    pcVar14 = *(code **)(*plVar7 + 0x30);
    plVar13[1] = plVar13[1] + 2;
    uStack_78 = 0;
    local_80 = PTR_PurchaseCompletion_007e5f90;
    local_70 = param_1;
                    /* catch() { ... } // from try @ 00466874 with catch @ 00466860 */
    uVar8 = boost::detail::function::has_empty_target(&local_80);
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 00466870 to 00566873 has its CatchHandler @ 00466884 */
                    /* try { // try from 00466874 to 00566897 has its CatchHandler @ 00466860 */
      local_c0 = local_70;
      uStack_c8 = uStack_78;
      local_d0 = local_80;
                    /* catch() { ... } // from try @ 00466870 with catch @ 00466884 */
      puVar10 = PTR_stored_vtable_007e7940;
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    plVar13[2] = plVar13[2] + 1;
    local_a8 = (undefined *)0x0;
    local_b8 = uVar15;
    local_b0 = plVar13;
    if (puVar10 != (undefined *)0x0) {
      local_a8 = puVar10;
      if (((ulong)puVar10 & 1) == 0) {
        (**(code **)((ulong)puVar10 & 0xfffffffffffffffe))(&local_d0,&local_a0,0);
      }
      else {
        local_90 = local_c0;
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
      }
    }
    (*pcVar14)(plVar7,param_1 + 0x80,&local_b8);
    if (local_a8 != (undefined *)0x0) {
      if ((((ulong)local_a8 & 1) == 0) &&
         (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
      }
      local_a8 = (undefined *)0x0;
    }
    if ((local_b0 != (long *)0x0) &&
       (lVar9 = local_b0[2], local_b0[2] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_b0 + 0x18))();
    }
    if (((puVar10 != (undefined *)0x0) && (((ulong)puVar10 & 1) == 0)) &&
       (*(code **)((ulong)puVar10 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)puVar10 & 0xfffffffffffffffe))(&local_d0,&local_d0,2);
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
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00466a34 with catch @ 00466a04 */
    return;
  }
LAB_00466a7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


