/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457d1c
 * Function: Caver::GameViewController::Update
 * Signature: undefined __thiscall Update(GameViewController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::Update(float) */

void __thiscall Caver::GameViewController::Update(GameViewController *this,float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  GameState *this_00;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  float fVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  GameEvent *pGVar14;
  GUIViewController *pGVar15;
  GUIWindow *this_01;
  GUIEffect *this_02;
  LevelUpViewController *this_03;
  long lVar16;
  code *pcVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  float fVar21;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar9 = tpidr_el0;
  local_58 = *(long *)(lVar9 + 0x28);
  *(double *)(*(long *)(this + 0x88) + 0x40) =
       *(double *)(*(long *)(this + 0x88) + 0x40) + (double)param_1;
  if (this[0xe9] == (GameViewController)0x0) goto LAB_00458528;
  if (this[0xe8] != (GameViewController)0x0) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    plVar19 = *(long **)(this + 0xe0);
    this[0xe8] = (GameViewController)0x0;
    if (plVar19 != (long *)0x0) {
      plVar19[1] = plVar19[1] + 2;
    }
    plVar20 = *(long **)(this + 0x20);
    *(undefined8 *)(this + 0x18) = uVar4;
    *(long **)(this + 0x20) = plVar19;
                    /* try { // try from 00457da0 to 00557db3 has its CatchHandler @ 00457f08 */
    if ((plVar20 != (long *)0x0) &&
       (lVar16 = plVar20[1], plVar20[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
                    /* try { // try from 00457db4 to 00557e77 has its CatchHandler @ 00457d14 */
      lVar16 = plVar20[2];
      plVar20[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
    puVar12 = *(undefined8 **)(this + 0x40);
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,this);
    }
    if ((plVar19 != (long *)0x0) &&
       (lVar16 = plVar19[1], plVar19[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar16 = plVar19[2];
      plVar19[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    SaveGameState(this,false);
    uVar13 = GameState::AllNodesVisited(*(GameState **)(this + 0xa8));
    if ((uVar13 & 1) != 0) {
      FUN_00666bb8(&local_70,"theexplorer",auStack_60);
      pGVar14 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_70,1);
      GameEvent::SendEvent(pGVar14);
                    /* try { // try from 00457e78 to 00557e8b has its CatchHandler @ 00457ed8 */
      if (local_70 + -3 != (long *)PTR_DAT_007e5de8) {
        plVar19 = local_70 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar18 = (int)*plVar19;
          *(int *)plVar19 = iVar18 + -1;
        }
        else {
          do {
            iVar18 = (int)*plVar19;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar8) {
              *(int *)plVar19 = iVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (iVar18 < 1) {
          operator_delete(local_70 + -3);
        }
      }
    }
  }
  CheckRevokedPurchases(this);
                    /* try { // try from 00457e8c to 00557efb has its CatchHandler @ 00457d14 */
  if (*(long *)(this + 0x100) == 0) {
    if (this[0x110] != (GameViewController)0x0) {
      if (*(char *)(*(long *)(this + 0xd8) + 0x180) != '\0') {
        this_00 = *(GameState **)(*(long *)(this + 0x88) + 0x80);
        plVar19 = *(long **)(*(long *)(this + 0x88) + 0x88);
        if (plVar19 != (long *)0x0) {
                    /* try { // try from 00458050 to 00558057 has its CatchHandler @ 00458060 */
                    /* try { // try from 00458058 to 00558063 has its CatchHandler @ 00457f40 */
          plVar19[1] = plVar19[1] + 1;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00458050 with catch @ 00458060
                        */
        lVar16 = GameState::CurrentLevelState(this_00,true);
                    /* try { // try from 00458064 to 005580ff has its CatchHandler @ 00458064
                       catch() { ... } // from try @ 00458064 with catch @ 00458064
                       catch() { ... } // from try @ 004581e4 with catch @ 00458064
                       catch() { ... } // from try @ 0045828c with catch @ 00458064
                       catch() { ... } // from try @ 004582f8 with catch @ 00458064 */
        FUN_00666bb8(&local_70,&DAT_0068eedb,auStack_60);
        StateProperties::AddFlag((string *)(lVar16 + 0x10));
        puVar1 = PTR_DAT_007e5de8;
        if (local_70 + -3 != (long *)PTR_DAT_007e5de8) {
          plVar20 = local_70 + -1;
                    /* try { // try from 004585a4 to 005585a7 has its CatchHandler @ 004587ec */
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar18 = (int)*plVar20;
            *(int *)plVar20 = iVar18 + -1;
          }
          else {
            do {
              iVar18 = (int)*plVar20;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar8) {
                *(int *)plVar20 = iVar18 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
                    /* try { // try from 004585c8 to 005585cb has its CatchHandler @ 004587dc */
          if (iVar18 < 1) {
            operator_delete(local_70 + -3);
          }
        }
        if ((plVar19 != (long *)0x0) &&
           (lVar16 = plVar19[1], plVar19[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          lVar16 = plVar19[2];
          plVar19[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
        pGVar15 = operator_new(0x140);
        GUIViewController::GUIViewController(pGVar15);
        puVar11 = PTR_vtable_007e7d18;
                    /* try { // try from 00458100 to 0055814f has its CatchHandler @ 004582a8 */
        puVar2 = PTR_vtable_007e7d18 + 0xe0;
        *(undefined **)pGVar15 = PTR_vtable_007e7d18 + 0x10;
        *(undefined **)(pGVar15 + 0x50) = puVar11 + 0xf8;
        *(undefined **)(pGVar15 + 0x48) = puVar2;
        *(undefined **)(pGVar15 + 0x60) = puVar11 + 0x148;
        *(undefined **)(pGVar15 + 0x58) = puVar11 + 0x118;
        *(undefined **)(pGVar15 + 0x78) = puVar11 + 0x198;
        *(undefined **)(pGVar15 + 0x70) = puVar11 + 0x180;
        *(undefined **)(pGVar15 + 0x68) = puVar11 + 0x160;
        memset(pGVar15 + 0x80,0,0x6a);
        pGVar15[0xf8] = (GUIViewController)0x0;
        *(undefined8 *)(pGVar15 + 0x100) = 0;
        *(undefined8 *)(pGVar15 + 0x108) = 0;
        pGVar15[0x110] = (GUIViewController)0x0;
                    /* try { // try from 00458170 to 00558173 has its CatchHandler @ 00458294 */
        *(undefined8 *)(pGVar15 + 0x120) = 0;
        *(undefined8 *)(pGVar15 + 0x128) = 0;
        *(undefined8 *)(pGVar15 + 0x118) = 0;
        *(undefined4 *)(pGVar15 + 0x130) = 0;
        *(undefined **)(pGVar15 + 0xf0) = puVar1 + 0x18;
        *(undefined **)(pGVar15 + 0x138) = puVar1 + 0x18;
        boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>
                  ((shared_ptr<Caver::GameViewController> *)&local_70,(GameViewController *)pGVar15)
        ;
        lVar16 = *(long *)(this + 0x88);
        lVar5 = *(long *)(this + 0x90);
        if (lVar5 != 0) {
                    /* try { // try from 00458194 to 00558197 has its CatchHandler @ 00458290 */
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
        }
        plVar19 = (long *)local_70[0x12];
        local_70[0x11] = lVar16;
        local_70[0x12] = lVar5;
        if ((plVar19 != (long *)0x0) &&
           (lVar16 = plVar19[1], plVar19[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          lVar16 = plVar19[2];
          plVar19[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
                    /* try { // try from 004581e0 to 005581e3 has its CatchHandler @ 00458264 */
                    /* try { // try from 004581e4 to 00558283 has its CatchHandler @ 00458064 */
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
        local_80 = local_70;
        local_78 = local_68;
        if (local_68 != (long *)0x0) {
          local_68[1] = local_68[1] + 1;
        }
        GameEvent::SetEventsEnabled(false);
        (**(code **)(**(long **)(this + 0x40) + 8))
                  (0x3f800000,0,*(long **)(this + 0x40),&local_80,0);
        plVar19 = local_78;
        if ((local_78 != (long *)0x0) &&
           (lVar16 = local_78[1], local_78[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*local_78 + 0x10))(local_78);
          lVar16 = plVar19[2];
          plVar19[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
                    /* catch() { ... } // from try @ 004581e0 with catch @ 00458264 */
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
        goto LAB_00458274;
      }
      this[0x110] = (GameViewController)0x0;
    }
    GameEvent::SetFirstResponder((IGameEventResponder *)(this + 0x48));
                    /* try { // try from 004582cc to 005582f7 has its CatchHandler @ 00458314 */
    GameEvent::ProcessEvents();
    fVar10 = DAT_00683944;
                    /* try { // try from 004582f8 to 00558317 has its CatchHandler @ 00458064 */
    if ((DAT_00683734 < *(float *)(this + 0x130)) &&
       (fVar21 = *(float *)(this + 0x130) - param_1, *(float *)(this + 0x130) = fVar21,
       fVar21 < fVar10)) {
      *(undefined4 *)(this + 0x130) = 0;
      UpdateGuideTarget(this,false);
    }
    if (*(GameSceneController **)(this + 200) != (GameSceneController *)0x0) {
                    /* catch() { ... } // from try @ 00458284 with catch @ 00458314
                       catch() { ... } // from try @ 004582cc with catch @ 00458314 */
                    /* catch() { ... } // from try @ 004583d4 with catch @ 00458318
                       catch() { ... } // from try @ 0045847c with catch @ 00458318 */
      GameSceneController::Update(*(GameSceneController **)(this + 200),param_1);
    }
    if (*(float *)(this + 0x84) <= DAT_00683944) {
      if (*(int *)(this + 0x80) == 2) {
                    /* try { // try from 0045837c to 00558387 has its CatchHandler @ 00458454 */
        lVar16 = *(long *)(this + 0xa8);
        *(undefined4 *)(this + 0x80) = 0;
                    /* try { // try from 00458388 to 0055839f has its CatchHandler @ 0045843c */
        iVar18 = *(int *)(lVar16 + 0xbc);
        iVar3 = *(int *)(lVar16 + 0xc0);
        iVar6 = *(int *)(lVar16 + 0xc4);
        this_03 = operator_new(0x78);
        LevelUpViewController::LevelUpViewController(this_03);
        boost::shared_ptr<Caver::LevelUpViewController>::shared_ptr<Caver::LevelUpViewController>
                  ((shared_ptr<Caver::LevelUpViewController> *)&local_70,this_03);
        local_70[10] = (long)(this + 0x60);
        lVar16 = *(long *)(this + 0x88);
        lVar5 = *(long *)(this + 0x90);
                    /* try { // try from 004583d0 to 005583d3 has its CatchHandler @ 00458454 */
        if (lVar5 != 0) {
                    /* try { // try from 004583d4 to 00558477 has its CatchHandler @ 00458318 */
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
        }
        plVar19 = (long *)local_70[0xc];
        local_70[0xb] = lVar16;
        local_70[0xc] = lVar5;
        if ((plVar19 != (long *)0x0) &&
           (lVar16 = plVar19[1], plVar19[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          lVar16 = plVar19[2];
          plVar19[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
        if ((iVar18 < 8 || iVar3 < 8) || iVar6 < 8) {
                    /* catch() { ... } // from try @ 00458388 with catch @ 0045843c */
          pcVar17 = *(code **)(*(long *)this + 0x50);
          local_80 = local_70;
          local_78 = local_68;
          if (local_68 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0045837c with catch @ 00458454
                       catch() { ... } // from try @ 004583d0 with catch @ 00458454 */
            local_68[1] = local_68[1] + 1;
          }
          (*pcVar17)(this,&local_80);
          plVar19 = local_78;
                    /* try { // try from 00458478 to 0055847b has its CatchHandler @ 00458484 */
          if ((local_78 != (long *)0x0) &&
             (lVar16 = local_78[1], local_78[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0045847c to 00558487 has its CatchHandler @ 00458318 */
                    /* catch() { ... } // from try @ 00458478 with catch @ 00458484 */
                    /* catch() { ... } // from try @ 004584cc with catch @ 00458488
                       catch() { ... } // from try @ 00458540 with catch @ 00458488 */
            (**(code **)(*local_78 + 0x10))(local_78);
            lVar16 = plVar19[2];
            plVar19[2] = lVar16 + -1;
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar19 + 0x18))(plVar19);
            }
          }
        }
        else {
          (**(code **)(*local_70 + 0x18))();
                    /* try { // try from 004584c4 to 005584cb has its CatchHandler @ 00458514 */
                    /* try { // try from 004584cc to 00558537 has its CatchHandler @ 00458488 */
          (**(code **)(*(long *)this + 0x78))(this,local_70);
        }
        if ((local_68 != (long *)0x0) &&
           (lVar16 = local_68[1], local_68[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*local_68 + 0x10))(local_68);
          lVar16 = local_68[2];
          local_68[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
                    /* catch() { ... } // from try @ 004584c4 with catch @ 00458514 */
            (**(code **)(*local_68 + 0x18))(local_68);
          }
        }
      }
      else if (*(int *)(this + 0x80) == 1) {
        *(undefined4 *)(this + 0x80) = 0;
        GameSceneController::HandleFall(*(GameSceneController **)(this + 200));
        this_01 = (GUIWindow *)(**(code **)(**(long **)(this + 0xd8) + 0xf0))();
        this_02 = (GUIEffect *)GUIWindow::Effect(this_01);
        GUIEffect::FadeIn(this_02,0.5);
      }
    }
    else {
      *(float *)(this + 0x84) = *(float *)(this + 0x84) - param_1;
    }
    GUIViewController::Update(param_1);
  }
  else {
    pGVar15 = operator_new(0x140);
    GUIViewController::GUIViewController(pGVar15);
    puVar2 = PTR_vtable_007e7d18;
    puVar1 = PTR_vtable_007e7d18 + 0xe0;
    *(undefined **)pGVar15 = PTR_vtable_007e7d18 + 0x10;
    *(undefined **)(pGVar15 + 0x50) = puVar2 + 0xf8;
    *(undefined **)(pGVar15 + 0x48) = puVar1;
                    /* catch() { ... } // from try @ 00457e78 with catch @ 00457ed8 */
    *(undefined **)(pGVar15 + 0x60) = puVar2 + 0x148;
    *(undefined **)(pGVar15 + 0x58) = puVar2 + 0x118;
                    /* try { // try from 00457efc to 00557f33 has its CatchHandler @ 00457f3c */
    *(undefined **)(pGVar15 + 0x78) = puVar2 + 0x198;
    *(undefined **)(pGVar15 + 0x70) = puVar2 + 0x180;
    *(undefined **)(pGVar15 + 0x68) = puVar2 + 0x160;
    memset(pGVar15 + 0x80,0,0x6a);
    puVar1 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00457da0 with catch @ 00457f08 */
    pGVar15[0xf8] = (GUIViewController)0x0;
    *(undefined8 *)(pGVar15 + 0x100) = 0;
    *(undefined8 *)(pGVar15 + 0x108) = 0;
    pGVar15[0x110] = (GUIViewController)0x0;
    *(undefined8 *)(pGVar15 + 0x120) = 0;
    *(undefined8 *)(pGVar15 + 0x128) = 0;
    *(undefined8 *)(pGVar15 + 0x118) = 0;
    *(undefined4 *)(pGVar15 + 0x130) = 0;
                    /* try { // try from 00457f34 to 00557f3f has its CatchHandler @ 00457d14 */
    *(undefined **)(pGVar15 + 0xf0) = puVar1 + 0x18;
    *(undefined **)(pGVar15 + 0x138) = puVar1 + 0x18;
                    /* catch() { ... } // from try @ 00457efc with catch @ 00457f3c */
    boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>
              ((shared_ptr<Caver::GameViewController> *)&local_70,(GameViewController *)pGVar15);
                    /* try { // try from 00457f40 to 00557fcf has its CatchHandler @ 00457f40
                       catch(type#1 @ 00000000) { ... } // from try @ 00457f40 with catch @ 00457f40
                       catch(type#1 @ 00000000) { ... } // from try @ 00457fe4 with catch @ 00457f40
                       catch(type#1 @ 00000000) { ... } // from try @ 00458058 with catch @ 00457f40
                        */
    lVar16 = *(long *)(this + 0x100);
    lVar5 = *(long *)(this + 0x108);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    plVar19 = (long *)local_70[0x12];
    local_70[0x11] = lVar16;
    local_70[0x12] = lVar5;
    if ((plVar19 != (long *)0x0) &&
       (lVar16 = plVar19[1], plVar19[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar16 = plVar19[2];
      plVar19[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    local_80 = local_70;
    local_78 = local_68;
    if (local_68 != (long *)0x0) {
      local_68[1] = local_68[1] + 1;
    }
    GameEvent::SetEventsEnabled(false);
                    /* try { // try from 00457fd0 to 00557fe3 has its CatchHandler @ 0045802c */
    (**(code **)(**(long **)(this + 0x40) + 8))(0x3f800000,0,*(long **)(this + 0x40),&local_80,0);
    plVar19 = local_78;
                    /* try { // try from 00457fe4 to 0055804f has its CatchHandler @ 00457f40 */
    if ((local_78 != (long *)0x0) &&
       (lVar16 = local_78[1], local_78[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      lVar16 = plVar19[2];
      plVar19[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00457fd0 with catch @ 0045802c
                        */
      }
    }
LAB_00458274:
                    /* try { // try from 00458284 to 0055828b has its CatchHandler @ 00458314 */
    if ((local_68 != (long *)0x0) &&
       (lVar16 = local_68[1], local_68[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0045828c to 005582cb has its CatchHandler @ 00458064 */
                    /* catch() { ... } // from try @ 00458194 with catch @ 00458290 */
                    /* catch() { ... } // from try @ 00458170 with catch @ 00458294 */
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar16 = local_68[2];
      local_68[2] = lVar16 + -1;
                    /* catch() { ... } // from try @ 00458100 with catch @ 004582a8 */
      if (lVar16 + -1 == 0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
  }
LAB_00458528:
  if (*(long *)(lVar9 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00458538 to 0055853f has its CatchHandler @ 00458548 */
                    /* try { // try from 00458540 to 0055854b has its CatchHandler @ 00458488 */
                    /* catch() { ... } // from try @ 00458538 with catch @ 00458548 */
                    /* catch() { ... } // from try @ 00458760 with catch @ 0045854c
                       catch() { ... } // from try @ 004589e8 with catch @ 0045854c */
  return;
}


