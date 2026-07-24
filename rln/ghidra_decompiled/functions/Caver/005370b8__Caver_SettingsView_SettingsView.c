/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005370b8
 * Function: Caver::SettingsView::SettingsView
 * Signature: undefined __thiscall SettingsView(SettingsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::SettingsView() */

void __thiscall Caver::SettingsView::SettingsView(SettingsView *this)

{
  undefined *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  FontLibrary *this_00;
  GameInterfaceBuilder *pGVar11;
  string *psVar12;
  intrusive_ptr *piVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  GUIControl *pGVar17;
  GUILabel *pGVar18;
  size_t *psVar19;
  long *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  SettingsView *local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  undefined8 uStack_78;
  SettingsView *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar7 = PTR_DAT_007e5de8;
  puVar1 = PTR_vtable_007e7098 + 0x10;
  *(undefined **)(this + 0xf0) = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)this = puVar1;
  memset(this + 0xf8,0,0xc4);
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
                    /* try { // try from 0053712c to 006371db has its CatchHandler @ 0053712c
                       catch() { ... } // from try @ 0053712c with catch @ 0053712c
                       catch() { ... } // from try @ 005371e0 with catch @ 0053712c */
  FUN_00666bb8(&local_a8,"OPTIONS",&local_b8);
  FUN_0066a6a8(this + 0xf0,&local_a8);
  if (local_a8 + -3 != (long *)puVar7) {
    plVar16 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_a8 + -3);
    }
  }
  FUN_00666bb8(&local_80,&DAT_00694cbc,auStack_88);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_80,false);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x118);
  *(long **)(this + 0x110) = local_a8;
  *(long **)(this + 0x118) = local_a0;
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* try { // try from 005371dc to 006371df has its CatchHandler @ 005372d0 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 005371e0 to 006372e3 has its CatchHandler @ 0053712c */
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar7) {
                    /* try { // try from 005388d0 to 006388d3 has its CatchHandler @ 00538cec */
                    /* try { // try from 005388d4 to 00638a07 has its CatchHandler @ 00538814 */
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  puVar1 = PTR_ButtonPressed_007e5c70;
  pGVar17 = *(GUIControl **)(this + 0x110);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)PTR_ButtonPressed_007e5c70;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
                    /* catch() { ... } // from try @ 005371dc with catch @ 005372d0 */
  local_a8 = *(long **)(this + 0x110);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x118);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  FUN_00666bb8(&local_80,0x694cc9,auStack_88);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_80,false);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x128);
  *(long **)(this + 0x120) = local_a8;
  *(long **)(this + 0x128) = local_a0;
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
                    /* catch() { ... } // from try @ 00537454 with catch @ 00537424 */
  pGVar17 = *(GUIControl **)(this + 0x120);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar1;
  local_70 = this;
                    /* try { // try from 00537440 to 00637453 has its CatchHandler @ 00537478 */
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
                    /* try { // try from 00537454 to 0063747b has its CatchHandler @ 00537424 */
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
                    /* catch() { ... } // from try @ 00537440 with catch @ 00537478 */
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 005374d4 with catch @ 00537498 */
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  local_a8 = *(long **)(this + 0x120);
                    /* try { // try from 005374b8 to 006374bb has its CatchHandler @ 005374c8 */
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x128);
                    /* catch() { ... } // from try @ 005374b8 with catch @ 005374c8 */
  if (local_a0 != (long *)0x0) {
                    /* try { // try from 005374cc to 006374d3 has its CatchHandler @ 005374dc */
                    /* try { // try from 005374d4 to 006374df has its CatchHandler @ 00537498 */
    local_a0[1] = local_a0[1] + 1;
  }
                    /* catch() { ... } // from try @ 005374cc with catch @ 005374dc */
                    /* try { // try from 005374e0 to 0063751b has its CatchHandler @ 005374e0
                       catch(type#1 @ 00000000) { ... } // from try @ 005374e0 with catch @ 005374e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00537538 with catch @ 005374e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00537570 with catch @ 005374e0
                        */
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* try { // try from 0053751c to 00637537 has its CatchHandler @ 00537564 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00537538 to 00637567 has its CatchHandler @ 005374e0 */
  FUN_00666bb8(&local_80,&DAT_0068fbeb,auStack_88);
  local_b0 = 0xff000000;
  uStack_ac = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_a8,&local_80,&uStack_ac,&local_b0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053751c with catch @ 00537564
                        */
  if (local_a0 != (long *)0x0) {
                    /* try { // try from 00537568 to 0063756f has its CatchHandler @ 00537578 */
                    /* try { // try from 00537570 to 0063757b has its CatchHandler @ 005374e0 */
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x138);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00537568 with catch @ 00537578
                        */
  *(long **)(this + 0x130) = local_a8;
  *(long **)(this + 0x138) = local_a0;
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 005375b8 with catch @ 00537594 */
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* try { // try from 005375b4 to 006375b7 has its CatchHandler @ 005375c8 */
                    /* try { // try from 005375b8 to 006375db has its CatchHandler @ 00537594 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
                    /* catch() { ... } // from try @ 005375b4 with catch @ 005375c8 */
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar18 = *(GUILabel **)(this + 0x130);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this_00);
  if (local_a8 != *(long **)(pGVar18 + 0xf0)) {
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar16 = *(long **)(pGVar18 + 0xf8);
    *(long **)(pGVar18 + 0xf0) = local_a8;
    *(long **)(pGVar18 + 0xf8) = local_a0;
    if ((plVar16 != (long *)0x0) &&
       (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar14 = plVar16[2];
      plVar16[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar18);
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar18 = *(GUILabel **)(this + 0x130);
  FUN_00666bb8(&local_a8,"Game is saved automatically.",&local_b8);
  plVar16 = local_a8;
  psVar19 = (size_t *)(local_a8 + -3);
                    /* catch() { ... } // from try @ 00537748 with catch @ 00537718 */
  if ((*psVar19 != *(size_t *)((long)*(void **)(pGVar18 + 0x100) + -0x18)) ||
     (iVar9 = memcmp(local_a8,*(void **)(pGVar18 + 0x100),*psVar19), iVar9 != 0)) {
    FUN_0066a6a8(pGVar18 + 0x100,&local_a8);
                    /* try { // try from 00537734 to 00637747 has its CatchHandler @ 0053776c */
    GUILabel::UpdateText(pGVar18);
    psVar19 = (size_t *)(local_a8 + -3);
    plVar16 = local_a8;
  }
                    /* try { // try from 00537748 to 0063776f has its CatchHandler @ 00537718 */
  if (psVar19 != (size_t *)puVar7) {
    plVar16 = plVar16 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(psVar19);
    }
  }
  pGVar18 = *(GUILabel **)(this + 0x130);
                    /* catch() { ... } // from try @ 00537734 with catch @ 0053776c */
  if ((((pGVar18[0x108] != (GUILabel)0xcc) || (pGVar18[0x109] != (GUILabel)0xcc)) ||
      (pGVar18[0x10a] != (GUILabel)0xcc)) || (pGVar18[0x10b] != (GUILabel)0xcc)) {
    plVar16 = *(long **)(pGVar18 + 0x118);
    *(undefined4 *)(pGVar18 + 0x108) = 0xcccccccc;
                    /* catch() { ... } // from try @ 005377c8 with catch @ 0053778c */
    *(undefined8 *)(pGVar18 + 0x110) = 0;
    *(undefined8 *)(pGVar18 + 0x118) = 0;
    if ((plVar16 != (long *)0x0) &&
       (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* try { // try from 005377ac to 006377af has its CatchHandler @ 005377bc */
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar14 = plVar16[2];
                    /* catch() { ... } // from try @ 005377ac with catch @ 005377bc */
      plVar16[2] = lVar14 + -1;
                    /* try { // try from 005377c0 to 006377c7 has its CatchHandler @ 005377d0 */
      if (lVar14 + -1 == 0) {
                    /* try { // try from 005377c8 to 006377d3 has its CatchHandler @ 0053778c */
                    /* catch() { ... } // from try @ 005377c0 with catch @ 005377d0 */
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
                    /* try { // try from 005377d4 to 0063780f has its CatchHandler @ 005377d4
                       catch(type#1 @ 00000000) { ... } // from try @ 005377d4 with catch @ 005377d4
                       catch(type#1 @ 00000000) { ... } // from try @ 0053782c with catch @ 005377d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00537864 with catch @ 005377d4
                        */
    GUILabel::UpdateText(pGVar18);
    pGVar18 = *(GUILabel **)(this + 0x130);
  }
  *(undefined4 *)(pGVar18 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar18);
  local_a8 = *(long **)(this + 0x130);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x138);
  if (local_a0 != (long *)0x0) {
                    /* try { // try from 00537810 to 0063782b has its CatchHandler @ 00537858 */
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
                    /* try { // try from 0053782c to 0063785b has its CatchHandler @ 005377d4 */
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00537810 with catch @ 00537858
                        */
    if (lVar14 + -1 == 0) {
                    /* try { // try from 0053785c to 00637863 has its CatchHandler @ 0053786c */
                    /* try { // try from 00537864 to 0063786f has its CatchHandler @ 005377d4 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053785c with catch @ 0053786c
                        */
  FUN_00666bb8(&local_80,"Achievements",auStack_88);
                    /* catch() { ... } // from try @ 005378ac with catch @ 00537888 */
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_80,true);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x148);
                    /* try { // try from 005378a8 to 006378ab has its CatchHandler @ 005378bc */
  *(long **)(this + 0x140) = local_a8;
  *(long **)(this + 0x148) = local_a0;
                    /* try { // try from 005378ac to 006378cf has its CatchHandler @ 00537888 */
                    /* catch() { ... } // from try @ 005378a8 with catch @ 005378bc */
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
                    /* try { // try from 00538ae0 to 00638ae3 has its CatchHandler @ 00538cf4 */
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00538ae4 to 00638bf7 has its CatchHandler @ 00538814 */
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar17 = *(GUIControl **)(this + 0x140);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar1;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  local_a8 = *(long **)(this + 0x140);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x148);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
                    /* catch() { ... } // from try @ 00537a3c with catch @ 00537a0c */
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* try { // try from 00537a28 to 00637a3b has its CatchHandler @ 00537a60 */
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
                    /* try { // try from 00537a3c to 00637a63 has its CatchHandler @ 00537a0c */
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  puVar2 = *(undefined8 **)(this + 0x168);
  if (puVar2 == *(undefined8 **)(this + 0x170)) {
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
                     *)(this + 0x160),puVar2,this + 0x140);
  }
  else {
                    /* catch() { ... } // from try @ 00537a28 with catch @ 00537a60 */
    *puVar2 = *(undefined8 *)(this + 0x140);
    lVar14 = *(long *)(this + 0x148);
    puVar2[1] = lVar14;
    if (lVar14 != 0) {
      *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
    }
    *(undefined8 **)(this + 0x168) = puVar2 + 2;
  }
  FUN_00666bb8(&local_80,"Leaderboards",auStack_88);
                    /* catch() { ... } // from try @ 00537af8 with catch @ 00537aac */
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_80,true);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x158);
  *(long **)(this + 0x150) = local_a8;
  *(long **)(this + 0x158) = local_a0;
                    /* try { // try from 00537adc to 00637adf has its CatchHandler @ 00537aec */
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 00537adc with catch @ 00537aec */
                    /* try { // try from 00537af0 to 00637af7 has its CatchHandler @ 00537b00 */
    (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* try { // try from 00537af8 to 00637b03 has its CatchHandler @ 00537aac */
    lVar14 = plVar16[2];
                    /* catch() { ... } // from try @ 00537af0 with catch @ 00537b00 */
    plVar16[2] = lVar14 + -1;
                    /* try { // try from 00537b04 to 00637b4b has its CatchHandler @ 00537b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00537b04 with catch @ 00537b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00537b68 with catch @ 00537b04
                       catch(type#1 @ 00000000) { ... } // from try @ 00537c24 with catch @ 00537b04
                        */
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
                    /* try { // try from 00537b4c to 00637b67 has its CatchHandler @ 00537c18 */
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00537b68 to 00637c1b has its CatchHandler @ 00537b04 */
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar17 = *(GUIControl **)(this + 0x150);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar1;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (local_a8 != (long *)0x0) {
    if ((((ulong)local_a8 & 1) == 0) &&
       (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
    }
    local_a8 = (long *)0x0;
  }
  plVar16 = (long *)OnlineController::SharedController();
  pGVar11 = (GameInterfaceBuilder *)(**(code **)(*plVar16 + 0x10))();
  if (((ulong)pGVar11 & 1) == 0) {
    local_a8 = *(long **)(this + 0x150);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00537b4c with catch @ 00537c18
                        */
    pcVar15 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 00537c1c to 00637c23 has its CatchHandler @ 00537c2c */
    local_a0 = *(long **)(this + 0x158);
                    /* try { // try from 00537c24 to 00637c2f has its CatchHandler @ 00537b04 */
    if (local_a0 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00537c1c with catch @ 00537c2c
                        */
      local_a0[1] = local_a0[1] + 1;
    }
    pGVar11 = (GameInterfaceBuilder *)(*pcVar15)(this,&local_a8);
    plVar16 = local_a0;
                    /* catch() { ... } // from try @ 00537c6c with catch @ 00537c48 */
    if ((local_a0 != (long *)0x0) &&
       (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* try { // try from 00537c68 to 00637c6b has its CatchHandler @ 00537c7c */
      pGVar11 = (GameInterfaceBuilder *)(**(code **)(*local_a0 + 0x10))(local_a0);
                    /* try { // try from 00537c6c to 00637c8f has its CatchHandler @ 00537c48 */
      lVar14 = plVar16[2];
      plVar16[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
                    /* catch() { ... } // from try @ 00537c68 with catch @ 00537c7c */
        pGVar11 = (GameInterfaceBuilder *)(**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    puVar2 = *(undefined8 **)(this + 0x168);
    if (puVar2 == *(undefined8 **)(this + 0x170)) {
      pGVar11 = (GameInterfaceBuilder *)
                std::
                vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
                ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
                                 *)(this + 0x160),puVar2,this + 0x150);
    }
    else {
      *puVar2 = *(undefined8 *)(this + 0x150);
      lVar14 = *(long *)(this + 0x158);
      puVar2[1] = lVar14;
      if (lVar14 != 0) {
        *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
      }
      *(undefined8 **)(this + 0x168) = puVar2 + 2;
    }
  }
  GameInterfaceBuilder::Slider(pGVar11,0.0,1.0);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1a0);
  *(long **)(this + 0x198) = local_a8;
  *(long **)(this + 0x1a0) = local_a0;
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  puVar6 = PTR_SliderValueChanged_007e5bf8;
  pGVar17 = *(GUIControl **)(this + 0x198);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)PTR_SliderValueChanged_007e5bf8;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x1000);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  puVar8 = PTR_SliderTouchUp_007e7a50;
  pGVar17 = *(GUIControl **)(this + 0x198);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)PTR_SliderTouchUp_007e7a50;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  local_a8 = *(long **)(this + 0x198);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x1a0);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  pGVar11 = (GameInterfaceBuilder *)(*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    pGVar11 = (GameInterfaceBuilder *)(**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      pGVar11 = (GameInterfaceBuilder *)(**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  GameInterfaceBuilder::Slider(pGVar11,0.0,1.0);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1b0);
  *(long **)(this + 0x1a8) = local_a8;
  *(long **)(this + 0x1b0) = local_a0;
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar17 = *(GUIControl **)(this + 0x1a8);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar6;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x1000);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  pGVar17 = *(GUIControl **)(this + 0x1a8);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar8;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  local_a8 = *(long **)(this + 0x1a8);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x1b0);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_button_music",auStack_88);
  TextureLibrary::TextureForName(psVar12,SUB81(&local_80,0));
  if (local_a8 != (long *)0x0) {
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1c0);
  *(long **)(this + 0x1c0) = local_a8;
  if ((plVar16 != (long *)0x0) &&
     (iVar9 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  if ((local_a8 != (long *)0x0) &&
     (iVar9 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_a8 + 8))();
  }
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,&DAT_00694d09,auStack_88);
  piVar13 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar12,SUB81(&local_80,0));
  if (local_a8 != (long *)0x0) {
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1c8);
  *(long **)(this + 0x1c8) = local_a8;
                    /* catch() { ... } // from try @ 005382a0 with catch @ 00538270 */
  if ((plVar16 != (long *)0x0) &&
     (iVar9 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
                    /* try { // try from 0053828c to 0063829f has its CatchHandler @ 005382c4 */
  if ((local_a8 != (long *)0x0) &&
     (iVar9 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar9, iVar9 == 0)) {
                    /* try { // try from 005382a0 to 006382c7 has its CatchHandler @ 00538270 */
    (**(code **)(*local_a8 + 8))();
  }
                    /* catch() { ... } // from try @ 0053828c with catch @ 005382c4 */
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  local_80 = (long *)0x0;
  local_b8 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_80,(intrusive_ptr *)&local_b8,piVar13);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 0x180);
  *(long **)(this + 0x178) = local_a8;
  *(long **)(this + 0x180) = local_a0;
                    /* catch() { ... } // from try @ 00538364 with catch @ 00538310 */
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00538348 to 0063834b has its CatchHandler @ 00538358 */
  plVar16 = local_a0;
                    /* catch() { ... } // from try @ 00538348 with catch @ 00538358 */
                    /* try { // try from 0053835c to 00638363 has its CatchHandler @ 0053836c */
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* try { // try from 00538364 to 0063836f has its CatchHandler @ 00538310 */
                    /* catch() { ... } // from try @ 0053835c with catch @ 0053836c */
    (**(code **)(*local_a0 + 0x10))(local_a0);
                    /* try { // try from 00538370 to 006383cb has its CatchHandler @ 00538370
                       catch() { ... } // from try @ 00538370 with catch @ 00538370
                       catch() { ... } // from try @ 005383d0 with catch @ 00538370
                       catch() { ... } // from try @ 00538424 with catch @ 00538370
                       catch() { ... } // from try @ 00538478 with catch @ 00538370
                       catch() { ... } // from try @ 005384e8 with catch @ 00538370
                       catch() { ... } // from try @ 00538548 with catch @ 00538370
                       catch() { ... } // from try @ 005385ac with catch @ 00538370 */
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar9 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if ((local_80 != (long *)0x0) &&
     (iVar9 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar9, iVar9 == 0)) {
                    /* try { // try from 005383cc to 006383cf has its CatchHandler @ 0053858c */
                    /* try { // try from 005383d0 to 0063841f has its CatchHandler @ 00538370 */
    (**(code **)(*local_80 + 8))();
  }
  pGVar17 = *(GUIControl **)(this + 0x178);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar1;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
                    /* try { // try from 00538420 to 00638423 has its CatchHandler @ 00538588 */
                    /* try { // try from 00538424 to 00638473 has its CatchHandler @ 00538370 */
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  local_a0 = *(long **)(*(long *)(this + 0x1c0) + 0x54);
  local_a8 = (long *)0x0;
                    /* try { // try from 00538474 to 00638477 has its CatchHandler @ 00538584 */
                    /* try { // try from 00538478 to 006384e3 has its CatchHandler @ 00538370 */
  GUIView::SetFrame(*(GUIView **)(this + 0x178),(Rectangle *)&local_a8);
  local_a8 = *(long **)(this + 0x178);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x180);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
                    /* try { // try from 005384e4 to 006384e7 has its CatchHandler @ 00538580 */
    if (lVar14 + -1 == 0) {
                    /* try { // try from 005384e8 to 0063852b has its CatchHandler @ 00538370 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_button_sound",auStack_88);
  TextureLibrary::TextureForName(psVar12,SUB81(&local_80,0));
                    /* try { // try from 0053852c to 00638547 has its CatchHandler @ 005385a0 */
  if (local_a8 != (long *)0x0) {
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1d0);
  *(long **)(this + 0x1d0) = local_a8;
                    /* try { // try from 00538548 to 006385a3 has its CatchHandler @ 00538370 */
  if ((plVar16 != (long *)0x0) &&
     (iVar9 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar9, iVar9 == 0)) {
                    /* catch() { ... } // from try @ 005384e4 with catch @ 00538580 */
                    /* catch() { ... } // from try @ 00538474 with catch @ 00538584 */
                    /* catch() { ... } // from try @ 00538420 with catch @ 00538588 */
    (**(code **)(*plVar16 + 8))(plVar16);
                    /* catch() { ... } // from try @ 005383cc with catch @ 0053858c */
  }
  if ((local_a8 != (long *)0x0) &&
     (iVar9 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_a8 + 8))();
  }
                    /* catch() { ... } // from try @ 0053852c with catch @ 005385a0 */
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00538a08 to 00638a0b has its CatchHandler @ 00538cf0 */
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
                    /* try { // try from 005385a4 to 006385ab has its CatchHandler @ 005385b4 */
  psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 005385ac to 006385b7 has its CatchHandler @ 00538370 */
                    /* catch() { ... } // from try @ 005385a4 with catch @ 005385b4 */
                    /* catch() { ... } // from try @ 0053863c with catch @ 005385b8
                       catch() { ... } // from try @ 00538658 with catch @ 005385b8 */
  FUN_00666bb8(&local_80,"ui_button_sound_off",auStack_88);
  piVar13 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar12,SUB81(&local_80,0));
  if (local_a8 != (long *)0x0) {
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1d8);
  *(long **)(this + 0x1d8) = local_a8;
                    /* try { // try from 005385fc to 0063863b has its CatchHandler @ 0053864c */
  if ((plVar16 != (long *)0x0) &&
     (iVar9 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar16 + 8))(plVar16);
                    /* try { // try from 0053863c to 0063864f has its CatchHandler @ 005385b8 */
  }
  if ((local_a8 != (long *)0x0) &&
     (iVar9 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_a8 + 8))();
  }
                    /* catch() { ... } // from try @ 005385fc with catch @ 0053864c */
  if (local_80 + -3 != (long *)puVar7) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = (int)*plVar16;
      *(int *)plVar16 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_80 + -3);
    }
  }
                    /* try { // try from 00538650 to 00638657 has its CatchHandler @ 00538660 */
  local_80 = (long *)0x0;
  local_b8 = (long *)0x0;
                    /* try { // try from 00538658 to 00638663 has its CatchHandler @ 005385b8 */
                    /* catch() { ... } // from try @ 00538650 with catch @ 00538660 */
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_80,(intrusive_ptr *)&local_b8,piVar13);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  plVar16 = *(long **)(this + 400);
  *(long **)(this + 0x188) = local_a8;
  *(long **)(this + 400) = local_a0;
  if ((plVar16 != (long *)0x0) && (lVar14 = plVar16[1], plVar16[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00538700 with catch @ 005386ec */
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
                    /* try { // try from 005386fc to 006386ff has its CatchHandler @ 00538710 */
    if (lVar14 + -1 == 0) {
                    /* try { // try from 00538700 to 00638723 has its CatchHandler @ 005386ec */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* catch() { ... } // from try @ 005386fc with catch @ 00538710 */
  if ((local_b8 != (long *)0x0) &&
     (iVar9 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if ((local_80 != (long *)0x0) &&
     (iVar9 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  pGVar17 = *(GUIControl **)(this + 0x188);
  local_a8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar1;
  local_70 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar10 & 1) == 0) {
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_a8 = (long *)PTR_stored_vtable_007e5d38;
  }
  else {
    local_a8 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar17,this,&local_a8,0x40);
  if (((local_a8 != (long *)0x0) && (((ulong)local_a8 & 1) == 0)) &&
     (*(code **)((ulong)local_a8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a8 & 0xfffffffffffffffe))(&local_a0,&local_a0,2);
  }
  local_a0 = *(long **)(*(long *)(this + 0x1d0) + 0x54);
  local_a8 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 0x188),(Rectangle *)&local_a8);
  local_a8 = *(long **)(this + 0x188);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 400);
                    /* try { // try from 00538814 to 006388cf has its CatchHandler @ 00538814
                       catch() { ... } // from try @ 00538814 with catch @ 00538814
                       catch() { ... } // from try @ 005388d4 with catch @ 00538814
                       catch() { ... } // from try @ 00538a0c with catch @ 00538814
                       catch() { ... } // from try @ 00538ae4 with catch @ 00538814
                       catch() { ... } // from try @ 00538bfc with catch @ 00538814 */
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar15)(this,&local_a8);
  plVar16 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar14 = local_a0[1], local_a0[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar14 = plVar16[2];
    plVar16[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


