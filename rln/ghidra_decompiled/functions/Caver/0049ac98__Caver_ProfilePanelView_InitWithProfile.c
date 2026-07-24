/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049ac98
 * Function: Caver::ProfilePanelView::InitWithProfile
 * Signature: undefined __thiscall InitWithProfile(ProfilePanelView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&) */

void __thiscall Caver::ProfilePanelView::InitWithProfile(ProfilePanelView *this,shared_ptr *param_1)

{
  intrusive_ptr *piVar1;
  HeroEquipmentManager *this_00;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  SceneView *this_01;
  Item *pIVar9;
  string *psVar10;
  uint uVar11;
  long lVar12;
  code *pcVar13;
  Scene *pSVar14;
  int *piVar15;
  long *plVar16;
  string *psVar17;
  Item *pIVar18;
  GUILabel *pGVar19;
  Scene *pSVar20;
  float fVar21;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  Item *local_c8;
  long *local_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long *local_90;
  undefined1 auStack_88 [8];
  long local_80;
  undefined1 auStack_78 [8];
  string *local_70;
  long *local_68;
  char acStack_5c [4];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0049acbc to 0059acc7 has its CatchHandler @ 0049afa0 */
  uVar2 = *(undefined8 *)param_1;
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 != 0) {
                    /* try { // try from 0049accc to 0059acd7 has its CatchHandler @ 0049af90 */
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
  }
  plVar16 = *(long **)(this + 0x170);
  *(undefined8 *)(this + 0x168) = uVar2;
  *(long *)(this + 0x170) = lVar12;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 0049ad24 to 0059ad8b has its CatchHandler @ 0049afa4 */
  *(undefined1 *)(*(long *)(this + 0x1e8) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x1a8) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x1c8) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x1d8) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x198) + 0xe4) = 1;
  if (*(char *)(*(long *)(this + 0x168) + 0x68) == '\0') {
    local_98 = 0xe68c8c8c;
    GUIFrameView::SetFrameColor((GUIFrameView *)this,(Color *)&local_98);
                    /* try { // try from 0049adac to 0059add3 has its CatchHandler @ 0049af90 */
    pGVar19 = *(GUILabel **)(this + 0x1e8);
    FUN_00666bb8(&local_70,"New Game",&local_a0);
    psVar10 = local_70;
    psVar17 = local_70 + -0x18;
    if ((*(size_t *)psVar17 != *(size_t *)((long)*(void **)(pGVar19 + 0x100) + -0x18)) ||
       (iVar7 = memcmp(local_70,*(void **)(pGVar19 + 0x100),*(size_t *)psVar17), iVar7 != 0)) {
                    /* try { // try from 0049adf4 to 0059ae1b has its CatchHandler @ 0049afa0 */
      FUN_0066a6a8(pGVar19 + 0x100,&local_70);
      GUILabel::UpdateText(pGVar19);
      psVar17 = local_70 + -0x18;
      psVar10 = local_70;
    }
    if (psVar17 != (string *)PTR_DAT_007e5de8) {
      psVar10 = psVar10 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *(int *)psVar10;
        *(int *)psVar10 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *(int *)psVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
          if (bVar4) {
            *(int *)psVar10 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(psVar17);
      }
    }
                    /* try { // try from 0049ae1c to 0059ae23 has its CatchHandler @ 0049b03c */
    *(undefined1 *)(*(long *)(this + 0x1e8) + 0xe4) = 0;
    *(undefined1 *)(*(long *)(this + 0x178) + 0xe4) = 1;
    if (*(long *)(this + 0x1f8) != 0) {
      *(undefined1 *)(*(long *)(this + 0x1f8) + 0xe4) = 1;
    }
    goto LAB_0049bd80;
  }
  local_70 = (string *)CONCAT44(local_70._4_4_,0xe5e5e5e5);
  GUIFrameView::SetFrameColor((GUIFrameView *)this,(Color *)&local_70);
  lVar12 = *(long *)(this + 0x168);
  fVar21 = *(float *)(lVar12 + 0x3c);
  if (fVar21 <= DAT_006913f0) {
    if (*(GameState **)(lVar12 + 0x80) != (GameState *)0x0) {
      fVar21 = (float)GameState::PercentCompleted(*(GameState **)(lVar12 + 0x80));
                    /* try { // try from 0049ae48 to 0059ae57 has its CatchHandler @ 0049af54 */
      *(float *)(lVar12 + 0x3c) = fVar21;
      lVar12 = *(long *)(this + 0x168);
    }
    uVar11 = (uint)fVar21;
    if (0x62 < (int)uVar11) {
      uVar11 = 99;
    }
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 100;
  }
  pGVar19 = *(GUILabel **)(this + 0x1a8);
  FUN_0066a528(&local_80,lVar12 + 0x20);
                    /* try { // try from 0049ae7c to 0059ae8b has its CatchHandler @ 0049af50 */
  if (*(long *)(local_80 + -0x18) == 0) {
                    /* try { // try from 0049aeac to 0059aed3 has its CatchHandler @ 0049af64 */
    FUN_00666bb8(&local_70,"Player",auStack_88);
  }
  else {
    FUN_0066a528(&local_70,*(long *)(this + 0x168) + 0x20);
  }
  psVar10 = local_70;
  pSVar20 = (Scene *)(local_70 + -0x18);
                    /* try { // try from 0049aed4 to 0059afc7 has its CatchHandler @ 0049aa50 */
  if ((*(size_t *)pSVar20 != *(size_t *)((long)*(void **)(pGVar19 + 0x100) + -0x18)) ||
     (iVar7 = memcmp(local_70,*(void **)(pGVar19 + 0x100),*(size_t *)pSVar20), iVar7 != 0)) {
    FUN_0066a6a8(pGVar19 + 0x100,&local_70);
    GUILabel::UpdateText(pGVar19);
    pSVar20 = (Scene *)(local_70 + -0x18);
    psVar10 = local_70;
  }
  puVar6 = PTR_DAT_007e5de8;
  if (pSVar20 != (Scene *)PTR_DAT_007e5de8) {
    pSVar14 = (Scene *)(psVar10 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *(int *)pSVar14;
      *(int *)pSVar14 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *(int *)pSVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pSVar14,0x10);
        if (bVar4) {
          *(int *)pSVar14 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(pSVar20);
    }
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar15 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  lVar12 = *(long *)(this + 0x168);
  if (*(GameState **)(lVar12 + 0x80) == (GameState *)0x0) {
    fVar21 = *(float *)(lVar12 + 0x3c);
  }
  else {
    fVar21 = (float)GameState::PercentCompleted(*(GameState **)(lVar12 + 0x80));
    *(float *)(lVar12 + 0x3c) = fVar21;
  }
                    /* catch() { ... } // from try @ 0049ae7c with catch @ 0049af50 */
                    /* catch() { ... } // from try @ 0049ae48 with catch @ 0049af54 */
                    /* catch() { ... } // from try @ 0049ab6c with catch @ 0049af58 */
  GameInterfaceBuilder::TextGradient(DAT_00687988,fVar21 / _DAT_0068782c,DAT_00687828,1.0);
                    /* catch() { ... } // from try @ 0049ab2c with catch @ 0049af5c */
  pGVar19 = *(GUILabel **)(this + 0x1b8);
                    /* catch() { ... } // from try @ 0049ab34 with catch @ 0049af60 */
                    /* catch() { ... } // from try @ 0049aaec with catch @ 0049af64
                       catch() { ... } // from try @ 0049aeac with catch @ 0049af64 */
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
                    /* catch() { ... } // from try @ 0049abc4 with catch @ 0049af74 */
  plVar16 = *(long **)(pGVar19 + 0x118);
                    /* catch() { ... } // from try @ 0049ac70 with catch @ 0049af78 */
  *(ulong *)(pGVar19 + 0x110) = CONCAT44(uStack_94,local_98);
  *(long **)(pGVar19 + 0x118) = local_90;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0049accc with catch @ 0049af90
                       catch() { ... } // from try @ 0049adac with catch @ 0049af90 */
    (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* catch() { ... } // from try @ 0049acbc with catch @ 0049afa0
                       catch() { ... } // from try @ 0049adf4 with catch @ 0049afa0 */
    lVar12 = plVar16[2];
                    /* catch() { ... } // from try @ 0049ad24 with catch @ 0049afa4 */
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  GUILabel::UpdateText(pGVar19);
                    /* try { // try from 0049afc8 to 0059b0e7 has its CatchHandler @ 0049b0f0 */
  pGVar19 = *(GUILabel **)(this + 0x1b8);
  local_a8 = puVar6 + 0x18;
  pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                     (uVar11,acStack_5c);
  FUN_00669e1c(&local_a8,0,*(undefined8 *)puVar6,pcVar8,(long)acStack_5c - (long)pcVar8);
  FUN_0035a030(&local_a0,&LAB_00698488,&local_a8);
  FUN_0066a528(&local_c8,&local_a0);
  FUN_006677d4(&local_c8,&DAT_00691464,2);
  pIVar9 = local_c8;
                    /* catch() { ... } // from try @ 0049ac64 with catch @ 0049b03c
                       catch() { ... } // from try @ 0049ae1c with catch @ 0049b03c */
  pIVar18 = local_c8 + -0x18;
                    /* catch() { ... } // from try @ 0049ac8c with catch @ 0049b04c */
  if ((*(size_t *)pIVar18 != *(size_t *)((long)*(void **)(pGVar19 + 0x100) + -0x18)) ||
     (iVar7 = memcmp(local_c8,*(void **)(pGVar19 + 0x100),*(size_t *)pIVar18), iVar7 != 0)) {
    FUN_0066a6a8(pGVar19 + 0x100,&local_c8);
    GUILabel::UpdateText(pGVar19);
    pIVar18 = local_c8 + -0x18;
    pIVar9 = local_c8;
  }
  if (pIVar18 != (Item *)puVar6) {
                    /* catch() { ... } // from try @ 0049b738 with catch @ 0049b708 */
    pIVar9 = pIVar9 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *(int *)pIVar9;
      *(int *)pIVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *(int *)pIVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pIVar9,0x10);
        if (bVar4) {
          *(int *)pIVar9 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(pIVar18);
    }
  }
  if ((undefined *)(local_a0 + -0x18) != puVar6) {
    piVar15 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
                    /* try { // try from 0049b738 to 0059b75f has its CatchHandler @ 0049b708 */
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if (local_a8 + -0x18 != puVar6) {
    piVar15 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0049b724 with catch @ 0049b75c */
        iVar7 = *piVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b8b4 with catch @ 0049b760
                       catch(type#1 @ 00000000) { ... } // from try @ 0049bb30 with catch @ 0049b760
                        */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_a8 + -0x18);
    }
  }
  pGVar19 = *(GUILabel **)(this + 0x1d8);
  PlayerProfile::currentLevelTitle();
  psVar10 = local_70;
  pSVar20 = (Scene *)(local_70 + -0x18);
  if ((*(size_t *)pSVar20 != *(size_t *)((long)*(void **)(pGVar19 + 0x100) + -0x18)) ||
     (iVar7 = memcmp(local_70,*(void **)(pGVar19 + 0x100),*(size_t *)pSVar20), iVar7 != 0)) {
    FUN_0066a6a8(pGVar19 + 0x100,&local_70);
                    /* try { // try from 0049b0e8 to 0059b0f3 has its CatchHandler @ 0049aa50 */
    GUILabel::UpdateText(pGVar19);
                    /* catch() { ... } // from try @ 0049afc8 with catch @ 0049b0f0 */
                    /* catch() { ... } // from try @ 0049b180 with catch @ 0049b0f4 */
    pSVar20 = (Scene *)(local_70 + -0x18);
    psVar10 = local_70;
  }
  if (pSVar20 != (Scene *)puVar6) {
    pSVar14 = (Scene *)(psVar10 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *(int *)pSVar14;
      *(int *)pSVar14 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *(int *)pSVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pSVar14,0x10);
        if (bVar4) {
          *(int *)pSVar14 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(pSVar20);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x1a8) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(this + 0x1c8) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(this + 0x1d8) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(this + 0x178) + 0xe4) = 0;
  *(undefined1 *)(*(long *)(this + 0x198) + 0xe4) = 0;
  lVar12 = *(long *)(this + 0x1f8);
  if (lVar12 == 0) {
    this_01 = operator_new(0x1a8);
    SceneView::SceneView(this_01);
    boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>
              ((shared_ptr<Caver::SceneView> *)&local_70,this_01);
    psVar10 = *(string **)(this + 0x1f8);
    plVar16 = *(long **)(this + 0x200);
                    /* try { // try from 0049b158 to 0059b17f has its CatchHandler @ 0049b19c */
    *(string **)(this + 0x1f8) = local_70;
    *(long **)(this + 0x200) = local_68;
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 0049b180 to 0059b1af has its CatchHandler @ 0049b0f4 */
      local_70 = psVar10;
      local_68 = plVar16;
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 0049b158 with catch @ 0049b19c */
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    local_70 = *(string **)(this + 0x1f8);
    *(Scene *)(local_70 + 0x1a0) = (Scene)0x1;
    *(Scene *)(local_70 + 0xe5) = (Scene)0x0;
    pcVar13 = *(code **)(*(long *)this + 0x60);
    local_68 = *(long **)(this + 0x200);
    if (local_68 != (long *)0x0) {
      local_68[1] = local_68[1] + 1;
    }
    (*pcVar13)(this,&local_70);
    plVar16 = local_68;
    if ((local_68 != (long *)0x0) &&
       (lVar12 = local_68[1], local_68[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    lVar12 = *(long *)(this + 0x1f8);
  }
  *(undefined1 *)(lVar12 + 0xe4) = 0;
  pSVar20 = operator_new(0x408);
  Scene::Scene(pSVar20);
  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>
            ((shared_ptr<Caver::Scene> *)&local_70,pSVar20);
  psVar10 = local_70;
  FUN_00666bb8(&local_a0,"hero",auStack_b0);
  FUN_00666bb8(&local_a8,"scene",auStack_b8);
  PathForResourceOfType((string *)&local_a0,(string *)&local_a8);
  Scene::LoadFromFile((Scene *)psVar10,(string *)&local_c8);
  if (local_c8 + -0x18 != (Item *)puVar6) {
    pIVar9 = local_c8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *(int *)pIVar9;
      *(int *)pIVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *(int *)pIVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pIVar9,0x10);
        if (bVar4) {
          *(int *)pIVar9 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_c8 + -0x18);
    }
  }
  if (local_a8 + -0x18 != puVar6) {
    piVar15 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_a8 + -0x18);
    }
  }
  if ((undefined *)(local_a0 + -0x18) != puVar6) {
    piVar15 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  SceneView::InitWithScene(*(SceneView **)(this + 0x1f8),(shared_ptr *)&local_70);
  Scene::FinishLoad((Scene *)local_70);
  psVar10 = local_70;
  FUN_00666bb8(&local_a0,"hero",auStack_78);
  Scene::ObjectWithIdentifier(psVar10);
  piVar1 = (intrusive_ptr *)(this + 0x250);
  if (local_c8 != (Item *)0x0) {
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
  }
  plVar16 = *(long **)piVar1;
  *(Item **)piVar1 = local_c8;
  if ((plVar16 != (long *)0x0) &&
     (iVar7 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  if ((local_c8 != (Item *)0x0) &&
     (iVar7 = *(int *)(local_c8 + 8), *(int *)(local_c8 + 8) = iVar7 + -1, iVar7 + -1 == 0)) {
    (**(code **)(*(long *)local_c8 + 8))();
  }
  if ((undefined *)(local_a0 + -0x18) != puVar6) {
    piVar15 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  this_00 = (HeroEquipmentManager *)(this + 0x208);
  local_c8 = (Item *)0x0;
  local_c0 = (long *)0x0;
  HeroEquipmentManager::Init(this_00,(shared_ptr *)&local_c8,piVar1);
  plVar16 = local_c0;
  if ((local_c0 != (long *)0x0) &&
     (lVar12 = local_c0[1], local_c0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_c0 + 0x10))(local_c0);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  PlayerProfile::equippedArmorName();
  plVar16 = (long *)(local_d0 + -0x18);
  lVar12 = *plVar16;
  if (plVar16 != (long *)puVar6) {
    piVar15 = (int *)(local_d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(plVar16);
    }
  }
  if (lVar12 != 0) {
    pIVar9 = operator_new(0x38);
    Item::Item(pIVar9);
    local_c8 = pIVar9;
    boost::detail::shared_count::shared_count<Caver::Item>((shared_count *)&local_c0,pIVar9);
    boost::detail::sp_enable_shared_from_this(&local_c8,pIVar9,pIVar9);
    pIVar9 = local_c8;
    PlayerProfile::equippedArmorName();
    FUN_0066a6a8(pIVar9 + 8,&local_a0);
    if ((undefined *)(local_a0 + -0x18) != puVar6) {
      piVar15 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar15;
        *piVar15 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
                    /* try { // try from 0049bde4 to 0059be97 has its CatchHandler @ 0049bc24 */
        operator_delete((undefined *)(local_a0 + -0x18));
      }
    }
    psVar10 = (string *)
              SceneObject::ComponentWithInterface
                        (*(SceneObject **)piVar1,(long)PTR_Interface_007e7860);
    HeroEquipmentManager::ModelNameForArmor((shared_ptr *)this_00);
    ModelComponent::setModelName(psVar10);
    plVar16 = local_c0;
    if ((undefined *)(local_a0 + -0x18) != puVar6) {
                    /* try { // try from 0049b8b4 to 0059bb07 has its CatchHandler @ 0049b760 */
      piVar15 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar15;
        *piVar15 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049bdbc with catch @ 0049be00
                        */
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a0 + -0x18));
        plVar16 = local_c0;
      }
    }
    local_c0 = plVar16;
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  PlayerProfile::equippedWeaponName();
  plVar16 = (long *)(local_d8 + -0x18);
  lVar12 = *plVar16;
  if (plVar16 != (long *)puVar6) {
    piVar15 = (int *)(local_d8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(plVar16);
    }
  }
  if (lVar12 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b5b4 with catch @ 0049b528
                       catch(type#1 @ 00000000) { ... } // from try @ 0049b60c with catch @ 0049b528
                        */
    pIVar9 = operator_new(0x38);
    Item::Item(pIVar9);
    local_c8 = pIVar9;
    boost::detail::shared_count::shared_count<Caver::Item>((shared_count *)&local_c0,pIVar9);
    boost::detail::sp_enable_shared_from_this(&local_c8,pIVar9,pIVar9);
    pIVar9 = local_c8;
    PlayerProfile::equippedWeaponName();
    FUN_0066a6a8(pIVar9 + 8,&local_a0);
                    /* try { // try from 0049b57c to 0059b57f has its CatchHandler @ 0049b5cc */
    if ((undefined *)(local_a0 + -0x18) != puVar6) {
      piVar15 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049bcc0 with catch @ 0049be1c
                        */
        *piVar15 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a0 + -0x18));
      }
    }
    HeroEquipmentManager::EquipWeapon(this_00,(shared_ptr *)&local_c8);
    plVar16 = local_c0;
    if ((local_c0 != (long *)0x0) &&
       (lVar12 = local_c0[1], local_c0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 0049b5b0 to 0059b5b3 has its CatchHandler @ 0049b5c4 */
                    /* try { // try from 0049b5b4 to 0059b5ff has its CatchHandler @ 0049b528 */
      (**(code **)(*local_c0 + 0x10))(local_c0);
      lVar12 = plVar16[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b5b0 with catch @ 0049b5c4
                        */
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b57c with catch @ 0049b5cc
                        */
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  PlayerProfile::weaponTrinketName();
  plVar16 = (long *)(local_e0 + -0x18);
  lVar12 = *plVar16;
  if (plVar16 == (long *)puVar6) {
LAB_0049b5fc:
    if (lVar12 != 0) goto LAB_0049b600;
LAB_0049baf8:
    local_c8 = (Item *)0x0;
    local_c0 = (long *)0x0;
    HeroEquipmentManager::ApplyWeaponTrinket(this_00,(shared_ptr *)&local_c8);
    plVar16 = local_c0;
                    /* try { // try from 0049bb08 to 0059bb2f has its CatchHandler @ 0049bb38 */
    if ((local_c0 != (long *)0x0) &&
       (lVar12 = local_c0[1], local_c0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
                    /* try { // try from 0049bb30 to 0059bb3b has its CatchHandler @ 0049b760 */
      lVar12 = plVar16[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049bb08 with catch @ 0049bb38
                        */
      plVar16[2] = lVar12 + -1;
                    /* catch() { ... } // from try @ 0049bb5c with catch @ 0049bb3c
                       catch() { ... } // from try @ 0049bbc0 with catch @ 0049bb3c */
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  else {
    piVar15 = (int *)(local_e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b88c with catch @ 0049badc
                        */
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b820 with catch @ 0049bae8
                        */
    if (0 < iVar7) goto LAB_0049b5fc;
    operator_delete(plVar16);
    if (lVar12 == 0) goto LAB_0049baf8;
LAB_0049b600:
                    /* try { // try from 0049b600 to 0059b60b has its CatchHandler @ 0049b614 */
    pIVar9 = operator_new(0x38);
                    /* try { // try from 0049b60c to 0059b617 has its CatchHandler @ 0049b528 */
    Item::Item(pIVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049b600 with catch @ 0049b614
                        */
                    /* catch() { ... } // from try @ 0049b62c with catch @ 0049b618 */
    local_c8 = pIVar9;
    boost::detail::shared_count::shared_count<Caver::Item>((shared_count *)&local_c0,pIVar9);
                    /* try { // try from 0049b628 to 0059b62b has its CatchHandler @ 0049b63c */
                    /* try { // try from 0049b62c to 0059b64f has its CatchHandler @ 0049b618 */
    boost::detail::sp_enable_shared_from_this(&local_c8,pIVar9,pIVar9);
    pIVar9 = local_c8;
                    /* catch() { ... } // from try @ 0049b628 with catch @ 0049b63c */
    PlayerProfile::weaponTrinketName();
                    /* try { // try from 0049b650 to 0059b66b has its CatchHandler @ 0049b650
                       catch() { ... } // from try @ 0049b650 with catch @ 0049b650
                       catch() { ... } // from try @ 0049b670 with catch @ 0049b650 */
    FUN_0066a6a8(pIVar9 + 8,&local_a0);
    if ((undefined *)(local_a0 + -0x18) != puVar6) {
      piVar15 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar15;
        *piVar15 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a0 + -0x18));
      }
    }
                    /* try { // try from 0049b66c to 0059b66f has its CatchHandler @ 0049b69c */
    HeroEquipmentManager::ApplyWeaponTrinket(this_00,(shared_ptr *)&local_c8);
    plVar16 = local_c0;
                    /* try { // try from 0049b670 to 0059b6af has its CatchHandler @ 0049b650 */
    if ((local_c0 != (long *)0x0) &&
       (lVar12 = local_c0[1], local_c0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
      lVar12 = plVar16[2];
                    /* catch() { ... } // from try @ 0049b66c with catch @ 0049b69c */
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
                    /* try { // try from 0049bb54 to 0059bb5b has its CatchHandler @ 0049bb8c */
  PlayerProfile::armorTrinketName();
                    /* try { // try from 0049bb5c to 0059bb93 has its CatchHandler @ 0049bb3c */
  plVar16 = (long *)(local_e8 + -0x18);
  lVar12 = *plVar16;
  if (plVar16 == (long *)puVar6) {
LAB_0049bb70:
    if (lVar12 != 0) goto LAB_0049bb74;
LAB_0049bc98:
    local_c8 = (Item *)0x0;
    local_c0 = (long *)0x0;
    HeroEquipmentManager::ApplyArmorTrinket(this_00,(shared_ptr *)&local_c8);
    plVar16 = local_c0;
    if ((local_c0 != (long *)0x0) &&
       (lVar12 = local_c0[1], local_c0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 0049bcc0 to 0059bce7 has its CatchHandler @ 0049be1c */
      (**(code **)(*local_c0 + 0x10))(local_c0);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
                    /* try { // try from 0049bce8 to 0059bdbb has its CatchHandler @ 0049bc24 */
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  else {
    piVar15 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar15;
      *piVar15 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (0 < iVar7) goto LAB_0049bb70;
    operator_delete(plVar16);
    if (lVar12 == 0) goto LAB_0049bc98;
LAB_0049bb74:
    pIVar9 = operator_new(0x38);
    Item::Item(pIVar9);
                    /* catch() { ... } // from try @ 0049bb54 with catch @ 0049bb8c */
    local_c8 = pIVar9;
                    /* try { // try from 0049bb94 to 0059bb9b has its CatchHandler @ 0049bba8 */
    boost::detail::shared_count::shared_count<Caver::Item>((shared_count *)&local_c0,pIVar9);
                    /* try { // try from 0049bba4 to 0059bba7 has its CatchHandler @ 0049bbb8 */
                    /* catch() { ... } // from try @ 0049bb94 with catch @ 0049bba8 */
    boost::detail::sp_enable_shared_from_this(&local_c8,pIVar9,pIVar9);
    pIVar9 = local_c8;
                    /* catch() { ... } // from try @ 0049bba4 with catch @ 0049bbb8 */
    PlayerProfile::armorTrinketName();
                    /* try { // try from 0049bbbc to 0059bbbf has its CatchHandler @ 0049bbc8 */
                    /* try { // try from 0049bbc0 to 0059bbcb has its CatchHandler @ 0049bb3c */
    FUN_0066a6a8(pIVar9 + 8,&local_a0);
                    /* catch() { ... } // from try @ 0049bbbc with catch @ 0049bbc8 */
                    /* catch() { ... } // from try @ 0049bbec with catch @ 0049bbd0 */
    if ((undefined *)(local_a0 + -0x18) != puVar6) {
      piVar15 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar15;
        *piVar15 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar15;
                    /* try { // try from 0049bc6c to 0059bc93 has its CatchHandler @ 0049bd8c */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a0 + -0x18));
      }
    }
    HeroEquipmentManager::ApplyArmorTrinket(this_00,(shared_ptr *)&local_c8);
    plVar16 = local_c0;
                    /* try { // try from 0049bbe4 to 0059bbeb has its CatchHandler @ 0049bc08 */
                    /* try { // try from 0049bbec to 0059bc1b has its CatchHandler @ 0049bbd0 */
    if ((local_c0 != (long *)0x0) &&
       (lVar12 = local_c0[1], local_c0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0049bbe4 with catch @ 0049bc08 */
      (**(code **)(*local_c0 + 0x10))(local_c0);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049bce8 with catch @ 0049bc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0049bde4 with catch @ 0049bc24
                        */
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  plVar16 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar12 = local_68[1], local_68[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if ((local_90 != (long *)0x0) &&
     (lVar12 = local_90[1], local_90[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar12 = local_90[2];
    local_90[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
  }
LAB_0049bd80:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049bc6c with catch @ 0049bd8c
                        */
  if (DAT_00683734 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 0049bdbc to 0059bde3 has its CatchHandler @ 0049be00 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


