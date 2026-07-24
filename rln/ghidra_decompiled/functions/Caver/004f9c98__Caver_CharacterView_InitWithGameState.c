/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f9c98
 * Function: Caver::CharacterView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(CharacterView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharacterView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::CharacterView::InitWithGameState(CharacterView *this,shared_ptr *param_1)

{
  CharacterView *pCVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  string *psVar8;
  ulong uVar9;
  ExperienceBar *this_00;
  AttributePointsView *pAVar10;
  undefined8 *puVar11;
  intrusive_ptr *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  shared_ptr *psVar16;
  int *piVar17;
  int iVar18;
  long *plVar19;
  GUIControl *pGVar20;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  CharacterView *local_a8;
  undefined1 auStack_98 [8];
  long local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long local_78;
  long *local_70;
  undefined8 uStack_68;
  CharacterView *local_60;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar13 = *(long *)(param_1 + 8);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar19 = *(long **)(this + 0x110);
  *(undefined8 *)(this + 0x108) = uVar2;
  *(long *)(this + 0x110) = lVar13;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_button_arrow",auStack_80);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_78,0));
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,"ui_button_arrow_pressed",auStack_98);
  piVar12 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar8,SUB81(&local_90,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_70,(intrusive_ptr *)&local_88,piVar12);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  plVar19 = *(long **)(this + 0x120);
  *(undefined **)(this + 0x118) = local_c0;
  *(long **)(this + 0x120) = plStack_b8;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar13 = plStack_b8[1], plStack_b8[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if ((local_88 != (long *)0x0) &&
     (iVar18 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  puVar7 = PTR_DAT_007e5de8;
  if ((undefined *)(local_90 + -0x18) != PTR_DAT_007e5de8) {
    piVar17 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((local_70 != (long *)0x0) &&
     (iVar18 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if ((undefined *)(local_78 + -0x18) != puVar7) {
    piVar17 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  puVar3 = PTR_ButtonPressed_007e6570;
  pGVar20 = *(GUIControl **)(this + 0x118);
  local_c0 = (undefined *)0x0;
  uStack_68 = 0;
  local_70 = (long *)PTR_ButtonPressed_007e6570;
  local_60 = this;
  uVar9 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar9 & 1) == 0) {
    local_a8 = local_60;
    uStack_b0 = uStack_68;
    plStack_b8 = local_70;
    local_c0 = PTR_stored_vtable_007e4bf0;
  }
  else {
    local_c0 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar20,this,&local_c0,0x40);
  if (((local_c0 != (undefined *)0x0) && (((ulong)local_c0 & 1) == 0)) &&
     (*(code **)((ulong)local_c0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_c0 & 0xfffffffffffffffe))(&plStack_b8,&plStack_b8,2);
  }
  local_c0 = *(undefined **)(this + 0x118);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  plStack_b8 = *(long **)(this + 0x120);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  (*pcVar14)(this,&local_c0);
  plVar19 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar13 = plStack_b8[1], plStack_b8[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x118) + 0xe4) = 1;
  FUN_00666bb8(&local_70,"Reset",&local_88);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_70,true);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  plVar19 = *(long **)(this + 0x130);
  *(undefined **)(this + 0x128) = local_c0;
  *(long **)(this + 0x130) = plStack_b8;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar13 = plStack_b8[1], plStack_b8[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if (local_70 + -3 != (long *)puVar7) {
    plVar19 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar19;
      *(int *)plVar19 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  pGVar20 = *(GUIControl **)(this + 0x128);
  local_c0 = (undefined *)0x0;
  uStack_68 = 0;
  local_70 = (long *)puVar3;
  local_60 = this;
  uVar9 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar9 & 1) == 0) {
    local_a8 = local_60;
    uStack_b0 = uStack_68;
    plStack_b8 = local_70;
    local_c0 = PTR_stored_vtable_007e4bf0;
  }
  else {
    local_c0 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar20,this,&local_c0,0x40);
  if (local_c0 != (undefined *)0x0) {
    if ((((ulong)local_c0 & 1) == 0) &&
       (*(code **)((ulong)local_c0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_c0 & 0xfffffffffffffffe))(&plStack_b8,&plStack_b8,2);
    }
    local_c0 = (undefined *)0x0;
  }
  *(undefined1 *)(*(long *)(this + 0x128) + 0xe4) = 1;
  FUN_00666bb8(&local_70,&DAT_0068fbeb,&local_88);
  local_c8 = 0xff000000;
  uStack_c4 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_c0,&local_70,&uStack_c4,&local_c8);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  plVar19 = *(long **)(this + 0x1b0);
  *(undefined **)(this + 0x1a8) = local_c0;
  *(long **)(this + 0x1b0) = plStack_b8;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar13 = plStack_b8[1], plStack_b8[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if (local_70 + -3 != (long *)puVar7) {
    plVar19 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar19;
      *(int *)plVar19 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  local_c0 = *(undefined **)(this + 0x1a8);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  plStack_b8 = *(long **)(this + 0x1b0);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  (*pcVar14)(this,&local_c0);
  plVar19 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar13 = plStack_b8[1], plStack_b8[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  lVar13 = *(long *)param_1;
  this_00 = operator_new(0x410);
  ExperienceBar::ExperienceBar(this_00);
  boost::shared_ptr<Caver::ExperienceBar>::shared_ptr<Caver::ExperienceBar>
            ((shared_ptr<Caver::ExperienceBar> *)&local_c0,this_00);
  puVar3 = *(undefined **)(this + 0x138);
  plVar19 = *(long **)(this + 0x140);
  *(undefined **)(this + 0x138) = local_c0;
  *(long **)(this + 0x140) = plStack_b8;
  local_c0 = puVar3;
  plStack_b8 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  ExperienceBar::InitWithGameState(*(ExperienceBar **)(this + 0x138),param_1);
  local_c0 = *(undefined **)(this + 0x138);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  plStack_b8 = *(long **)(this + 0x140);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  (*pcVar14)(this,&local_c0);
  plVar19 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar15 = plStack_b8[1], plStack_b8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  CreateAttributesHeaderView(this);
  pAVar10 = operator_new(0x548);
  AttributePointsView::AttributePointsView(pAVar10);
  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>
            ((shared_ptr<Caver::AttributePointsView> *)&local_c0,pAVar10);
  puVar3 = *(undefined **)(this + 0x158);
  plVar19 = *(long **)(this + 0x160);
  *(undefined **)(this + 0x158) = local_c0;
  *(long **)(this + 0x160) = plStack_b8;
  local_c0 = puVar3;
  plStack_b8 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pAVar10 = *(AttributePointsView **)(this + 0x158);
  pCVar1 = this + 0xf8;
  *(CharacterView **)(pAVar10 + 0xf0) = pCVar1;
  FUN_00666bb8(&local_c0,"health",&local_88);
  FUN_00666bb8(&local_70,"Health",&local_90);
  AttributePointsView::Init(pAVar10,(string *)&local_c0,(string *)&local_70);
  if (local_70 + -3 != (long *)puVar7) {
    plVar19 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar19;
      *(int *)plVar19 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  if (local_c0 + -0x18 != puVar7) {
    piVar17 = (int *)(local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_c0 + -0x18);
    }
  }
  AttributePointsView::SetInitialPoints
            (*(AttributePointsView **)(this + 0x158),*(int *)(lVar13 + 0xbc));
  pAVar10 = operator_new(0x548);
  AttributePointsView::AttributePointsView(pAVar10);
  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>
            ((shared_ptr<Caver::AttributePointsView> *)&local_c0,pAVar10);
  puVar3 = *(undefined **)(this + 0x168);
  plVar19 = *(long **)(this + 0x170);
  *(undefined **)(this + 0x168) = local_c0;
  *(long **)(this + 0x170) = plStack_b8;
  local_c0 = puVar3;
  plStack_b8 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pAVar10 = *(AttributePointsView **)(this + 0x168);
  *(CharacterView **)(pAVar10 + 0xf0) = pCVar1;
  FUN_00666bb8(&local_c0,"attack",&local_88);
  FUN_00666bb8(&local_70,"Attack",&local_90);
  AttributePointsView::Init(pAVar10,(string *)&local_c0,(string *)&local_70);
  if (local_70 + -3 != (long *)puVar7) {
    plVar19 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar19;
      *(int *)plVar19 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  if (local_c0 + -0x18 != puVar7) {
    piVar17 = (int *)(local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_c0 + -0x18);
    }
  }
  AttributePointsView::SetInitialPoints
            (*(AttributePointsView **)(this + 0x168),*(int *)(lVar13 + 0xc0));
  pAVar10 = operator_new(0x548);
  AttributePointsView::AttributePointsView(pAVar10);
  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>
            ((shared_ptr<Caver::AttributePointsView> *)&local_c0,pAVar10);
  puVar3 = *(undefined **)(this + 0x178);
  plVar19 = *(long **)(this + 0x180);
  *(undefined **)(this + 0x178) = local_c0;
  *(long **)(this + 0x180) = plStack_b8;
  local_c0 = puVar3;
  plStack_b8 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pAVar10 = *(AttributePointsView **)(this + 0x178);
  *(CharacterView **)(pAVar10 + 0xf0) = pCVar1;
  FUN_00666bb8(&local_c0,"magic",&local_88);
  FUN_00666bb8(&local_70,"Magic",&local_90);
  AttributePointsView::Init(pAVar10,(string *)&local_c0,(string *)&local_70);
  if (local_70 + -3 != (long *)puVar7) {
    plVar19 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar19;
      *(int *)plVar19 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  if (local_c0 + -0x18 != puVar7) {
    piVar17 = (int *)(local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_c0 + -0x18);
    }
  }
  AttributePointsView::SetInitialPoints
            (*(AttributePointsView **)(this + 0x178),*(int *)(lVar13 + 0xc4));
  *(undefined4 *)(this + 0x188) = 3;
  puVar11 = operator_new__(0x38);
  *puVar11 = 3;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[2] = 0;
  puVar11[1] = 0;
  psVar16 = *(shared_ptr **)(this + 400);
  *(undefined8 **)(this + 400) = puVar11 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(psVar16);
  uVar2 = *(undefined8 *)(this + 0x158);
  lVar13 = *(long *)(this + 0x160);
  puVar11 = *(undefined8 **)(this + 400);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar19 = (long *)puVar11[1];
  *puVar11 = uVar2;
  puVar11[1] = lVar13;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  uVar2 = *(undefined8 *)(this + 0x168);
  lVar13 = *(long *)(this + 0x170);
  lVar15 = *(long *)(this + 400);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar19 = *(long **)(lVar15 + 0x18);
  *(undefined8 *)(lVar15 + 0x10) = uVar2;
  *(long *)(lVar15 + 0x18) = lVar13;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  uVar2 = *(undefined8 *)(this + 0x178);
  lVar13 = *(long *)(this + 0x180);
  lVar15 = *(long *)(this + 400);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar19 = *(long **)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x20) = uVar2;
  *(long *)(lVar15 + 0x28) = lVar13;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = _UNK_00693928;
  puVar7 = _DAT_00693920;
  if (0 < *(int *)(this + 0x188)) {
    lVar15 = 0;
    lVar13 = 0;
    do {
      plStack_b8 = plVar19;
      local_c0 = puVar7;
      GUIView::SetFrame(*(GUIView **)(*(long *)(this + 400) + lVar15),(Rectangle *)&local_c0);
      (**(code **)(*(long *)this + 0x60))(this,*(long *)(this + 400) + lVar15);
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 0x10;
    } while (lVar13 < *(int *)(this + 0x188));
  }
  CreateIselonView(this);
  UpdateAvailablePoints(this);
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


