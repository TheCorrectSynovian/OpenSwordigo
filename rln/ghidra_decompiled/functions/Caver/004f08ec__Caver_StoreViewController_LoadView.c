/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f08ec
 * Function: Caver::StoreViewController::LoadView
 * Signature: undefined __thiscall LoadView(StoreViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::LoadView() */

void __thiscall Caver::StoreViewController::LoadView(StoreViewController *this)

{
  vector<std::string,std::allocator<std::string>> *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  StoreView *this_00;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  string *psVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  int *piVar16;
  ulong uVar17;
  GUIControl *pGVar18;
  long *plVar19;
  long lVar20;
  StripeView *this_01;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  GUIFrameView *pGVar24;
  size_t *psVar25;
  GUILabel *pGVar26;
  undefined *local_118;
  long *plStack_110;
  StoreViewController *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long *plStack_e0;
  StoreViewController *local_d8;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined *local_b0;
  long *plStack_a8;
  StoreViewController *local_a0;
  StoreViewController *local_98;
  long *local_90;
  StoreViewController *pSStack_88;
  StoreViewController *local_80;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this_00 = operator_new(0x158);
  StoreView::StoreView(this_00);
  boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>
            ((shared_ptr<Caver::StoreView> *)&local_b0,this_00);
  puVar15 = *(undefined **)(this + 0x58);
  plVar9 = *(long **)(this + 0x60);
  *(undefined **)(this + 0x58) = local_b0;
  *(long **)(this + 0x60) = plStack_a8;
  local_b0 = puVar15;
  plStack_a8 = plVar9;
  if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  lVar13 = *(long *)(this + 0x58);
  if (*(int *)(lVar13 + 0x70) != 0x12) {
    plVar9 = *(long **)(lVar13 + 0x58);
    *(undefined4 *)(lVar13 + 0x70) = 0x12;
    if ((plVar9 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar9 + 0x8c))) {
      (**(code **)(*plVar9 + 0x58))();
      lVar13 = *(long *)(this + 0x58);
    }
  }
  puVar15 = PTR_ButtonPressed_007e5670;
  pGVar18 = *(GUIControl **)(lVar13 + 0xf0);
  local_b0 = (undefined *)0x0;
  pSStack_88 = (StoreViewController *)0x0;
  local_90 = (long *)PTR_ButtonPressed_007e5670;
  local_80 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar10 & 1) == 0) {
    local_98 = local_80;
    local_a0 = pSStack_88;
    plStack_a8 = local_90;
    local_b0 = PTR_stored_vtable_007e4d88;
  }
  else {
    local_b0 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_b0,0x40);
  if (((local_b0 != (undefined *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&plStack_a8,&plStack_a8,2);
  }
  pGVar18 = *(GUIControl **)(*(long *)(this + 0x58) + 0x120);
  local_b0 = (undefined *)0x0;
  pSStack_88 = (StoreViewController *)0x0;
  local_90 = (long *)puVar15;
  local_80 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar10 & 1) == 0) {
    local_98 = local_80;
    local_a0 = pSStack_88;
    plStack_a8 = local_90;
    local_b0 = PTR_stored_vtable_007e4d88;
  }
  else {
    local_b0 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_b0,0x40);
  if (local_b0 != (undefined *)0x0) {
    if ((((ulong)local_b0 & 1) == 0) &&
       (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&plStack_a8,&plStack_a8,2);
    }
    local_b0 = (undefined *)0x0;
  }
  uVar23 = *(undefined8 *)(this + 0x58);
  plVar9 = *(long **)(this + 0x60);
  if (plVar9 != (long *)0x0) {
    plVar9[1] = plVar9[1] + 2;
  }
  plVar19 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar23;
  *(long **)(this + 0x20) = plVar9;
  if ((plVar19 != (long *)0x0) && (lVar13 = plVar19[1], plVar19[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar13 = plVar19[2];
    plVar19[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  puVar11 = *(undefined8 **)(this + 0x40);
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,this);
  }
  if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  FUN_00666bb8(&local_b0,0x691afa,&local_90);
  lVar13 = *(long *)(this + 0x78);
  pvVar1 = (vector<std::string,std::allocator<std::string>> *)(this + 0x70);
  if (lVar13 == *(long *)(this + 0x80)) {
    std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(pvVar1,lVar13,&local_b0);
  }
  else {
    FUN_0066a528(lVar13,&local_b0);
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
  }
  puVar5 = PTR_DAT_007e5de8;
  if (local_b0 + -0x18 != PTR_DAT_007e5de8) {
    piVar16 = (int *)(local_b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar16;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004f19d4 with catch @ 004f1b48
                        */
                    /* try { // try from 004f1b4c to 005f1b53 has its CatchHandler @ 004f1b5c */
      *piVar16 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar16;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 004f1b54 to 005f1b5f has its CatchHandler @ 004f198c */
    if (iVar8 < 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004f1b4c with catch @ 004f1b5c
                        */
      operator_delete(local_b0 + -0x18);
                    /* catch() { ... } // from try @ 004f1bec with catch @ 004f1b60
                       catch() { ... } // from try @ 004f1c74 with catch @ 004f1b60 */
    }
  }
  FUN_00666bb8(&local_b0,"compass",&local_90);
  lVar13 = *(long *)(this + 0x78);
  if (lVar13 == *(long *)(this + 0x80)) {
    std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(pvVar1,lVar13,&local_b0);
  }
  else {
    FUN_0066a528(lVar13,&local_b0);
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
  }
  if (local_b0 + -0x18 != puVar5) {
    piVar16 = (int *)(local_b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar16;
      *piVar16 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar16;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_b0 + -0x18);
    }
  }
  FUN_00666bb8(&local_b0,&DAT_00691aee,&local_90);
  lVar13 = *(long *)(this + 0x78);
  if (lVar13 == *(long *)(this + 0x80)) {
    std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(pvVar1,lVar13,&local_b0);
  }
  else {
    FUN_0066a528(lVar13,&local_b0);
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
  }
  if (local_b0 + -0x18 != puVar5) {
    piVar16 = (int *)(local_b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar16;
      *piVar16 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar16;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_b0 + -0x18);
    }
  }
  local_c0 = 0;
  local_b8 = (long *)0x0;
  lVar13 = *(long *)(this + 0x88);
  uVar10 = *(long *)(this + 0x78) - *(long *)(this + 0x70) >> 3;
  lVar20 = *(long *)(this + 0x90);
  uVar17 = lVar20 - lVar13 >> 4;
  if (uVar10 < uVar17 || uVar10 - uVar17 == 0) {
    if (uVar10 < uVar17) {
      lVar13 = lVar13 + uVar10 * 0x10;
      for (lVar21 = lVar13; lVar21 != lVar20; lVar21 = lVar21 + 0x10) {
        plVar9 = *(long **)(lVar21 + 8);
        if ((plVar9 != (long *)0x0) &&
           (lVar14 = plVar9[1], plVar9[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar14 = plVar9[2];
          plVar9[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
      }
      *(long *)(this + 0x90) = lVar13;
    }
  }
  else {
    std::
    vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>
    ::_M_fill_insert((vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>
                      *)(this + 0x88),lVar20,uVar10 - uVar17,&local_c0);
  }
  plVar9 = local_b8;
  if ((local_b8 != (long *)0x0) &&
     (lVar13 = local_b8[1], local_b8[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_b8 + 0x10))(local_b8);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  lVar13 = *(long *)(this + 0x88);
  if (0 < (int)((ulong)(*(long *)(this + 0x90) - lVar13) >> 4)) {
    lVar21 = 0;
    lVar20 = 0;
    do {
      puVar11 = (undefined8 *)(lVar13 + lVar21);
      plVar9 = (long *)puVar11[1];
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)
         ) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar13 = plVar9[2];
        plVar9[2] = lVar13 + -1;
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      lVar13 = *(long *)(this + 0x88);
      lVar20 = lVar20 + 1;
      lVar21 = lVar21 + 0x10;
    } while (lVar20 < (int)((ulong)(*(long *)(this + 0x90) - lVar13) >> 4));
  }
  std::
  _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
  ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
              *)(this + 0xa0),*(_Rb_tree_node **)(this + 0xb0));
  *(undefined8 *)(this + 0xb0) = 0;
  *(StoreViewController **)(this + 0xb8) = this + 0xa8;
  *(StoreViewController **)(this + 0xc0) = this + 0xa8;
  *(undefined8 *)(this + 200) = 0;
  this[0xd0] = (StoreViewController)0x0;
  this[0xd2] = (StoreViewController)0x0;
  plVar9 = (long *)StoreController::SharedController();
  bVar7 = (**(code **)(*plVar9 + 0x50))();
  this[0xd1] = (StoreViewController)(bVar7 & 1);
  this[0xd3] = (StoreViewController)(bVar7 & 1);
  this_01 = *(StripeView **)(*(long *)(this + 0x58) + 0x110);
  plVar9 = (long *)StoreController::SharedController();
  (**(code **)(*plVar9 + 0x10))(&local_c8);
  FUN_0035a030(&local_90,"Connecting to ",&local_c8);
  FUN_0066a528(&local_b0,&local_90);
  FUN_006677d4(&local_b0," Store...",9);
  StripeView::SetTitle(this_01,(string *)&local_b0);
  if (local_b0 + -0x18 != puVar5) {
    piVar16 = (int *)(local_b0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar16;
      *piVar16 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar16;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_b0 + -0x18);
    }
  }
  if (local_90 + -3 != (long *)puVar5) {
    plVar9 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = (int)*plVar9;
      *(int *)plVar9 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = (int)*plVar9;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  if ((undefined *)(local_c8 + -0x18) != puVar5) {
    piVar16 = (int *)(local_c8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar16;
                    /* try { // try from 004f1be8 to 005f1beb has its CatchHandler @ 004f1c68 */
                    /* try { // try from 004f1bec to 005f1c6b has its CatchHandler @ 004f1b60 */
      *piVar16 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar16;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_c8 + -0x18));
    }
  }
  StoreView::SetProductCount
            (*(StoreView **)(this + 0x58),
             (int)((ulong)(*(long *)(this + 0x78) - *(long *)(this + 0x70)) >> 3));
  if (*(long *)(this + 0x78) != *(long *)(this + 0x70)) {
    uVar10 = 0;
    do {
      lVar13 = *(long *)(*(long *)(*(long *)(this + 0x58) + 0x140) + uVar10 * 0x10);
      pGVar18 = *(GUIControl **)(lVar13 + 0x100);
      local_b0 = (undefined *)0x0;
      pSStack_88 = (StoreViewController *)0x0;
      local_90 = (long *)puVar15;
      local_80 = this;
      uVar17 = boost::detail::function::has_empty_target(&local_90);
      if ((uVar17 & 1) == 0) {
        local_98 = local_80;
        local_a0 = pSStack_88;
        plStack_a8 = local_90;
        local_b0 = PTR_stored_vtable_007e4d88;
      }
      else {
        local_b0 = (undefined *)0x0;
      }
      GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_b0,0x40);
      if (local_b0 != (undefined *)0x0) {
        if ((((ulong)local_b0 & 1) == 0) &&
           (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
          (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&plStack_a8,&plStack_a8,2);
        }
        local_b0 = (undefined *)0x0;
      }
      FUN_0066a528(&local_b0,*(long *)pvVar1 + uVar10 * 8);
      FUN_00666bb8(&local_90,0x691afa,&local_c8);
      plVar9 = local_90;
      psVar25 = (size_t *)(local_90 + -3);
      if (*(size_t *)(local_b0 + -0x18) == *psVar25) {
        iVar8 = memcmp(local_b0,local_90,*(size_t *)(local_b0 + -0x18));
        bVar6 = iVar8 == 0;
        if (psVar25 == (size_t *)puVar5) goto LAB_004f1500;
LAB_004f1668:
        plVar9 = plVar9 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004f168c to 005f1697 has its CatchHandler @ 004f12c8 */
          iVar8 = (int)*plVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004f1684 with catch @ 004f1694
                        */
          *(int *)plVar9 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = (int)*plVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004f1310 with catch @ 004f1680
                        */
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 004f1684 to 005f168b has its CatchHandler @ 004f1694 */
          } while (cVar2 != '\0');
        }
        if (0 < iVar8) goto LAB_004f1500;
        operator_delete(psVar25);
        if (bVar6) goto LAB_004f1504;
LAB_004f16b0:
        FUN_00666bb8(&local_90,"compass",&local_c8);
        plVar9 = local_90;
        psVar25 = (size_t *)(local_90 + -3);
        if (*(size_t *)(local_b0 + -0x18) != *psVar25) {
          bVar6 = false;
          if (psVar25 != (size_t *)puVar5) goto LAB_004f1870;
LAB_004f1708:
          if (!bVar6) goto LAB_004f1900;
LAB_004f170c:
          pGVar24 = *(GUIFrameView **)(lVar13 + 0x110);
          psVar12 = (string *)TextureLibrary::sharedLibrary();
          FUN_00666bb8(&local_c8,0x6933dd,auStack_d0);
          TextureLibrary::TextureForName(psVar12,SUB81(&local_c8,0));
          GUIFrameView::SetFrameTexture(pGVar24,(intrusive_ptr *)&local_90,true);
          if ((local_90 != (long *)0x0) &&
             (iVar8 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar8, iVar8 == 0)) {
            (**(code **)(*local_90 + 8))();
          }
          if ((undefined *)(local_c8 + -0x18) != puVar5) {
            piVar16 = (int *)(local_c8 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar8 = *piVar16;
              *piVar16 = iVar8 + -1;
            }
            else {
              do {
                iVar8 = *piVar16;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar6) {
                  *piVar16 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar8 < 1) {
              operator_delete((undefined *)(local_c8 + -0x18));
            }
          }
          pGVar26 = *(GUILabel **)(lVar13 + 0x130);
          FUN_00666bb8(&local_90,"Guiding Compass + AD FREE",auStack_70);
          plVar9 = local_90;
          psVar25 = (size_t *)(local_90 + -3);
          if ((*psVar25 != *(size_t *)((long)*(void **)(pGVar26 + 0x100) + -0x18)) ||
             (iVar8 = memcmp(local_90,*(void **)(pGVar26 + 0x100),*psVar25), iVar8 != 0)) {
            FUN_0066a6a8(pGVar26 + 0x100,&local_90);
            GUILabel::UpdateText(pGVar26);
            psVar25 = (size_t *)(local_90 + -3);
            plVar9 = local_90;
          }
          if (psVar25 != (size_t *)puVar5) {
            plVar9 = plVar9 + -1;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004f132c to 005f1683 has its CatchHandler @ 004f12c8 */
              iVar8 = (int)*plVar9;
              *(int *)plVar9 = iVar8 + -1;
            }
            else {
              do {
                iVar8 = (int)*plVar9;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *(int *)plVar9 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar8 < 1) {
              operator_delete(psVar25);
            }
          }
          pGVar26 = *(GUILabel **)(lVar13 + 0x140);
          FUN_00666bb8(&local_90,"Always find the way to your next objective easily.",auStack_70);
          plVar9 = local_90;
          psVar25 = (size_t *)(local_90 + -3);
          if ((*psVar25 != *(size_t *)((long)*(void **)(pGVar26 + 0x100) + -0x18)) ||
             (iVar8 = memcmp(local_90,*(void **)(pGVar26 + 0x100),*psVar25), iVar8 != 0)) {
            FUN_0066a6a8(pGVar26 + 0x100,&local_90);
            GUILabel::UpdateText(pGVar26);
            psVar25 = (size_t *)(local_90 + -3);
            plVar9 = local_90;
          }
          if (psVar25 == (size_t *)puVar5) goto LAB_004f1a9c;
          plVar9 = plVar9 + -1;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004f1398;
          do {
            iVar8 = (int)*plVar9;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *(int *)plVar9 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* catch() { ... } // from try @ 004f1898 with catch @ 004f1868 */
          } while (cVar2 != '\0');
          goto LAB_004f13a4;
        }
        iVar8 = memcmp(local_b0,local_90,*(size_t *)(local_b0 + -0x18));
        bVar6 = iVar8 == 0;
        if (psVar25 == (size_t *)puVar5) goto LAB_004f1708;
LAB_004f1870:
        plVar9 = plVar9 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = (int)*plVar9;
          *(int *)plVar9 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = (int)*plVar9;
                    /* try { // try from 004f1884 to 005f1897 has its CatchHandler @ 004f18bc */
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar8) goto LAB_004f1708;
        operator_delete(psVar25);
        if (bVar6) goto LAB_004f170c;
LAB_004f1900:
        FUN_00666bb8(&local_90,&DAT_00691aee,&local_c8);
        plVar9 = local_90;
                    /* catch() { ... } // from try @ 004f1980 with catch @ 004f1920 */
        psVar25 = (size_t *)(local_90 + -3);
        if (*(size_t *)(local_b0 + -0x18) == *psVar25) {
          iVar8 = memcmp(local_b0,local_90,*(size_t *)(local_b0 + -0x18));
          bVar6 = iVar8 == 0;
        }
        else {
          bVar6 = false;
        }
        if (psVar25 != (size_t *)puVar5) {
          plVar9 = plVar9 + -1;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = (int)*plVar9;
                    /* try { // try from 004f12c8 to 005f130f has its CatchHandler @ 004f12c8
                       catch(type#1 @ 00000000) { ... } // from try @ 004f12c8 with catch @ 004f12c8
                       catch(type#1 @ 00000000) { ... } // from try @ 004f132c with catch @ 004f12c8
                       catch(type#1 @ 00000000) { ... } // from try @ 004f168c with catch @ 004f12c8
                        */
            *(int *)plVar9 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = (int)*plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(psVar25);
          }
        }
        if (bVar6) {
          pGVar24 = *(GUIFrameView **)(lVar13 + 0x110);
          psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004f1964 to 005f1967 has its CatchHandler @ 004f1974 */
                    /* catch() { ... } // from try @ 004f1964 with catch @ 004f1974 */
                    /* try { // try from 004f1978 to 005f197f has its CatchHandler @ 004f1988 */
          FUN_00666bb8(&local_c8,"ui_coindoubler_buyimage_small",auStack_d0);
                    /* try { // try from 004f1980 to 005f198b has its CatchHandler @ 004f1920 */
                    /* catch() { ... } // from try @ 004f1978 with catch @ 004f1988 */
                    /* try { // try from 004f198c to 005f19d3 has its CatchHandler @ 004f198c
                       catch(type#1 @ 00000000) { ... } // from try @ 004f198c with catch @ 004f198c
                       catch(type#1 @ 00000000) { ... } // from try @ 004f19f0 with catch @ 004f198c
                       catch(type#1 @ 00000000) { ... } // from try @ 004f1b54 with catch @ 004f198c
                        */
          TextureLibrary::TextureForName(psVar12,SUB81(&local_c8,0));
          GUIFrameView::SetFrameTexture(pGVar24,(intrusive_ptr *)&local_90,true);
          if ((local_90 != (long *)0x0) &&
             (iVar8 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar8, iVar8 == 0)) {
            (**(code **)(*local_90 + 8))();
          }
          if ((undefined *)(local_c8 + -0x18) != puVar5) {
                    /* try { // try from 004f1310 to 005f132b has its CatchHandler @ 004f1680 */
            piVar16 = (int *)(local_c8 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar8 = *piVar16;
              *piVar16 = iVar8 + -1;
            }
            else {
              do {
                iVar8 = *piVar16;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar6) {
                  *piVar16 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar8 < 1) {
              operator_delete((undefined *)(local_c8 + -0x18));
            }
          }
                    /* try { // try from 004f19d4 to 005f19ef has its CatchHandler @ 004f1b48 */
          pGVar26 = *(GUILabel **)(lVar13 + 0x130);
          FUN_00666bb8(&local_90,"Coin Doubler + AD FREE",auStack_70);
          plVar9 = local_90;
          psVar25 = (size_t *)(local_90 + -3);
                    /* try { // try from 004f19f0 to 005f1b4b has its CatchHandler @ 004f198c */
          if ((*psVar25 != *(size_t *)((long)*(void **)(pGVar26 + 0x100) + -0x18)) ||
             (iVar8 = memcmp(local_90,*(void **)(pGVar26 + 0x100),*psVar25), iVar8 != 0)) {
            FUN_0066a6a8(pGVar26 + 0x100,&local_90);
            GUILabel::UpdateText(pGVar26);
            psVar25 = (size_t *)(local_90 + -3);
            plVar9 = local_90;
          }
          if (psVar25 != (size_t *)puVar5) {
            plVar9 = plVar9 + -1;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar8 = (int)*plVar9;
              *(int *)plVar9 = iVar8 + -1;
            }
            else {
              do {
                iVar8 = (int)*plVar9;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *(int *)plVar9 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar8 < 1) {
              operator_delete(psVar25);
            }
          }
          pGVar26 = *(GUILabel **)(lVar13 + 0x140);
          FUN_00666bb8(&local_90,&DAT_00693479,auStack_70);
          plVar9 = local_90;
          psVar25 = (size_t *)(local_90 + -3);
          if ((*psVar25 != *(size_t *)((long)*(void **)(pGVar26 + 0x100) + -0x18)) ||
             (iVar8 = memcmp(local_90,*(void **)(pGVar26 + 0x100),*psVar25), iVar8 != 0)) {
            FUN_0066a6a8(pGVar26 + 0x100,&local_90);
            GUILabel::UpdateText(pGVar26);
            psVar25 = (size_t *)(local_90 + -3);
            plVar9 = local_90;
          }
          if (psVar25 != (size_t *)puVar5) {
            plVar9 = plVar9 + -1;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004f1398;
            do {
              iVar8 = (int)*plVar9;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *(int *)plVar9 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_004f13a4;
          }
        }
      }
      else {
        bVar6 = false;
        if (psVar25 != (size_t *)puVar5) goto LAB_004f1668;
LAB_004f1500:
        if (!bVar6) goto LAB_004f16b0;
LAB_004f1504:
        pGVar24 = *(GUIFrameView **)(lVar13 + 0x110);
        psVar12 = (string *)TextureLibrary::sharedLibrary();
        FUN_00666bb8(&local_c8,"ui_noads_buyimage_small",auStack_d0);
        TextureLibrary::TextureForName(psVar12,SUB81(&local_c8,0));
        GUIFrameView::SetFrameTexture(pGVar24,(intrusive_ptr *)&local_90,true);
        if ((local_90 != (long *)0x0) &&
           (iVar8 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar8, iVar8 == 0)) {
          (**(code **)(*local_90 + 8))();
        }
        if ((undefined *)(local_c8 + -0x18) != puVar5) {
                    /* try { // try from 004f1898 to 005f18bf has its CatchHandler @ 004f1868 */
          piVar16 = (int *)(local_c8 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *piVar16;
            *piVar16 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *piVar16;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar6) {
                *piVar16 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete((undefined *)(local_c8 + -0x18));
          }
        }
        pGVar26 = *(GUILabel **)(lVar13 + 0x130);
        FUN_00666bb8(&local_90,"Support Devs + AD FREE",auStack_70);
        plVar9 = local_90;
        psVar25 = (size_t *)(local_90 + -3);
        if ((*psVar25 != *(size_t *)((long)*(void **)(pGVar26 + 0x100) + -0x18)) ||
           (iVar8 = memcmp(local_90,*(void **)(pGVar26 + 0x100),*psVar25), iVar8 != 0)) {
          FUN_0066a6a8(pGVar26 + 0x100,&local_90);
          GUILabel::UpdateText(pGVar26);
          psVar25 = (size_t *)(local_90 + -3);
          plVar9 = local_90;
        }
        if (psVar25 != (size_t *)puVar5) {
                    /* catch() { ... } // from try @ 004f1884 with catch @ 004f18bc */
          plVar9 = plVar9 + -1;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = (int)*plVar9;
            *(int *)plVar9 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = (int)*plVar9;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *(int *)plVar9 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(psVar25);
          }
        }
        pGVar26 = *(GUILabel **)(lVar13 + 0x140);
        FUN_00666bb8(&local_90,&DAT_00693397,auStack_70);
        plVar9 = local_90;
        psVar25 = (size_t *)(local_90 + -3);
        if ((*psVar25 != *(size_t *)((long)*(void **)(pGVar26 + 0x100) + -0x18)) ||
           (iVar8 = memcmp(local_90,*(void **)(pGVar26 + 0x100),*psVar25), iVar8 != 0)) {
          FUN_0066a6a8(pGVar26 + 0x100,&local_90);
          GUILabel::UpdateText(pGVar26);
          psVar25 = (size_t *)(local_90 + -3);
          plVar9 = local_90;
        }
        if (psVar25 == (size_t *)puVar5) goto LAB_004f1a9c;
        plVar9 = plVar9 + -1;
        if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
          do {
            iVar8 = (int)*plVar9;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *(int *)plVar9 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_004f13a4;
        }
LAB_004f1398:
        iVar8 = (int)*plVar9;
        *(int *)plVar9 = iVar8 + -1;
LAB_004f13a4:
        if (iVar8 < 1) {
          operator_delete(psVar25);
        }
      }
LAB_004f1a9c:
      UpdateProductBuyButton(this,(string *)(*(long *)(this + 0x70) + uVar10 * 8));
      if (local_b0 + -0x18 != puVar5) {
        piVar16 = (int *)(local_b0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar16;
          *piVar16 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar16;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar6) {
              *piVar16 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_b0 + -0x18);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(this + 0x78) - *(long *)(this + 0x70) >> 3));
  }
  plVar9 = (long *)StoreController::SharedController();
  plVar19 = *(long **)(this + 0x10);
  if ((plVar19 == (long *)0x0) || (plVar19[1] == 0)) {
    local_b0 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_b0);
  }
  else {
    uVar23 = *(undefined8 *)(this + 8);
    pcVar22 = *(code **)(*plVar9 + 0x28);
    plVar19[1] = plVar19[1] + 2;
    plStack_a8 = (long *)0x0;
    local_b0 = PTR_ProductRequestCompletion_007e79a8;
    local_a0 = this;
    uVar10 = boost::detail::function::has_empty_target(&local_b0);
    if ((uVar10 & 1) == 0) {
      local_108 = local_a0;
      plStack_110 = plStack_a8;
      local_118 = local_b0;
      puVar15 = PTR_stored_vtable_007e5718;
    }
    else {
      puVar15 = (undefined *)0x0;
    }
    plVar19[2] = plVar19[2] + 1;
    local_f0 = (undefined *)0x0;
    local_100 = uVar23;
    local_f8 = plVar19;
    if (puVar15 != (undefined *)0x0) {
      local_f0 = puVar15;
      if (((ulong)puVar15 & 1) == 0) {
        (**(code **)((ulong)puVar15 & 0xfffffffffffffffe))(&local_118,&local_e8,0);
      }
      else {
        local_d8 = local_108;
        plStack_e0 = plStack_110;
        local_e8 = local_118;
      }
    }
    (*pcVar22)(plVar9,pvVar1,&local_100);
    if (local_f0 != (undefined *)0x0) {
      if ((((ulong)local_f0 & 1) == 0) &&
         (*(code **)((ulong)local_f0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_f0 & 0xfffffffffffffffe))(&local_e8,&local_e8,2);
      }
      local_f0 = (undefined *)0x0;
    }
    if ((local_f8 != (long *)0x0) &&
       (lVar13 = local_f8[2], local_f8[2] = lVar13 + -1, lVar13 + -1 == 0)) {
      (**(code **)(*local_f8 + 0x18))();
    }
    if (((puVar15 != (undefined *)0x0) && (((ulong)puVar15 & 1) == 0)) &&
       (*(code **)((ulong)puVar15 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)puVar15 & 0xfffffffffffffffe))(&local_118,&local_118,2);
    }
    lVar13 = plVar19[1];
    plVar19[1] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar13 = plVar19[2];
      plVar19[2] = lVar13 + -1;
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    lVar13 = plVar19[1];
    plVar19[1] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar13 = plVar19[2];
      plVar19[2] = lVar13 + -1;
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


