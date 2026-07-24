/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00522fb4
 * Function: Caver::MapView::Init
 * Signature: undefined __thiscall Init(MapView * this, shared_ptr * param_1, shared_ptr * param_2, bool param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&, boost::shared_ptr<Caver::GameState>
   const&, bool, bool) */

void __thiscall
Caver::MapView::Init
          (MapView *this,shared_ptr *param_1,shared_ptr *param_2,bool param_3,bool param_4)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  MapViewNode *pMVar5;
  bool bVar6;
  ulong uVar7;
  GUIView *this_00;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  MapViewNode *pMVar12;
  int *piVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  string *psVar17;
  long *plVar18;
  GameState *this_01;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long *local_c0;
  long *local_b8;
  long *plStack_b0;
  long local_a8;
  long *plStack_a0;
  MapViewNode *local_98;
  MapViewNode *local_90;
  undefined8 uStack_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
                    /* catch() { ... } // from try @ 00522f54 with catch @ 00522fbc */
                    /* try { // try from 00522fc0 to 00622fc7 has its CatchHandler @ 00522fd0 */
                    /* try { // try from 00522fc8 to 00622fd3 has its CatchHandler @ 00522e7c */
                    /* catch() { ... } // from try @ 00522fc0 with catch @ 00522fd0 */
                    /* catch() { ... } // from try @ 0052301c with catch @ 00522fd4
                       catch() { ... } // from try @ 00523038 with catch @ 00522fd4 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar21 = *(undefined8 *)param_1;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
  }
  plVar18 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0xf8) = uVar21;
  *(long *)(this + 0x100) = lVar9;
                    /* try { // try from 00523018 to 0062301b has its CatchHandler @ 0052302c */
                    /* try { // try from 0052301c to 0062302f has its CatchHandler @ 00522fd4 */
  if ((plVar18 != (long *)0x0) && (lVar9 = plVar18[1], plVar18[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00523018 with catch @ 0052302c */
                    /* try { // try from 00523030 to 00623037 has its CatchHandler @ 00523040 */
    (**(code **)(*plVar18 + 0x10))(plVar18);
                    /* try { // try from 00523038 to 00623043 has its CatchHandler @ 00522fd4 */
    lVar9 = plVar18[2];
                    /* catch() { ... } // from try @ 00523030 with catch @ 00523040 */
    plVar18[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  uVar21 = *(undefined8 *)param_2;
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 005230dc with catch @ 00523070 */
    *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
  }
  plVar18 = *(long **)(this + 0x110);
  *(undefined8 *)(this + 0x108) = uVar21;
  *(long *)(this + 0x110) = lVar9;
  if ((plVar18 != (long *)0x0) && (lVar9 = plVar18[1], plVar18[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    lVar9 = plVar18[2];
    plVar18[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 005230b4 to 006230b7 has its CatchHandler @ 005230d0 */
                    /* try { // try from 005230b8 to 006230bf has its CatchHandler @ 005230e4 */
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  this[0x418] = (MapView)param_4;
  plVar18 = *(long **)param_1;
                    /* catch() { ... } // from try @ 005230b4 with catch @ 005230d0 */
  if (plVar18[1] != *plVar18) {
                    /* catch() { ... } // from try @ 005230d4 with catch @ 005230e0 */
                    /* catch() { ... } // from try @ 005230b8 with catch @ 005230e4 */
    lVar9 = 0;
    uVar16 = 0;
    do {
      lVar10 = *(long *)(*plVar18 + lVar9);
      plVar18 = (long *)((long *)(*plVar18 + lVar9))[1];
      if (plVar18 == (long *)0x0) {
        cVar1 = *(char *)(lVar10 + 0x48);
joined_r0x00523170:
                    /* try { // try from 00523170 to 00623243 has its CatchHandler @ 00523170
                       catch() { ... } // from try @ 00523170 with catch @ 00523170
                       catch() { ... } // from try @ 00523248 with catch @ 00523170 */
        if (cVar1 == '\0') goto LAB_00523174;
LAB_00523154:
        local_98 = (MapViewNode *)0x0;
        local_90 = (MapViewNode *)0x0;
        puVar8 = *(undefined8 **)(this + 0x120);
        if (puVar8 == *(undefined8 **)(this + 0x128)) {
          std::
          vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>
          ::_M_insert_aux((vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>
                           *)(this + 0x118),puVar8,&local_98);
          pMVar12 = local_90;
        }
        else {
          *puVar8 = 0;
          puVar8[1] = 0;
LAB_00523250:
          *(undefined8 **)(this + 0x120) = puVar8 + 2;
          pMVar12 = local_90;
        }
      }
      else {
        cVar1 = *(char *)(lVar10 + 0x48);
        if (plVar18[1] == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar10 = plVar18[2];
          plVar18[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
            goto joined_r0x00523170;
          }
        }
        if (cVar1 != '\0') goto LAB_00523154;
LAB_00523174:
        pMVar12 = operator_new(0x30);
        MapViewNode::MapViewNode(pMVar12);
        local_98 = pMVar12;
        boost::detail::shared_count::shared_count<Caver::MapViewNode>
                  ((shared_count *)&local_90,pMVar12);
        boost::detail::sp_enable_shared_from_this(&local_98,pMVar12,pMVar12);
        local_80 = *(long *)(**(long **)param_1 + lVar9);
        local_78 = (long *)((long *)(**(long **)param_1 + lVar9))[1];
        if (local_78 != (long *)0x0) {
          local_78[1] = local_78[1] + 1;
        }
        MapViewNode::InitWithMapNode(local_98,(shared_ptr *)&local_80);
        plVar18 = local_78;
        if ((local_78 != (long *)0x0) &&
           (lVar10 = local_78[1], local_78[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*local_78 + 0x10))(local_78);
          lVar10 = plVar18[2];
          plVar18[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
        puVar8 = *(undefined8 **)(this + 0x120);
        if (puVar8 != *(undefined8 **)(this + 0x128)) {
          *puVar8 = local_98;
          puVar8[1] = local_90;
          if (local_90 != (MapViewNode *)0x0) {
                    /* try { // try from 00523244 to 00623247 has its CatchHandler @ 005233dc */
                    /* try { // try from 00523248 to 006233ef has its CatchHandler @ 00523170 */
            *(long *)((long)local_90 + 8) = *(long *)((long)local_90 + 8) + 1;
          }
          goto LAB_00523250;
        }
        std::
        vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>
                         *)(this + 0x118),puVar8,&local_98);
        pMVar12 = local_90;
      }
      local_90 = pMVar12;
      if ((pMVar12 != (MapViewNode *)0x0) &&
         (lVar10 = *(long *)((long)pMVar12 + 8), *(long *)((long)pMVar12 + 8) = lVar10 + -1,
         lVar10 + -1 == 0)) {
        (**(code **)(*(long *)pMVar12 + 0x10))(pMVar12);
        lVar10 = *(long *)((long)pMVar12 + 0x10);
        *(long *)((long)pMVar12 + 0x10) = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*(long *)pMVar12 + 0x18))(pMVar12);
        }
      }
      plVar18 = *(long **)param_1;
      uVar16 = uVar16 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar16 < (ulong)(plVar18[1] - *plVar18 >> 4));
  }
  if (*(long *)(this + 0x120) == *(long *)(this + 0x118)) {
LAB_0052373c:
    local_90 = (MapViewNode *)0x0;
    uStack_88 = 0;
    local_98 = (MapViewNode *)0x0;
    GameState::GetAllQuestsInProgress(*(GameState **)(this + 0x108),(vector *)&local_98);
    pMVar5 = local_90;
    puVar4 = PTR_DAT_007e5de8;
    puVar3 = PTR_pthread_create_007e4e78;
                    /* try { // try from 00523750 to 00623753 has its CatchHandler @ 00523764 */
                    /* try { // try from 00523754 to 00623777 has its CatchHandler @ 00523730 */
    for (pMVar12 = local_98; pMVar12 != pMVar5; pMVar12 = pMVar12 + 8) {
      psVar17 = (string *)**(undefined8 **)(this + 0x108);
      FUN_0066a528(&local_80,*(undefined8 *)pMVar12);
      GameData::QuestForName(psVar17);
      if ((plStack_a0 != (long *)0x0) &&
         (lVar9 = plStack_a0[1], plStack_a0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        lVar9 = plStack_a0[2];
        plStack_a0[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plStack_a0 + 0x18))(plStack_a0);
        }
      }
      if ((undefined *)(local_80 + -0x18) != puVar4) {
        piVar13 = (int *)(local_80 + -8);
        if (puVar3 == (undefined *)0x0) {
          iVar14 = *piVar13;
          *piVar13 = iVar14 + -1;
        }
        else {
          do {
            iVar14 = *piVar13;
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = iVar14 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar14 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
      if (local_a8 != 0) {
        psVar17 = *(string **)(**(long **)(this + 0x108) + 0x48);
        plVar18 = *(long **)(**(long **)(this + 0x108) + 0x50);
        if (plVar18 != (long *)0x0) {
          plVar18[1] = plVar18[1] + 1;
        }
        FUN_0066a528(&local_80,local_a8 + 0x20);
        Map::NodeForName(psVar17);
                    /* catch() { ... } // from try @ 005238e4 with catch @ 005238b4 */
        if ((plStack_b0 != (long *)0x0) &&
           (lVar9 = plStack_b0[1], plStack_b0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 005238d0 to 006238e3 has its CatchHandler @ 00523908 */
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          lVar9 = plStack_b0[2];
          plStack_b0[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
                    /* try { // try from 005238e4 to 0062390b has its CatchHandler @ 005238b4 */
            (**(code **)(*plStack_b0 + 0x18))(plStack_b0);
          }
        }
        if ((undefined *)(local_80 + -0x18) != puVar4) {
          piVar13 = (int *)(local_80 + -8);
          if (puVar3 == (undefined *)0x0) {
            iVar14 = *piVar13;
            *piVar13 = iVar14 + -1;
          }
          else {
            do {
              iVar14 = *piVar13;
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = iVar14 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar14 < 1) {
            operator_delete((undefined *)(local_80 + -0x18));
          }
        }
                    /* catch() { ... } // from try @ 005238d0 with catch @ 00523908 */
        if ((plVar18 != (long *)0x0) &&
           (lVar9 = plVar18[1], plVar18[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar9 = plVar18[2];
                    /* catch() { ... } // from try @ 00523970 with catch @ 00523930 */
          plVar18[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
        if (local_b8 != (long *)0x0) {
                    /* try { // try from 00523954 to 00623957 has its CatchHandler @ 00523964 */
          *(undefined1 *)(*(long *)(*(long *)(this + 0x118) + *local_b8 * 0x10) + 0x1d) = 1;
        }
      }
                    /* catch() { ... } // from try @ 00523954 with catch @ 00523964 */
                    /* try { // try from 00523968 to 0062396f has its CatchHandler @ 00523978 */
    }
    plVar18 = *(long **)(this + 0xf8);
                    /* try { // try from 00523970 to 0062397b has its CatchHandler @ 00523930 */
                    /* catch() { ... } // from try @ 00523968 with catch @ 00523978 */
    if (plVar18[1] != *plVar18) {
      uVar16 = 0;
      do {
        lVar9 = 0;
        uVar7 = 0;
        while( true ) {
          plVar18 = (long *)(*plVar18 + uVar16 * 0x10);
          lVar10 = *plVar18;
          plVar18 = (long *)plVar18[1];
          if (plVar18 == (long *)0x0) {
                    /* try { // try from 00523a94 to 00623a9b has its CatchHandler @ 00523aa4 */
                    /* try { // try from 00523a9c to 00623aa7 has its CatchHandler @ 0052397c */
            uVar15 = (*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 3) *
                     -0x5555555555555555;
          }
          else {
            lVar19 = plVar18[1];
            plVar18[1] = lVar19 + 1;
            lVar11 = *(long *)(lVar10 + 0x30);
            lVar10 = *(long *)(lVar10 + 0x38);
            plVar18[1] = lVar19;
            uVar15 = (lVar10 - lVar11 >> 3) * -0x5555555555555555;
            if (lVar19 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              lVar10 = plVar18[2];
              plVar18[2] = lVar10 + -1;
              if (lVar10 + -1 == 0) {
                (**(code **)(*plVar18 + 0x18))(plVar18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005239c4 with catch @ 00523a90
                        */
              }
            }
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00523a94 with catch @ 00523aa4
                        */
          if (uVar15 <= uVar7) break;
          plVar18 = (long *)(**(long **)(this + 0xf8) + uVar16 * 0x10);
          lVar10 = *plVar18;
          plVar18 = (long *)plVar18[1];
          if (plVar18 == (long *)0x0) {
            lVar10 = *(long *)(lVar10 + 0x30) + uVar7 * 0x18;
          }
          else {
                    /* catch() { ... } // from try @ 00523ae4 with catch @ 00523ac0 */
            lVar10 = *(long *)(lVar10 + 0x30) + lVar9;
            if (plVar18[1] == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
                    /* try { // try from 00523ae0 to 00623ae3 has its CatchHandler @ 00523af4 */
              lVar11 = plVar18[2];
                    /* try { // try from 00523ae4 to 00623b07 has its CatchHandler @ 00523ac0 */
              plVar18[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 00523ae0 with catch @ 00523af4 */
                (**(code **)(*plVar18 + 0x18))(plVar18);
              }
            }
          }
          if (((*(char *)(lVar10 + 0x11) == '\0') &&
              (Map::NodeForName(*(string **)(this + 0xf8)), local_c0 != (long *)0x0)) &&
             (lVar10 = local_c0[1], local_c0[1] = lVar10 + -1, lVar10 + -1 == 0)) {
            (**(code **)(*local_c0 + 0x10))(local_c0);
            lVar10 = local_c0[2];
            local_c0[2] = lVar10 + -1;
            if (lVar10 + -1 == 0) {
              (**(code **)(*local_c0 + 0x18))(local_c0);
            }
          }
          plVar18 = *(long **)(this + 0xf8);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x18;
        }
        plVar18 = *(long **)(this + 0xf8);
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulong)(plVar18[1] - *plVar18 >> 4));
    }
                    /* try { // try from 0052397c to 006239c3 has its CatchHandler @ 0052397c
                       catch(type#1 @ 00000000) { ... } // from try @ 0052397c with catch @ 0052397c
                       catch(type#1 @ 00000000) { ... } // from try @ 005239e0 with catch @ 0052397c
                       catch(type#1 @ 00000000) { ... } // from try @ 00523a9c with catch @ 0052397c
                        */
    UpdateTargetPath(this);
    UpdateDefaultNodeVisibility(this);
    plVar18 = *(long **)(*(long *)param_2 + 0x170);
    plVar20 = *(long **)(*(long *)param_2 + 0x178);
    if (plVar20 != (long *)0x0) {
      plVar20[1] = plVar20[1] + 1;
    }
    this_00 = *(GUIView **)(this + 0x2a8);
    if (plVar18 == (long *)0x0) {
      this_00[0xe4] = (GUIView)0x1;
    }
    else {
      this_00[0xe4] = (GUIView)0x0;
      local_78 = *(long **)(this_00 + 0x7c);
                    /* try { // try from 005239c4 to 006239df has its CatchHandler @ 00523a90 */
                    /* try { // try from 005239e0 to 00623a93 has its CatchHandler @ 0052397c */
      uVar21 = *(undefined8 *)(**(long **)(*(long *)(this + 0x118) + *plVar18 * 0x10) + 8);
      local_80 = CONCAT44((float)((ulong)uVar21 >> 0x20) + 7.0,
                          (float)uVar21 + SUB84(local_78,0) * -0.5 + -3.0);
      GUIView::SetFrame(this_00,(Rectangle *)&local_80);
    }
    if ((plVar20 != (long *)0x0) && (lVar9 = plVar20[1], plVar20[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      lVar9 = plVar20[2];
      plVar20[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
    if (local_98 != (MapViewNode *)0x0) {
      operator_delete(local_98);
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar16 = 0;
  do {
    plVar18 = (long *)(*plVar18 + uVar16 * 0x10);
    lVar9 = *plVar18;
    plVar18 = (long *)plVar18[1];
    if ((plVar18 != (long *)0x0) && (plVar18[1] == 0)) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      lVar10 = plVar18[2];
      plVar18[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    this_01 = *(GameState **)param_2;
    FUN_0066a528(&local_98,lVar9 + 0x10);
    lVar10 = GameState::StateForLevelWithName(this_01,(string *)&local_98,false);
    if (local_98 + -0x18 != (MapViewNode *)PTR_DAT_007e5de8) {
                    /* try { // try from 005236b8 to 006236d3 has its CatchHandler @ 00523700 */
      pMVar12 = local_98 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005236d4 to 00623703 has its CatchHandler @ 0052367c */
        iVar14 = *(int *)pMVar12;
        *(int *)pMVar12 = iVar14 + -1;
      }
      else {
        do {
          iVar14 = *(int *)pMVar12;
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pMVar12,0x10);
          if (bVar6) {
            *(int *)pMVar12 = iVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar14 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
    if (*(long *)(*(long *)(this + 0x118) + uVar16 * 0x10) == 0) {
      plVar18 = (long *)(**(long **)param_1 + uVar16 * 0x10);
      lVar11 = *plVar18;
      plVar18 = (long *)plVar18[1];
      if (plVar18 == (long *)0x0) {
        lVar11 = *(long *)(lVar11 + 0x50);
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x50);
        if (plVar18[1] == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar19 = plVar18[2];
          plVar18[2] = lVar19 + -1;
          if (lVar19 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
      }
      if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 005235f0 with catch @ 005235c0 */
        plVar18 = (long *)(**(long **)param_1 + uVar16 * 0x10);
        lVar11 = *plVar18;
        plVar18 = (long *)plVar18[1];
        if (plVar18 != (long *)0x0) {
          plVar18[1] = plVar18[1] + 1;
        }
                    /* try { // try from 005235dc to 006235ef has its CatchHandler @ 00523614 */
        puVar8 = (undefined8 *)(*(long *)(this + 0x118) + **(long **)(lVar11 + 0x50) * 0x10);
        uVar21 = *puVar8;
        lVar11 = puVar8[1];
                    /* try { // try from 005235f0 to 00623617 has its CatchHandler @ 005235c0 */
        puVar8 = (undefined8 *)(*(long *)(this + 0x118) + uVar16 * 0x10);
        if (lVar11 != 0) {
          *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
        }
        plVar20 = (long *)puVar8[1];
        *puVar8 = uVar21;
        puVar8[1] = lVar11;
                    /* catch() { ... } // from try @ 005235dc with catch @ 00523614 */
        if ((plVar20 != (long *)0x0) &&
           (lVar11 = plVar20[1], plVar20[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          lVar11 = plVar20[2];
                    /* catch() { ... } // from try @ 00523670 with catch @ 00523634 */
          plVar20[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar20 + 0x18))(plVar20);
          }
        }
                    /* try { // try from 00523654 to 00623657 has its CatchHandler @ 00523664 */
        if ((plVar18 != (long *)0x0) &&
           (lVar11 = plVar18[1], plVar18[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00523654 with catch @ 00523664 */
                    /* try { // try from 00523668 to 0062366f has its CatchHandler @ 00523678 */
                    /* try { // try from 00523670 to 0062367b has its CatchHandler @ 00523634 */
          (**(code **)(*plVar18 + 0x10))(plVar18);
          lVar11 = plVar18[2];
                    /* catch() { ... } // from try @ 00523668 with catch @ 00523678 */
                    /* try { // try from 0052367c to 006236b7 has its CatchHandler @ 0052367c
                       catch(type#1 @ 00000000) { ... } // from try @ 0052367c with catch @ 0052367c
                       catch(type#1 @ 00000000) { ... } // from try @ 005236d4 with catch @ 0052367c
                       catch(type#1 @ 00000000) { ... } // from try @ 0052370c with catch @ 0052367c
                        */
          plVar18[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
      }
    }
    lVar11 = *(long *)(this + 0x118);
    lVar19 = *(long *)(lVar11 + uVar16 * 0x10);
    if (lVar19 != 0) {
      cVar1 = *(char *)(lVar9 + 0x68);
      if (cVar1 != '\0') {
        *(undefined1 *)(lVar19 + 0x28) = 1;
      }
      *(int *)(lVar19 + 0x20) = *(int *)(lVar9 + 0x6c) + *(int *)(lVar19 + 0x20);
      if (lVar10 != 0) {
        if (cVar1 != '\0') {
                    /* catch() { ... } // from try @ 00523244 with catch @ 005233dc */
          FUN_00666bb8(&local_98,"portal_found",auStack_70);
          uVar7 = StateProperties::HasFlag((StateProperties *)(lVar10 + 0x10),(string *)&local_98);
          if (local_98 + -0x18 != (MapViewNode *)PTR_DAT_007e5de8) {
            pMVar12 = local_98 + -8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005236b8 with catch @ 00523700
                        */
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar14 = *(int *)pMVar12;
              *(int *)pMVar12 = iVar14 + -1;
            }
            else {
              do {
                    /* try { // try from 00523704 to 0062370b has its CatchHandler @ 00523714 */
                iVar14 = *(int *)pMVar12;
                    /* try { // try from 0052370c to 00623717 has its CatchHandler @ 0052367c */
                cVar1 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pMVar12,0x10);
                if (bVar6) {
                  *(int *)pMVar12 = iVar14 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar14 < 1) {
                    /* catch() { ... } // from try @ 00523754 with catch @ 00523730 */
              operator_delete(local_98 + -0x18);
            }
          }
          if ((uVar7 & 1) != 0) {
            *(undefined1 *)(lVar19 + 0x29) = 1;
          }
        }
        *(int *)(lVar19 + 0x24) = *(int *)(lVar10 + 0x44) + *(int *)(lVar19 + 0x24);
      }
      *(undefined1 *)(lVar19 + 0x18) = 0;
      if ((param_3) && (*(undefined1 *)(lVar19 + 0x19) = 1, *(char *)(lVar19 + 0x28) != '\0')) {
        *(undefined1 *)(lVar19 + 0x29) = 1;
      }
      if ((lVar10 != 0) && (*(char *)(lVar10 + 8) != '\0')) {
        *(undefined1 *)(lVar19 + 0x19) = 1;
      }
      lVar10 = *(long *)(*(long *)param_2 + 0x170);
      plVar18 = *(long **)(*(long *)param_2 + 0x178);
      if (plVar18 != (long *)0x0) {
        plVar18[1] = plVar18[1] + 1;
      }
      if (lVar10 == 0) {
        if (plVar18 != (long *)0x0) {
          bVar6 = false;
          goto LAB_00523538;
        }
      }
      else {
        if (plVar18 == (long *)0x0) {
          if (*(long *)(lVar9 + 0x28) != *(long *)(lVar10 + 0x28)) goto LAB_00523574;
        }
        else {
          bVar6 = *(long *)(lVar9 + 0x28) == *(long *)(lVar10 + 0x28);
          if (plVar18[1] == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            lVar9 = plVar18[2];
            plVar18[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
          }
LAB_00523538:
          lVar9 = plVar18[1] + -1;
          plVar18[1] = lVar9;
          if (lVar9 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            lVar9 = plVar18[2];
            plVar18[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
          }
          if (!bVar6) goto LAB_00523574;
        }
        *(undefined1 *)(lVar19 + 0x1b) = 1;
      }
LAB_00523574:
      *(undefined1 *)(lVar19 + 0x1c) = 0;
      *(byte *)(lVar19 + 0x1a) = *(byte *)(lVar19 + 0x19) ^ 1;
      lVar11 = *(long *)(this + 0x118);
    }
    uVar16 = uVar16 + 1;
    if ((ulong)(*(long *)(this + 0x120) - lVar11 >> 4) <= uVar16) goto LAB_0052373c;
    plVar18 = *(long **)param_1;
  } while( true );
}


