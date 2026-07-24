/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4f08
 * Function: Caver::ProfilesHeaderView::ProfilesHeaderView
 * Signature: undefined __thiscall ProfilesHeaderView(ProfilesHeaderView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilesHeaderView::ProfilesHeaderView() */

void __thiscall Caver::ProfilesHeaderView::ProfilesHeaderView(ProfilesHeaderView *this)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long **pplVar5;
  undefined *puVar6;
  string *psVar7;
  intrusive_ptr *piVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  long **pplVar15;
  ulong uVar16;
  long **pplVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auStack_c0 [8];
  long local_b8;
  long *local_b0;
  undefined1 auStack_a8 [8];
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long *local_90 [2];
  long *local_80 [7];
  undefined8 uStack_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GUIFrameView::GUIFrameView((GUIFrameView *)this);
  puVar6 = PTR_vtable_007e5398;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined **)this = puVar6 + 0x10;
  psVar7 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004a4f54 to 005a4fd3 has its CatchHandler @ 004a4f54
                       catch(type#1 @ 00000000) { ... } // from try @ 004a4f54 with catch @ 004a4f54
                       catch(type#1 @ 00000000) { ... } // from try @ 004a4fdc with catch @ 004a4f54
                       catch(type#1 @ 00000000) { ... } // from try @ 004a508c with catch @ 004a4f54
                        */
  FUN_00666bb8(local_90,"ui_main_button_pressed",&local_b0);
  TextureLibrary::TextureForName(psVar7,SUB81(local_90,0));
  GUIFrameView::SetFrameTexture((GUIFrameView *)this,(intrusive_ptr *)local_80,false);
  if ((local_80[0] != (long *)0x0) &&
     (iVar13 = (int)local_80[0][1] + -1, *(int *)(local_80[0] + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_80[0] + 8))();
  }
  puVar6 = PTR_DAT_007e5de8;
  if (local_90[0] + -3 != (long *)PTR_DAT_007e5de8) {
    plVar20 = local_90[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar20;
      *(int *)plVar20 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_90[0] + -3);
    }
  }
  local_80[0] = (long *)CONCAT44(local_80[0]._4_4_,0xe5e5e5e5);
                    /* try { // try from 004a4fd4 to 005a4fdb has its CatchHandler @ 004a5060 */
  GUIFrameView::SetFrameColor((GUIFrameView *)this,(Color *)local_80);
                    /* try { // try from 004a4fdc to 005a5083 has its CatchHandler @ 004a4f54 */
  FUN_00666bb8(local_90,"Saved Games",&local_b0);
  local_98 = 0xff000000;
  uStack_94 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel((GameInterfaceBuilder *)local_80,local_90,&uStack_94,&local_98);
  if (local_80[1] != (long *)0x0) {
    local_80[1][1] = local_80[1][1] + 1;
  }
  plVar20 = *(long **)(this + 0x118);
  *(long **)(this + 0x110) = local_80[0];
  *(long **)(this + 0x118) = local_80[1];
  if ((plVar20 != (long *)0x0) && (lVar9 = plVar20[1], plVar20[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    lVar9 = plVar20[2];
    plVar20[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a4fd4 with catch @ 004a5060
                        */
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
                    /* try { // try from 004a5084 to 005a508b has its CatchHandler @ 004a5094 */
  if ((local_80[1] != (long *)0x0) &&
     (lVar9 = local_80[1][1], local_80[1][1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 004a508c to 005a5097 has its CatchHandler @ 004a4f54 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a5084 with catch @ 004a5094
                        */
    (**(code **)(*local_80[1] + 0x10))(local_80[1]);
    lVar9 = local_80[1][2];
    local_80[1][2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_80[1] + 0x18))(local_80[1]);
    }
  }
  if (local_90[0] + -3 != (long *)puVar6) {
    plVar20 = local_90[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004a556c to 005a55b3 has its CatchHandler @ 004a556c
                       catch() { ... } // from try @ 004a556c with catch @ 004a556c
                       catch() { ... } // from try @ 004a564c with catch @ 004a556c
                       catch() { ... } // from try @ 004a5870 with catch @ 004a556c */
      iVar13 = (int)*plVar20;
      *(int *)plVar20 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar20;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_90[0] + -3);
    }
  }
  local_80[0] = *(long **)(this + 0x110);
  pcVar10 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 004a50d4 to 005a50ff has its CatchHandler @ 004a50d4
                       catch() { ... } // from try @ 004a50d4 with catch @ 004a50d4
                       catch() { ... } // from try @ 004a524c with catch @ 004a50d4 */
  local_80[1] = *(long **)(this + 0x118);
  if (local_80[1] != (long *)0x0) {
    local_80[1][1] = local_80[1][1] + 1;
  }
  (*pcVar10)(this,local_80);
  plVar20 = local_80[1];
                    /* try { // try from 004a5100 to 005a5113 has its CatchHandler @ 004a5510 */
  if ((local_80[1] != (long *)0x0) &&
     (lVar9 = local_80[1][1], local_80[1][1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 004a5120 to 005a512b has its CatchHandler @ 004a54a4 */
    (**(code **)(*local_80[1] + 0x10))(local_80[1]);
    lVar9 = plVar20[2];
    plVar20[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004a5154 to 005a518f has its CatchHandler @ 004a5440 */
  FUN_00666bb8(&local_a0,"ui_button_arrow",auStack_a8);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_a0,0));
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_b8,"ui_button_arrow_pressed",auStack_c0);
  piVar8 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar7,SUB81(&local_b8,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)local_90,(intrusive_ptr *)&local_b0,piVar8);
                    /* try { // try from 004a51b8 to 005a51cb has its CatchHandler @ 004a543c */
  if (local_80[1] != (long *)0x0) {
    local_80[1][1] = local_80[1][1] + 1;
  }
  plVar20 = *(long **)(this + 0x128);
  *(long **)(this + 0x120) = local_80[0];
  *(long **)(this + 0x128) = local_80[1];
                    /* try { // try from 004a51dc to 005a51e7 has its CatchHandler @ 004a5404 */
  if ((plVar20 != (long *)0x0) && (lVar9 = plVar20[1], plVar20[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    lVar9 = plVar20[2];
    plVar20[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 004a5210 to 005a524b has its CatchHandler @ 004a53a8 */
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  plVar20 = local_80[1];
  if ((local_80[1] != (long *)0x0) &&
     (lVar9 = local_80[1][1], local_80[1][1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*local_80[1] + 0x10))(local_80[1]);
    lVar9 = plVar20[2];
    plVar20[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 004a524c to 005a5513 has its CatchHandler @ 004a50d4 */
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  if ((local_b0 != (long *)0x0) &&
     (iVar13 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  if ((undefined *)(local_b8 + -0x18) != puVar6) {
    piVar12 = (int *)(local_b8 + -8);
                    /* catch() { ... } // from try @ 004a5100 with catch @ 004a5510 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_b8 + -0x18));
    }
  }
  if ((local_90[0] != (long *)0x0) &&
     (iVar13 = (int)local_90[0][1] + -1, *(int *)(local_90[0] + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_90[0] + 8))();
  }
  if ((undefined *)(local_a0 + -0x18) != puVar6) {
    piVar12 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004a55b4 to 005a55c7 has its CatchHandler @ 004a5878 */
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  local_80[0] = (long *)0x0;
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x120),0,local_80);
  if ((local_80[0] != (long *)0x0) &&
     (iVar13 = (int)local_80[0][1] + -1, *(int *)(local_80[0] + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_80[0] + 8))();
  }
  local_80[0] = (long *)0x0;
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x120),1,local_80);
  if ((local_80[0] != (long *)0x0) &&
     (iVar13 = (int)local_80[0][1] + -1, *(int *)(local_80[0] + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_80[0] + 8))();
  }
  local_80[1] = (long *)_UNK_0068ebc8;
  local_80[0] = _DAT_0068ebc0;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)local_80);
  plVar11 = *(long **)(this + 0x120);
  local_80[1] = (long *)_UNK_0068ebd8;
  local_80[0] = _DAT_0068ebd0;
  local_80[3] = (long *)_UNK_0068ebe8;
  local_80[2] = (long *)_DAT_0068ebe0;
  local_80[5] = (long *)_UNK_0068ebf8;
  local_80[4] = (long *)_DAT_0068ebf0;
  plVar20 = plVar11 + 0x33;
  plVar18 = plVar20;
  if (plVar20 <= (long *)((long)plVar11 + 0x15cU)) {
    plVar18 = (long *)((long)plVar11 + 0x15cU);
  }
  uVar1 = ((ulong)((long)plVar18 + (-0x159 - (long)plVar11)) >> 2) + 1;
  uStack_48 = _UNK_00683808;
  local_80[6] = (long *)_DAT_00683800;
                    /* catch() { ... } // from try @ 004a5210 with catch @ 004a53a8 */
  if (uVar1 < 8) {
    plVar14 = plVar11 + 0x2b;
    pplVar15 = local_80;
  }
  else {
    uVar16 = uVar1 & 0x7ffffffffffffff8;
    pplVar15 = (long **)((long)local_80 + uVar16 * 4);
    plVar18 = plVar11 + 0x2d;
    plVar14 = (long *)((long)plVar11 + uVar16 * 4 + 0x158);
    pplVar17 = local_80 + 2;
    uVar19 = uVar16;
    do {
      pplVar5 = pplVar17 + -1;
      plVar21 = pplVar17[-2];
      plVar23 = pplVar17[1];
      plVar22 = *pplVar17;
      uVar19 = uVar19 - 8;
      pplVar17 = pplVar17 + 4;
      plVar18[-1] = (long)*pplVar5;
      plVar18[-2] = (long)plVar21;
      plVar18[1] = (long)plVar23;
      *plVar18 = (long)plVar22;
      plVar18 = plVar18 + 4;
    } while (uVar19 != 0);
    if (uVar1 == uVar16) goto LAB_004a5408;
  }
  do {
    plVar18 = (long *)((long)plVar14 + 4);
    *(undefined4 *)plVar14 = *(undefined4 *)pplVar15;
    plVar14 = plVar18;
    pplVar15 = (long **)((long)pplVar15 + 4);
                    /* catch() { ... } // from try @ 004a51dc with catch @ 004a5404 */
  } while (plVar18 < plVar20);
LAB_004a5408:
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_80[1] = *(long **)(this + 0x128);
  if (local_80[1] != (long *)0x0) {
    local_80[1][1] = local_80[1][1] + 1;
  }
  local_80[0] = plVar11;
  (*pcVar10)(this,local_80);
  plVar20 = local_80[1];
                    /* catch() { ... } // from try @ 004a51b8 with catch @ 004a543c */
                    /* catch() { ... } // from try @ 004a5154 with catch @ 004a5440 */
  if ((local_80[1] != (long *)0x0) &&
     (lVar9 = local_80[1][1], local_80[1][1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*local_80[1] + 0x10))(local_80[1]);
    lVar9 = plVar20[2];
    plVar20[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  local_80[1] = (long *)_UNK_006918d8;
  local_80[0] = _DAT_006918d0;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)local_80);
                    /* catch() { ... } // from try @ 004a5120 with catch @ 004a54a4 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


