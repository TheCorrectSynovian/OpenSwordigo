/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f2524
 * Function: Caver::StoreViewController::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::StoreViewController::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  shared_ptr *psVar1;
  long lVar2;
  StoreView *this;
  long *plVar3;
  undefined8 extraout_x0;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 local_90;
  long *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = *(StoreView **)((long)param_1 + 0x58);
  if (*(GUIEvent **)(this + 0xf0) == param_2) {
    puVar5 = *(undefined8 **)((long)param_1 + 0x50);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,param_1);
      this = *(StoreView **)((long)param_1 + 0x58);
    }
    StoreView::AnimateOut(this);
    GUIViewController::DismissModalViewController(*(GUIViewController **)((long)param_1 + 0x28));
  }
  else if (*(GUIEvent **)(this + 0x120) == param_2) {
    plVar3 = (long *)StoreController::SharedController();
    plVar9 = *(long **)((long)param_1 + 0x10);
    if ((plVar9 == (long *)0x0) || (plVar9[1] == 0)) {
      local_60 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
      std::exception::~exception((exception *)&local_60);
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(extraout_x0);
    }
    uVar11 = *(undefined8 *)((long)param_1 + 8);
    pcVar10 = *(code **)(*plVar3 + 0x38);
    plVar9[1] = plVar9[1] + 2;
    uStack_58 = 0;
    local_60 = PTR_RestoreCompletion_007e5908;
    local_50 = param_1;
    uVar8 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar8 & 1) == 0) {
      local_98 = local_50;
      uStack_a0 = uStack_58;
      local_a8 = local_60;
                    /* catch() { ... } // from try @ 004f2678 with catch @ 004f2648 */
      puVar6 = PTR_stored_vtable_007e6b38;
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    plVar9[2] = plVar9[2] + 1;
    local_80 = (undefined *)0x0;
                    /* try { // try from 004f2664 to 005f2677 has its CatchHandler @ 004f269c */
    local_90 = uVar11;
    local_88 = plVar9;
    if (puVar6 != (undefined *)0x0) {
      local_80 = puVar6;
      if (((ulong)puVar6 & 1) == 0) {
                    /* try { // try from 004f2678 to 005f269f has its CatchHandler @ 004f2648 */
        (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_a8,&local_78,0);
      }
      else {
        local_68 = local_98;
        uStack_70 = uStack_a0;
        local_78 = local_a8;
      }
    }
    (*pcVar10)(plVar3,&local_90);
    if (local_80 != (undefined *)0x0) {
      if ((((ulong)local_80 & 1) == 0) &&
         (*(code **)((ulong)local_80 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 004f2748 with catch @ 004f26f0 */
        (**(code **)((ulong)local_80 & 0xfffffffffffffffe))(&local_78,&local_78,2);
      }
      local_80 = (undefined *)0x0;
    }
    if ((local_88 != (long *)0x0) &&
       (lVar7 = local_88[2], local_88[2] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_88 + 0x18))();
    }
                    /* try { // try from 004f272c to 005f272f has its CatchHandler @ 004f273c */
    if (((puVar6 != (undefined *)0x0) && (((ulong)puVar6 & 1) == 0)) &&
       (*(code **)((ulong)puVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 004f272c with catch @ 004f273c */
                    /* try { // try from 004f2740 to 005f2747 has its CatchHandler @ 004f2750 */
                    /* try { // try from 004f2748 to 005f2753 has its CatchHandler @ 004f26f0 */
      (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_a8,&local_a8,2);
    }
                    /* catch() { ... } // from try @ 004f2740 with catch @ 004f2750 */
    lVar7 = plVar9[1];
                    /* try { // try from 004f2754 to 005f279b has its CatchHandler @ 004f2754
                       catch(type#1 @ 00000000) { ... } // from try @ 004f2754 with catch @ 004f2754
                       catch(type#1 @ 00000000) { ... } // from try @ 004f27b8 with catch @ 004f2754
                       catch(type#1 @ 00000000) { ... } // from try @ 004f2860 with catch @ 004f2754
                        */
    plVar9[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    lVar7 = plVar9[1];
    plVar9[1] = lVar7 + -1;
                    /* try { // try from 004f279c to 005f27b7 has its CatchHandler @ 004f2854 */
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
                    /* try { // try from 004f27b8 to 005f2857 has its CatchHandler @ 004f2754 */
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
  }
  else {
    lVar7 = *(long *)((long)param_1 + 0x78) - *(long *)((long)param_1 + 0x70);
    if (lVar7 != 0) {
      lVar4 = 0;
      uVar8 = 0;
      do {
        if (*(GUIEvent **)(*(long *)(*(long *)(this + 0x140) + lVar4) + 0x100) == param_2) {
          psVar1 = (shared_ptr *)(*(long *)((long)param_1 + 0x88) + lVar4);
                    /* catch() { ... } // from try @ 004f2664 with catch @ 004f269c */
          if (*(long *)psVar1 != 0) {
            PurchaseProduct(param_1,psVar1);
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar8 < (ulong)(lVar7 >> 3));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


