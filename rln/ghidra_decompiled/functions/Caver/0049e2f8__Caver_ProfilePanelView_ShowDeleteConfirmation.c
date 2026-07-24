/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049e2f8
 * Function: Caver::ProfilePanelView::ShowDeleteConfirmation
 * Signature: undefined __thiscall ShowDeleteConfirmation(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilePanelView::ShowDeleteConfirmation() */

void __thiscall Caver::ProfilePanelView::ShowDeleteConfirmation(ProfilePanelView *this)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  GUITextField *pGVar7;
  FontLibrary *this_00;
  undefined *puVar8;
  GUIFrameView *this_01;
  string *psVar9;
  ulong uVar10;
  GUIAlertView *this_02;
  int in_w5;
  long lVar11;
  GUIView *pGVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  code *pcVar16;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ProfilePanelView *local_c0;
  undefined1 auStack_b8 [4];
  float local_b4;
  float fStack_b0;
  float local_ac;
  float fStack_a8;
  undefined4 local_a4;
  GUIView *local_a0;
  long *local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  ProfilePanelView *local_70;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00666bb8(&local_58,"Delete",&local_d8);
  FUN_00666bb8(&local_50,"Cancel",&local_80);
  FUN_00666bb8(&local_80,"DELETE SAVEGAME",auStack_88);
  FUN_00666bb8(&local_a0,&DAT_0068fbeb,auStack_90);
  GameInterfaceBuilder::AlertView
            ((GameInterfaceBuilder *)&local_80,(string *)&local_a0,(string *)0x2,
             (int)&stack0xfffffffffffffff0 + -0x48,(string *)0x1,in_w5);
  lVar11 = CONCAT44(fStack_cc,fStack_d0);
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
  }
  plVar15 = *(long **)(this + 0x128);
  *(ulong *)(this + 0x120) = CONCAT44(fStack_d4,local_d8);
  *(long *)(this + 0x128) = lVar11;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  plVar15 = (long *)CONCAT44(fStack_cc,fStack_d0);
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  puVar6 = PTR_DAT_007e5de8;
  if (local_a0 + -0x18 != (GUIView *)PTR_DAT_007e5de8) {
    pGVar12 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *(int *)pGVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar4) {
          *(int *)pGVar12 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 0049e8c4 to 0059e8cf has its CatchHandler @ 0049e71c */
    if (iVar14 < 1) {
                    /* catch() { ... } // from try @ 0049e84c with catch @ 0049e8cc */
      operator_delete(local_a0 + -0x18);
                    /* catch() { ... } // from try @ 0049e8e4 with catch @ 0049e8d0 */
    }
  }
  if ((undefined *)((long)local_80 + -0x18) != puVar6) {
                    /* try { // try from 0049e800 to 0059e84b has its CatchHandler @ 0049e71c */
    piVar13 = (int *)((long)local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0049e7fc with catch @ 0049e810 */
        iVar14 = *piVar13;
                    /* catch() { ... } // from try @ 0049e7c8 with catch @ 0049e818 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 0049e8e0 to 0059e8e3 has its CatchHandler @ 0049e8f4 */
                    /* try { // try from 0049e8e4 to 0059e907 has its CatchHandler @ 0049e8d0 */
    if (iVar14 < 1) {
      operator_delete((undefined *)((long)local_80 + -0x18));
    }
  }
  *(ProfilePanelView **)(*(long *)(this + 0x120) + 0x118) = this + 0x110;
  pGVar7 = (GUITextField *)GUITextField::New();
  boost::shared_ptr<Caver::GUITextField>::shared_ptr<Caver::GUITextField>
            ((shared_ptr<Caver::GUITextField> *)&local_a0,pGVar7);
  pGVar12 = local_a0;
  pcVar16 = *(code **)(*(long *)local_a0 + 0x140);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  (*pcVar16)(pGVar12,&local_d8);
  plVar15 = (long *)CONCAT44(fStack_cc,fStack_d0);
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  local_a4 = 0xffffffff;
  (**(code **)(*(long *)local_a0 + 0x150))(local_a0,&local_a4);
  pGVar12 = local_a0;
  pcVar16 = *(code **)(*(long *)local_a0 + 0x170);
  FUN_00666bb8(&local_d8,"Type DELETE to confirm",auStack_60);
  (*pcVar16)(pGVar12,&local_d8);
  puVar8 = (undefined *)(CONCAT44(fStack_d4,local_d8) + -0x18);
  if (puVar8 != puVar6) {
                    /* catch() { ... } // from try @ 0049e770 with catch @ 0049e828 */
    piVar13 = (int *)(CONCAT44(fStack_d4,local_d8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 0049e8e0 with catch @ 0049e8f4 */
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
                    /* try { // try from 0049e908 to 0059e923 has its CatchHandler @ 0049e908
                       catch() { ... } // from try @ 0049e908 with catch @ 0049e908
                       catch() { ... } // from try @ 0049e928 with catch @ 0049e908 */
      operator_delete(puVar8);
    }
  }
  fStack_cc = (float)_UNK_006913e8;
  uStack_c8 = (undefined4)((ulong)_UNK_006913e8 >> 0x20);
  fStack_d4 = (float)_DAT_006913e0;
  fStack_d0 = (float)((ulong)_DAT_006913e0 >> 0x20);
  local_d8 = -NAN;
  (**(code **)(*(long *)local_a0 + 0x1a0))(local_a0,&local_d8);
  pGVar12 = local_a0;
  (**(code **)(*(long *)local_a0 + 0x198))(auStack_b8,local_a0);
  (**(code **)(*(long *)local_a0 + 0x1b0))(&local_80);
  local_d8 = 0.0 - local_b4;
  fStack_d4 = 0.0 - local_ac;
  fStack_d0 = (float)local_80 + local_b4 + fStack_b0;
  fStack_cc = local_80._4_4_ + local_ac + fStack_a8;
  GUIView::SetFrame(pGVar12,(Rectangle *)&local_d8);
  this_01 = (GUIFrameView *)GUITextField::frameView((GUITextField *)local_a0);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_frame",auStack_88);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_80,0));
  GUIFrameView::SetFrameTexture(this_01,(intrusive_ptr *)&local_d8,false);
  plVar15 = (long *)CONCAT44(fStack_d4,local_d8);
  if ((plVar15 != (long *)0x0) &&
     (iVar14 = (int)plVar15[1] + -1, *(int *)(plVar15 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*plVar15 + 8))();
  }
  if ((undefined *)((long)local_80 + -0x18) != puVar6) {
                    /* try { // try from 0049e84c to 0059e8c3 has its CatchHandler @ 0049e8cc */
    piVar13 = (int *)((long)local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 0049e924 to 0059e927 has its CatchHandler @ 0049e954 */
    if (iVar14 < 1) {
                    /* try { // try from 0049e928 to 0059e967 has its CatchHandler @ 0049e908 */
      operator_delete((undefined *)((long)local_80 + -0x18));
    }
  }
  GUIAlertView::AddTextField(*(GUIAlertView **)(this + 0x120),(shared_ptr *)&local_a0);
  (**(code **)(*(long *)local_a0 + 0x1d0))(local_a0,1);
  local_80 = PTR_DeleteTextFieldValueChanged_007e4dc8;
  *(ProfilePanelView **)(local_a0 + 0x138) = this + 0x118;
  local_d8 = 0.0;
  fStack_d4 = 0.0;
  uStack_78 = 0;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_c0 = local_70;
    uStack_c8 = (undefined4)uStack_78;
    uStack_c4 = (undefined4)((ulong)uStack_78 >> 0x20);
    fStack_d0 = SUB84(local_80,0);
    fStack_cc = (float)((ulong)local_80 >> 0x20);
    puVar8 = PTR_stored_vtable_007e76e0;
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  local_d8 = SUB84(puVar8,0);
  fStack_d4 = (float)((ulong)puVar8 >> 0x20);
  GUIControl::AddTargetActionForControlEvent((GUIControl *)local_a0,this,&local_d8,0x1000);
  if (CONCAT44(fStack_d4,local_d8) != 0) {
    if ((((uint)local_d8 & 1) == 0) &&
       (pcVar16 = *(code **)(CONCAT44(fStack_d4,local_d8) & 0xfffffffffffffffe),
       pcVar16 != (code *)0x0)) {
      (*pcVar16)(&fStack_d0,&fStack_d0,2);
    }
    local_d8 = 0.0;
    fStack_d4 = 0.0;
  }
  this_02 = *(GUIAlertView **)(this + 0x120);
  plVar15 = (long *)**(long **)(this_02 + 0x158);
  *(long **)(this + 0x130) = plVar15;
                    /* catch() { ... } // from try @ 0049e800 with catch @ 0049e71c
                       catch() { ... } // from try @ 0049e8c4 with catch @ 0049e71c */
  uVar1 = *(uint *)(plVar15 + 0x24);
  uVar2 = uVar1 | 2;
  *(uint *)(plVar15 + 0x24) = uVar2;
  if (uVar2 != uVar1) {
    (**(code **)(*plVar15 + 0x130))(plVar15);
    this_02 = *(GUIAlertView **)(this + 0x120);
  }
  GUIAlertView::PresentFromView(this_02,(GUIView *)this);
  if ((local_98 != (long *)0x0) &&
     (lVar11 = local_98[1], local_98[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 0049e770 to 0059e773 has its CatchHandler @ 0049e828 */
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar11 = local_98[2];
    local_98[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_98 + 0x18))(local_98);
    }
  }
                    /* try { // try from 0049e794 to 0059e797 has its CatchHandler @ 0049e820 */
  if ((undefined *)(local_50 + -0x18) != puVar6) {
    piVar13 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if ((undefined *)(local_58 + -0x18) != puVar6) {
    piVar13 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 0049e924 with catch @ 0049e954 */
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0049e7c8 to 0059e7cb has its CatchHandler @ 0049e818 */
  return;
}


