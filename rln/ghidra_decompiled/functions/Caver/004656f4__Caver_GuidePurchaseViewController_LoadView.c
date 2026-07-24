/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004656f4
 * Function: Caver::GuidePurchaseViewController::LoadView
 * Signature: undefined __thiscall LoadView(GuidePurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::LoadView() */

void __thiscall Caver::GuidePurchaseViewController::LoadView(GuidePurchaseViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  GuidePurchaseView *this_00;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined *local_b0;
  long *plStack_a8;
  GuidePurchaseViewController *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined *local_88;
  undefined *local_80;
  long *plStack_78;
  GuidePurchaseViewController *local_70;
  long local_68;
  undefined *local_60;
  long *plStack_58;
  GuidePurchaseViewController *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 004656cc with catch @ 004656f8 */
                    /* catch() { ... } // from try @ 004655c4 with catch @ 004656fc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00465720 to 00565747 has its CatchHandler @ 00465794 */
  this_00 = operator_new(0x170);
  GuidePurchaseView::GuidePurchaseView(this_00);
  boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>
            ((shared_ptr<Caver::GuidePurchaseView> *)&local_60,this_00);
  puVar8 = *(undefined **)(this + 0x60);
  plVar4 = *(long **)(this + 0x68);
  *(undefined **)(this + 0x60) = local_60;
  *(long **)(this + 0x68) = plStack_58;
  local_60 = puVar8;
  plStack_58 = plVar4;
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00465768 to 0056578f has its CatchHandler @ 00465928 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
                    /* catch() { ... } // from try @ 00465720 with catch @ 00465794 */
  lVar7 = *(long *)(this + 0x60);
  *(GuidePurchaseViewController **)(lVar7 + 0xf0) = this + 0x48;
  if (*(int *)(lVar7 + 0x70) != 0x12) {
    plVar4 = *(long **)(lVar7 + 0x58);
    *(undefined4 *)(lVar7 + 0x70) = 0x12;
                    /* try { // try from 004657b8 to 005657df has its CatchHandler @ 004657e4 */
    if ((plVar4 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar4 + 0x8c))) {
      (**(code **)(*plVar4 + 0x58))();
    }
  }
  plVar4 = (long *)StoreController::SharedController();
                    /* catch() { ... } // from try @ 004657b8 with catch @ 004657e4 */
                    /* catch() { ... } // from try @ 00465450 with catch @ 004657e8 */
  pcVar12 = *(code **)(*plVar4 + 0x20);
  FUN_00666bb8(&local_68,"compass",&local_60);
  local_60 = PTR_ProductRequestCompletion_007e4f18;
  plVar11 = *(long **)(this + 0x10);
                    /* try { // try from 0046580c to 00565833 has its CatchHandler @ 00465838 */
  if ((plVar11 == (long *)0x0) || (plVar11[1] == 0)) {
                    /* try { // try from 00465b1c to 00565b2f has its CatchHandler @ 00465bc4 */
    local_60 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
    goto LAB_00465b30;
  }
  uVar13 = *(undefined8 *)(this + 8);
  plVar11[1] = plVar11[1] + 2;
  plStack_58 = (long *)0x0;
  local_50 = this;
                    /* catch() { ... } // from try @ 0046580c with catch @ 00465838 */
                    /* catch() { ... } // from try @ 00465424 with catch @ 0046583c */
  uVar5 = boost::detail::function::has_empty_target(&local_60);
  if ((uVar5 & 1) == 0) {
    local_a0 = local_50;
    plStack_a8 = plStack_58;
    local_b0 = local_60;
                    /* try { // try from 00465860 to 00565887 has its CatchHandler @ 004658d4 */
    puVar8 = PTR_stored_vtable_007e6810;
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  plVar11[2] = plVar11[2] + 1;
  local_88 = (undefined *)0x0;
  local_98 = uVar13;
  local_90 = plVar11;
  if (puVar8 != (undefined *)0x0) {
    local_88 = puVar8;
    if (((ulong)puVar8 & 1) == 0) {
      (**(code **)((ulong)puVar8 & 0xfffffffffffffffe))(&local_b0,&local_80,0);
                    /* try { // try from 004658a8 to 005658cf has its CatchHandler @ 00465928 */
    }
    else {
      local_70 = local_a0;
      plStack_78 = plStack_a8;
      local_80 = local_b0;
    }
  }
  (*pcVar12)(plVar4,&local_68,&local_98);
  if (local_88 != (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00465860 with catch @ 004658d4 */
    if ((((ulong)local_88 & 1) == 0) &&
       (*(code **)((ulong)local_88 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_88 & 0xfffffffffffffffe))(&local_80,&local_80,2);
    }
                    /* try { // try from 004658f8 to 0056591f has its CatchHandler @ 00465924 */
    local_88 = (undefined *)0x0;
  }
  if ((local_90 != (long *)0x0) && (lVar7 = local_90[2], local_90[2] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x18))();
  }
                    /* try { // try from 00465920 to 005659d3 has its CatchHandler @ 004652dc */
                    /* catch() { ... } // from try @ 004658f8 with catch @ 00465924 */
                    /* catch() { ... } // from try @ 00465768 with catch @ 00465928
                       catch() { ... } // from try @ 004658a8 with catch @ 00465928 */
                    /* catch() { ... } // from try @ 0046553c with catch @ 00465934 */
  if (((puVar8 != (undefined *)0x0) && (((ulong)puVar8 & 1) == 0)) &&
     (*(code **)((ulong)puVar8 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 00465528 with catch @ 00465938 */
                    /* catch() { ... } // from try @ 0046554c with catch @ 00465944
                       catch() { ... } // from try @ 00465638 with catch @ 00465944 */
    (**(code **)((ulong)puVar8 & 0xfffffffffffffffe))(&local_b0,&local_b0,2);
  }
  lVar7 = plVar11[1];
  plVar11[1] = lVar7 + -1;
  if (lVar7 + -1 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
                    /* catch() { ... } // from try @ 004653ac with catch @ 00465974
                       catch() { ... } // from try @ 00465498 with catch @ 00465974 */
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  lVar7 = plVar11[1];
  plVar11[1] = lVar7 + -1;
  if (lVar7 + -1 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* catch() { ... } // from try @ 00465a54 with catch @ 004659dc
                       catch() { ... } // from try @ 00465a78 with catch @ 004659dc
                       catch() { ... } // from try @ 00465b40 with catch @ 004659dc */
  if ((undefined *)(local_68 + -0x18) == PTR_DAT_007e5de8) {
LAB_004659e8:
    uVar13 = *(undefined8 *)(this + 0x60);
    plVar4 = *(long **)(this + 0x68);
  }
  else {
    piVar9 = (int *)(local_68 + -8);
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
    if (0 < iVar10) goto LAB_004659e8;
                    /* try { // try from 00465b04 to 00565b17 has its CatchHandler @ 00465bc8 */
    operator_delete((undefined *)(local_68 + -0x18));
    uVar13 = *(undefined8 *)(this + 0x60);
    plVar4 = *(long **)(this + 0x68);
  }
  if (plVar4 != (long *)0x0) {
    plVar4[1] = plVar4[1] + 2;
  }
  plVar11 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar13;
  *(long **)(this + 0x20) = plVar4;
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 00465a40 to 00565a53 has its CatchHandler @ 00465bcc */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  puVar6 = *(undefined8 **)(this + 0x40);
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 00465a54 to 00565a67 has its CatchHandler @ 004659dc */
    (**(code **)*puVar6)(puVar6,this);
  }
                    /* try { // try from 00465a68 to 00565a77 has its CatchHandler @ 00465c18 */
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00465a78 to 00565b03 has its CatchHandler @ 004659dc */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00465b30:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00465b30 to 00565b3f has its CatchHandler @ 00465bd8 */
  __stack_chk_fail();
}


