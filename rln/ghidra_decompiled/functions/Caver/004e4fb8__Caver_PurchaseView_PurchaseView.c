/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e4fb8
 * Function: Caver::PurchaseView::PurchaseView
 * Signature: undefined __thiscall PurchaseView(PurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::PurchaseView() */

void __thiscall Caver::PurchaseView::PurchaseView(PurchaseView *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  GUIFrameView *this_00;
  string *psVar8;
  intrusive_ptr *piVar9;
  long lVar10;
  code *pcVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  GUIButton *this_01;
  undefined1 auStack_b0 [8];
  long local_a8;
  long *local_a0;
  undefined1 auStack_98 [4];
  undefined4 local_94;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  long *local_68 [2];
  long *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e7530 + 0x10;
  memset(this + 0xf0,0,0x58);
  FUN_00666bb8(local_68,&DAT_0068fbeb,&local_88);
  local_70[0] = 0xffbeeeff;
  local_78[0] = 0xff000000;
  GameInterfaceBuilder::NormalLabel((GameInterfaceBuilder *)&local_58,local_68,local_70,local_78);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar14 = *(long **)(this + 0xf8);
  *(long **)(this + 0xf0) = local_58;
  *(long **)(this + 0xf8) = local_50;
  if ((plVar14 != (long *)0x0) && (lVar10 = plVar14[1], plVar14[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar10 = local_50[2];
    local_50[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  puVar7 = PTR_DAT_007e5de8;
  if (local_68[0] + -3 != (long *)PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004e579c with catch @ 004e57b0 */
    plVar14 = local_68[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar14;
      *(int *)plVar14 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_68[0] + -3);
    }
  }
  local_58 = *(long **)(this + 0xf0);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0xf8);
  if (local_50 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004e514c with catch @ 004e511c */
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar11)(this,&local_58);
  plVar14 = local_50;
                    /* try { // try from 004e5138 to 005e514b has its CatchHandler @ 004e5170 */
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* try { // try from 004e514c to 005e5173 has its CatchHandler @ 004e511c */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
                    /* catch() { ... } // from try @ 004e5138 with catch @ 004e5170 */
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  this_00 = operator_new(0x110);
  GUIFrameView::GUIFrameView(this_00);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,this_00);
  plVar14 = *(long **)(this + 0x118);
  plVar1 = *(long **)(this + 0x120);
  *(long **)(this + 0x118) = local_58;
  *(long **)(this + 0x120) = local_50;
  if ((plVar1 != (long *)0x0) && (lVar10 = plVar1[1], plVar1[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    local_58 = plVar14;
    local_50 = plVar1;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar10 = plVar1[2];
    plVar1[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
                    /* catch() { ... } // from try @ 004e52b0 with catch @ 004e51e8 */
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  local_58 = *(long **)(this + 0x118);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x120);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar11)(this,&local_58);
  plVar14 = local_50;
                    /* try { // try from 004e5240 to 005e5243 has its CatchHandler @ 004e5254 */
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
                    /* catch() { ... } // from try @ 004e5240 with catch @ 004e5254 */
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  psVar8 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004e527c to 005e527f has its CatchHandler @ 004e52bc */
  FUN_00666bb8(&local_58,"ui_guide_buy",&local_88);
  TextureLibrary::TextureForName(psVar8,(bool)((char)&stack0xfffffffffffffff0 + -0x48));
                    /* try { // try from 004e52a8 to 005e52af has its CatchHandler @ 004e52b8 */
                    /* try { // try from 004e52b0 to 005e52bf has its CatchHandler @ 004e51e8 */
  if (local_58 + -3 != (long *)puVar7) {
    plVar14 = local_58 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar14;
      *(int *)plVar14 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_58 + -3);
    }
  }
  psVar8 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 004e52a8 with catch @ 004e52b8 */
                    /* catch() { ... } // from try @ 004e527c with catch @ 004e52bc */
                    /* try { // try from 004e52c0 to 005e530f has its CatchHandler @ 004e52c0
                       catch() { ... } // from try @ 004e52c0 with catch @ 004e52c0
                       catch() { ... } // from try @ 004e532c with catch @ 004e52c0
                       catch() { ... } // from try @ 004e53bc with catch @ 004e52c0
                       catch() { ... } // from try @ 004e5528 with catch @ 004e52c0
                       catch() { ... } // from try @ 004e557c with catch @ 004e52c0
                       catch() { ... } // from try @ 004e55d0 with catch @ 004e52c0 */
  FUN_00666bb8(&local_58,"ui_guide_buy_pressed",&local_90);
  piVar9 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar8,(bool)((char)&stack0xfffffffffffffff0 + -0x48));
  if (local_58 + -3 != (long *)puVar7) {
    plVar14 = local_58 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar14;
      *(int *)plVar14 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_58 + -3);
    }
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_88,(intrusive_ptr *)&local_90,piVar9);
  if (local_50 != (long *)0x0) {
                    /* try { // try from 004e5310 to 005e532b has its CatchHandler @ 004e55c4 */
    local_50[1] = local_50[1] + 1;
  }
  plVar14 = *(long **)(this + 0x130);
  *(long **)(this + 0x128) = local_58;
  *(long **)(this + 0x130) = local_50;
                    /* try { // try from 004e532c to 005e53b7 has its CatchHandler @ 004e52c0 */
  if ((plVar14 != (long *)0x0) && (lVar10 = plVar14[1], plVar14[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  plVar14 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
                    /* try { // try from 004e53b8 to 005e53bb has its CatchHandler @ 004e55d8 */
                    /* try { // try from 004e53bc to 005e5523 has its CatchHandler @ 004e52c0 */
  if ((local_90 != (long *)0x0) &&
     (iVar13 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((local_88 != (long *)0x0) &&
     (iVar13 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x128),0,local_68);
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x128),1,&local_80);
  local_58 = *(long **)(*(GUIView **)(this + 0x128) + 0x74);
  local_50 = (long *)CONCAT44((int)local_68[0][0xb],0x42e60000);
  GUIView::SetFrame(*(GUIView **)(this + 0x128),(Rectangle *)&local_58);
  plVar14 = *(long **)(this + 0x128);
  uVar2 = *(uint *)(plVar14 + 0x24);
  uVar3 = uVar2 | 2;
  *(uint *)(plVar14 + 0x24) = uVar3;
  if (uVar3 != uVar2) {
    (**(code **)(*plVar14 + 0x130))();
    plVar14 = *(long **)(this + 0x128);
  }
  local_50 = *(long **)(this + 0x130);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  local_58 = plVar14;
  (*pcVar11)(this,&local_58);
  plVar14 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  this_01 = *(GUIButton **)(this + 0x128);
  FUN_00666bb8(&local_58,&DAT_0068f6a7,&local_90);
  GUIButton::SetTitle(this_01,(string *)&local_58);
  if (local_58 + -3 != (long *)puVar7) {
    plVar14 = local_58 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar14;
      *(int *)plVar14 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_58 + -3);
    }
  }
  local_94 = 0x7f7f7f7f;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x128),&local_94);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004e5524 to 005e5527 has its CatchHandler @ 004e55b8 */
                    /* try { // try from 004e5528 to 005e5577 has its CatchHandler @ 004e52c0 */
  FUN_00666bb8(&local_90,"ui_button_close",auStack_98);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_90,0));
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_button_close_pressed",auStack_b0);
  piVar9 = (intrusive_ptr *)0x1;
                    /* try { // try from 004e5578 to 005e557b has its CatchHandler @ 004e55b4 */
                    /* try { // try from 004e557c to 005e55c7 has its CatchHandler @ 004e52c0 */
  TextureLibrary::TextureForName(psVar8,SUB81(&local_a8,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_88,(intrusive_ptr *)&local_a0,piVar9);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar14 = *(long **)(this + 0x140);
  *(long **)(this + 0x138) = local_58;
  *(long **)(this + 0x140) = local_50;
                    /* catch() { ... } // from try @ 004e5578 with catch @ 004e55b4 */
                    /* catch() { ... } // from try @ 004e5524 with catch @ 004e55b8 */
  if ((plVar14 != (long *)0x0) && (lVar10 = plVar14[1], plVar14[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004e5310 with catch @ 004e55c4 */
                    /* try { // try from 004e55c8 to 005e55cf has its CatchHandler @ 004e55d4 */
    (**(code **)(*plVar14 + 0x10))(plVar14);
                    /* try { // try from 004e55d0 to 005e55eb has its CatchHandler @ 004e52c0 */
    lVar10 = plVar14[2];
                    /* catch() { ... } // from try @ 004e55c8 with catch @ 004e55d4 */
                    /* catch() { ... } // from try @ 004e53b8 with catch @ 004e55d8 */
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
                    /* catch() { ... } // from try @ 004e5678 with catch @ 004e55ec
                       catch() { ... } // from try @ 004e5720 with catch @ 004e55ec */
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  plVar14 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar10 = plVar14[2];
    plVar14[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
                    /* try { // try from 004e5634 to 005e564b has its CatchHandler @ 004e56b4 */
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if ((local_a0 != (long *)0x0) &&
     (iVar13 = (int)local_a0[1] + -1, *(int *)(local_a0 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_a0 + 8))();
  }
  if ((undefined *)(local_a8 + -0x18) != puVar7) {
    piVar12 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
                    /* try { // try from 004e5908 to 005e5a0b has its CatchHandler @ 004e5908
                       catch() { ... } // from try @ 004e5908 with catch @ 004e5908
                       catch() { ... } // from try @ 004e5a10 with catch @ 004e5908
                       catch() { ... } // from try @ 004e5d24 with catch @ 004e5908
                       catch() { ... } // from try @ 004e5e64 with catch @ 004e5908 */
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_a8 + -0x18));
    }
  }
                    /* try { // try from 004e5678 to 005e56db has its CatchHandler @ 004e55ec */
  if ((local_88 != (long *)0x0) &&
     (iVar13 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  if (local_90 + -3 != (long *)puVar7) {
    plVar14 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar14;
      *(int *)plVar14 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  local_58 = *(long **)(*(GUIView **)(this + 0x138) + 0x74);
  local_50 = (long *)&DAT_4208000042080000;
                    /* catch() { ... } // from try @ 004e5634 with catch @ 004e56b4 */
  GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)&local_58);
  local_58 = *(long **)(this + 0x138);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x140);
  if (local_50 != (long *)0x0) {
                    /* try { // try from 004e56dc to 005e56df has its CatchHandler @ 004e5710 */
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar11)(this,&local_58);
  plVar14 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004e56dc with catch @ 004e5710 */
                    /* catch() { ... } // from try @ 004e5670 with catch @ 004e5714 */
                    /* try { // try from 004e5718 to 005e571f has its CatchHandler @ 004e5728 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar10 = plVar14[2];
                    /* try { // try from 004e5720 to 005e572b has its CatchHandler @ 004e55ec */
    plVar14[2] = lVar10 + -1;
                    /* catch() { ... } // from try @ 004e5718 with catch @ 004e5728 */
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if ((local_80 != (long *)0x0) &&
     (iVar13 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if ((local_68[0] != (long *)0x0) &&
     (iVar13 = (int)local_68[0][1] + -1, *(int *)(local_68[0] + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_68[0] + 8))();
  }
                    /* catch() { ... } // from try @ 004e57a0 with catch @ 004e578c */
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004e579c to 005e579f has its CatchHandler @ 004e57b0 */
                    /* try { // try from 004e57a0 to 005e57c3 has its CatchHandler @ 004e578c */
  return;
}


