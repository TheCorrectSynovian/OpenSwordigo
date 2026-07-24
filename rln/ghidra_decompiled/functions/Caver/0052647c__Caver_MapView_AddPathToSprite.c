/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052647c
 * Function: Caver::MapView::AddPathToSprite
 * Signature: undefined __thiscall AddPathToSprite(MapView * this, Sprite * param_1, shared_ptr * param_2, Color param_3, intrusive_ptr * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MapView::AddPathToSprite(Caver::Sprite*, boost::shared_ptr<Caver::MapPath> const&,
   Caver::Color, boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall
Caver::MapView::AddPathToSprite
          (MapView *this,Sprite *param_1,undefined8 *param_2,Color *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  MapView **ppMVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined *puVar8;
  MapPath *pMVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  Matrix4 *pMVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  bool bVar22;
  MapNode *this_00;
  string *psVar23;
  long *plVar24;
  float fVar25;
  float extraout_s0;
  float fVar26;
  float extraout_s0_00;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  long *plVar30;
  MapView *pMVar31;
  MapView *local_268;
  MapView *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  long *local_230;
  long *plStack_228;
  float local_21c;
  long *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  Sprite *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  Color local_1d8;
  Color local_1d7;
  Color local_1d6;
  Color local_1d5;
  undefined8 local_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long *local_180;
  long *plStack_178;
  long *local_170;
  long *plStack_168;
  long *local_160;
  long *plStack_158;
  long *local_150;
  long *plStack_148;
  MapPath *local_140;
  long *local_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  
  lVar3 = tpidr_el0;
  local_1e0 = *(long *)(lVar3 + 0x28);
  local_1f8 = param_1;
  if ((int)((ulong)(((long *)*param_2)[1] - *(long *)*param_2) >> 3) < 1) goto LAB_005271f0;
  local_218 = param_5;
  pMVar9 = operator_new(0x18);
  *(undefined8 *)(pMVar9 + 8) = 0;
  *(undefined8 *)(pMVar9 + 0x10) = 0;
  *(undefined8 *)pMVar9 = 0;
  local_140 = pMVar9;
  boost::detail::shared_count::shared_count<Caver::MapPath>((shared_count *)&local_138,pMVar9);
  boost::detail::sp_enable_shared_from_this(&local_140,pMVar9,pMVar9);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)local_140,(vector *)*param_2);
                    /* WARNING: Load size is inaccurate */
  pMVar31._0_4_ = *(MapView **)(*(long *)(this + 0x398) + 0x58);
  if (*(long *)(this + 0x2d8) != 0) {
    this_00 = *(MapNode **)(this + 0x2b8);
    FUN_0066a528(&local_f0,*(long *)(this + 0x2c8) + 0x10);
    uVar10 = MapNode::HasPortalTo(this_00,(string *)&local_f0);
    puVar8 = PTR_DAT_007e5de8;
    if (local_f0 + -3 != (long *)PTR_DAT_007e5de8) {
      plVar30 = local_f0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar17 = (int)*plVar30;
        *(int *)plVar30 = iVar17 + -1;
      }
      else {
        do {
                    /* try { // try from 00527240 to 00627267 has its CatchHandler @ 00527210 */
          iVar17 = (int)*plVar30;
          cVar1 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar22) {
            *(int *)plVar30 = iVar17 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch() { ... } // from try @ 0052722c with catch @ 00527264 */
      if (iVar17 < 1) {
        operator_delete(local_f0 + -3);
      }
    }
    if ((uVar10 & 1) != 0) {
      if (1 < (int)((ulong)(*(long *)(local_140 + 8) - *(long *)local_140) >> 3)) {
        lVar18 = *(long *)(this + 0x118);
        psVar23 = *(string **)(this + 0xf8);
        lVar20 = **(long **)(this + 0x2b8);
        FUN_0066a528(&local_f0,*(long *)local_140 + 8);
        Map::NodeForName(psVar23);
        lVar18 = *(long *)(lVar18 + lVar20 * 0x10);
        lVar20 = *(long *)(*(long *)(this + 0x118) + *local_150 * 0x10);
        if ((plStack_148 != (long *)0x0) &&
           (lVar14 = plStack_148[1], plStack_148[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          lVar14 = plStack_148[2];
          plStack_148[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plStack_148 + 0x18))(plStack_148);
          }
        }
        if (local_f0 + -3 != (long *)puVar8) {
                    /* catch() { ... } // from try @ 0052730c with catch @ 005272a0 */
          plVar30 = local_f0 + -1;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar17 = (int)*plVar30;
                    /* catch() { ... } // from try @ 005272d8 with catch @ 005272e8 */
            *(int *)plVar30 = iVar17 + -1;
          }
          else {
            do {
              iVar17 = (int)*plVar30;
              cVar1 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar22) {
                *(int *)plVar30 = iVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar17 < 1) {
            operator_delete(local_f0 + -3);
          }
        }
        if (lVar18 == lVar20) goto LAB_0052669c;
      }
      pMVar9 = local_140;
      FUN_0066a528(&local_f0,*(long *)(this + 0x2b8) + 0x10);
      lVar18 = *(long *)pMVar9;
      if ((*(long *)(pMVar9 + 8) == lVar18) && (*(long *)(pMVar9 + 8) != *(long *)(pMVar9 + 0x10)))
      {
        FUN_0066a528(lVar18,&local_f0);
        *(long *)(pMVar9 + 8) = *(long *)(pMVar9 + 8) + 8;
      }
      else {
        std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
                  ((vector<std::string,std::allocator<std::string>> *)pMVar9,lVar18,&local_f0);
      }
      if (local_f0 + -3 != (long *)puVar8) {
        plVar30 = local_f0 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar17 = (int)*plVar30;
          *(int *)plVar30 = iVar17 + -1;
        }
        else {
          do {
            iVar17 = (int)*plVar30;
            cVar1 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar22) {
              *(int *)plVar30 = iVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar17 < 1) {
                    /* try { // try from 005272d8 to 006272db has its CatchHandler @ 005272e8 */
          operator_delete(local_f0 + -3);
        }
      }
    }
  }
LAB_0052669c:
  puVar8 = PTR_DAT_007e5de8;
  fVar5 = DAT_00683944;
                    /* catch() { ... } // from try @ 005266d8 with catch @ 005266a8 */
  iVar17 = (int)((ulong)(*(long *)(local_140 + 8) - *(long *)local_140) >> 3);
  if (1 < iVar17) {
                    /* try { // try from 005266c4 to 006266d7 has its CatchHandler @ 005266fc */
    lVar18 = (*(long *)(local_140 + 8) - *(long *)local_140) * 0x20000000 >> 0x20;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005267b4 with catch @ 00526838
                        */
                    /* try { // try from 0052683c to 00626843 has its CatchHandler @ 0052684c */
      psVar23 = *(string **)(this + 0xf8);
                    /* try { // try from 00526844 to 0062684f has its CatchHandler @ 0052676c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052683c with catch @ 0052684c
                        */
      FUN_0066a528(&local_f0,*(long *)local_140 + lVar18 * 8 + -0x10);
      Map::NodeForName(psVar23);
      plVar30 = plStack_158;
                    /* catch() { ... } // from try @ 0052688c with catch @ 00526868 */
      plVar24 = *(long **)(*(long *)(this + 0x118) + *local_160 * 0x10);
      if ((plStack_158 != (long *)0x0) &&
         (lVar20 = plStack_158[1], plStack_158[1] = lVar20 + -1, lVar20 + -1 == 0)) {
                    /* try { // try from 00526888 to 0062688b has its CatchHandler @ 0052689c */
                    /* try { // try from 0052688c to 006268af has its CatchHandler @ 00526868 */
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        lVar20 = plVar30[2];
                    /* catch() { ... } // from try @ 00526888 with catch @ 0052689c */
        plVar30[2] = lVar20 + -1;
        if (lVar20 + -1 == 0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      lVar20 = lVar18 + -1;
      if (local_f0 + -3 != (long *)puVar8) {
        plVar30 = local_f0 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00526744 with catch @ 00526754 */
          iVar17 = (int)*plVar30;
                    /* try { // try from 00526758 to 0062675f has its CatchHandler @ 00526768 */
          *(int *)plVar30 = iVar17 + -1;
        }
        else {
          do {
            iVar17 = (int)*plVar30;
                    /* catch() { ... } // from try @ 00526760 with catch @ 00526720 */
            cVar1 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar22) {
              *(int *)plVar30 = iVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
                    /* try { // try from 00526760 to 0062676b has its CatchHandler @ 00526720 */
        if (iVar17 < 1) {
                    /* catch() { ... } // from try @ 00526758 with catch @ 00526768 */
                    /* try { // try from 0052676c to 006267b3 has its CatchHandler @ 0052676c
                       catch(type#1 @ 00000000) { ... } // from try @ 0052676c with catch @ 0052676c
                       catch(type#1 @ 00000000) { ... } // from try @ 005267d0 with catch @ 0052676c
                       catch(type#1 @ 00000000) { ... } // from try @ 00526844 with catch @ 0052676c
                        */
          operator_delete(local_f0 + -3);
        }
      }
      psVar23 = *(string **)(this + 0xf8);
      FUN_0066a528(&local_f0,*(long *)local_140 + lVar20 * 8);
      Map::NodeForName(psVar23);
      plVar30 = plStack_168;
      plVar19 = *(long **)(*(long *)(this + 0x118) + *local_170 * 0x10);
      if ((plStack_168 != (long *)0x0) &&
         (lVar14 = plStack_168[1], plStack_168[1] = lVar14 + -1, lVar14 + -1 == 0)) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        lVar14 = plVar30[2];
        plVar30[2] = lVar14 + -1;
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      if (local_f0 + -3 != (long *)puVar8) {
        plVar30 = local_f0 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar17 = (int)*plVar30;
          *(int *)plVar30 = iVar17 + -1;
        }
        else {
          do {
            iVar17 = (int)*plVar30;
                    /* try { // try from 00526744 to 00626747 has its CatchHandler @ 00526754 */
            cVar1 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar22) {
              *(int *)plVar30 = iVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar17 < 1) {
          operator_delete(local_f0 + -3);
        }
      }
      pMVar9 = local_140;
      if (plVar24 == plVar19) {
        lVar12 = *(long *)(local_140 + 8);
        lVar14 = *(long *)local_140 + lVar18 * 8;
        lVar15 = lVar14;
        if ((lVar14 != lVar12) && (lVar15 = lVar12, 0 < lVar12 - lVar14)) {
          lVar14 = ((ulong)(lVar12 - lVar14) >> 3) + 1;
          lVar12 = *(long *)local_140 + lVar20 * 8;
          do {
            FUN_0066a6a8(lVar12,lVar12 + 8);
            lVar14 = lVar14 + -1;
            lVar12 = lVar12 + 8;
          } while (1 < lVar14);
          lVar15 = *(long *)(pMVar9 + 8);
        }
        *(long *)(pMVar9 + 8) = lVar15 + -8;
        puVar11 = (undefined *)(*(long *)(lVar15 + -8) + -0x18);
        if (puVar11 != puVar8) {
          piVar16 = (int *)(*(long *)(lVar15 + -8) + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar17 = *piVar16;
            *piVar16 = iVar17 + -1;
          }
          else {
            do {
              iVar17 = *piVar16;
              cVar1 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar22) {
                *piVar16 = iVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
joined_r0x005267ec:
          if (iVar17 < 1) {
            operator_delete(puVar11);
          }
        }
      }
      else if (lVar18 < (int)((ulong)(*(long *)(local_140 + 8) - *(long *)local_140) >> 3)) {
        psVar23 = *(string **)(this + 0xf8);
        FUN_0066a528(&local_f0,*(long *)local_140 + lVar18 * 8);
        Map::NodeForName(psVar23);
        plVar30 = plStack_178;
        plVar21 = *(long **)(*(long *)(this + 0x118) + *local_180 * 0x10);
        if ((plStack_178 != (long *)0x0) &&
           (lVar14 = plStack_178[1], plStack_178[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          lVar14 = plVar30[2];
          plVar30[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar30 + 0x18))(plVar30);
          }
        }
        if (local_f0 + -3 != (long *)puVar8) {
          plVar30 = local_f0 + -1;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar17 = (int)*plVar30;
            *(int *)plVar30 = iVar17 + -1;
          }
          else {
            do {
              iVar17 = (int)*plVar30;
                    /* try { // try from 005267d0 to 0062683b has its CatchHandler @ 0052676c */
              cVar1 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar22) {
                *(int *)plVar30 = iVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar17 < 1) {
            operator_delete(local_f0 + -3);
          }
        }
        uVar29 = *(undefined8 *)(*plVar24 + 8);
        local_f0 = (long *)CONCAT44((float)((ulong)*(undefined8 *)(*plVar19 + 8) >> 0x20) -
                                    (float)((ulong)uVar29 >> 0x20),
                                    (float)*(undefined8 *)(*plVar19 + 8) - (float)uVar29);
        Vector2::Normalize((Vector2 *)&local_f0);
        uVar29 = *(undefined8 *)(*plVar21 + 8);
        local_130 = (long *)CONCAT44((float)((ulong)uVar29 >> 0x20) -
                                     (float)((ulong)*(undefined8 *)(*plVar19 + 8) >> 0x20),
                                     (float)uVar29 - (float)*(undefined8 *)(*plVar19 + 8));
        Vector2::Normalize((Vector2 *)&local_130);
        pMVar9 = local_140;
        if (ABS((float)local_f0 - (float)local_130) <= fVar5) {
          if (ABS(local_f0._4_4_ - local_130._4_4_) <= fVar5) {
            lVar12 = *(long *)(local_140 + 8);
            lVar14 = *(long *)local_140 + lVar18 * 8;
            lVar15 = lVar14;
            if ((lVar14 != lVar12) && (lVar15 = lVar12, 0 < lVar12 - lVar14)) {
              lVar14 = ((ulong)(lVar12 - lVar14) >> 3) + 1;
              lVar12 = *(long *)local_140 + lVar20 * 8;
              do {
                FUN_0066a6a8(lVar12,lVar12 + 8);
                lVar14 = lVar14 + -1;
                lVar12 = lVar12 + 8;
              } while (1 < lVar14);
              lVar15 = *(long *)(pMVar9 + 8);
            }
            *(long *)(pMVar9 + 8) = lVar15 + -8;
                    /* try { // try from 005266d8 to 006266ff has its CatchHandler @ 005266a8 */
            puVar11 = (undefined *)(*(long *)(lVar15 + -8) + -0x18);
            if (puVar11 != puVar8) {
              piVar16 = (int *)(*(long *)(lVar15 + -8) + -8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar17 = *piVar16;
                *piVar16 = iVar17 + -1;
              }
              else {
                do {
                  iVar17 = *piVar16;
                    /* catch() { ... } // from try @ 005266c4 with catch @ 005266fc */
                  cVar1 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar22) {
                    *piVar16 = iVar17 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              goto joined_r0x005267ec;
            }
          }
        }
      }
      bVar22 = 2 < lVar18;
      lVar18 = lVar20;
    } while (bVar22);
    iVar17 = (int)((ulong)(*(long *)(local_140 + 8) - *(long *)local_140) >> 3);
  }
  puVar11 = PTR_DAT_007e5de8;
  puVar8 = PTR_pthread_create_007e4e78;
  uVar29 = _DAT_00694840;
  fVar7 = DAT_00694830;
  dVar6 = DAT_00689fc8;
  fVar5 = _DAT_00687e1c;
  if (0 < iVar17) {
    local_260 = this + 0x3a0;
    local_268 = this + 0x3a8;
    plStack_228 = _UNK_00683498;
    local_230 = _DAT_00683490;
    lVar18 = 0;
    uStack_238 = _UNK_006837e8;
    local_240 = _DAT_006837e0;
    uStack_248 = _UNK_006837f8;
    local_250 = _DAT_006837f0;
    bVar22 = true;
    local_21c = DAT_006883b8;
    local_258 = 0xbf000000bf000000;
    do {
      psVar23 = *(string **)(this + 0xf8);
      FUN_0066a528(&local_130,*(long *)local_140 + lVar18 * 8);
      Map::NodeForName(psVar23);
      if (local_130 + -3 != (long *)puVar11) {
        plVar30 = local_130 + -1;
        if (puVar8 == (undefined *)0x0) {
          iVar17 = (int)*plVar30;
          *(int *)plVar30 = iVar17 + -1;
        }
        else {
          do {
            iVar17 = (int)*plVar30;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar2) {
              *(int *)plVar30 = iVar17 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar17 < 1) {
          operator_delete(local_130 + -3);
        }
      }
      lVar18 = lVar18 + 1;
      uVar27 = *(undefined8 *)(**(long **)(*(long *)(this + 0x118) + *local_f0 * 0x10) + 8);
      fVar25 = (float)uVar29;
      fVar26 = (float)((ulong)uVar29 >> 0x20);
      local_188 = CONCAT44((float)((ulong)uVar27 >> 0x20) + fVar26,(float)uVar27 + fVar25);
      iVar17 = (int)((ulong)(*(long *)(local_140 + 8) - *(long *)local_140) >> 3);
      if (lVar18 < iVar17) {
                    /* catch() { ... } // from try @ 00526c8c with catch @ 00526c5c */
        psVar23 = *(string **)(this + 0xf8);
        FUN_0066a528(&local_1b0,*(long *)local_140 + lVar18 * 8);
                    /* try { // try from 00526c78 to 00626c8b has its CatchHandler @ 00526cb0 */
        Map::NodeForName(psVar23);
        if (local_1b0 + -3 != (long *)puVar11) {
          plVar30 = local_1b0 + -1;
          if (puVar8 == (undefined *)0x0) {
            iVar17 = (int)*plVar30;
            *(int *)plVar30 = iVar17 + -1;
          }
          else {
            do {
              iVar17 = (int)*plVar30;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar2) {
                *(int *)plVar30 = iVar17 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar17 < 1) {
            operator_delete(local_1b0 + -3);
          }
        }
                    /* try { // try from 00526c8c to 00626cb3 has its CatchHandler @ 00526c5c */
        plVar30 = local_128;
        uVar27 = *(undefined8 *)(**(long **)(*(long *)(this + 0x118) + *local_130 * 0x10) + 8);
        local_190 = CONCAT44((float)((ulong)uVar27 >> 0x20) + fVar26,(float)uVar27 + fVar25);
                    /* catch() { ... } // from try @ 00526c78 with catch @ 00526cb0 */
        uVar27 = local_190;
        if ((local_128 != (long *)0x0) &&
           (lVar20 = local_128[1], local_128[1] = lVar20 + -1, lVar20 + -1 == 0)) {
          (**(code **)(*local_128 + 0x10))(local_128);
                    /* catch() { ... } // from try @ 00526d14 with catch @ 00526cd4 */
          lVar20 = plVar30[2];
          plVar30[2] = lVar20 + -1;
          uVar27 = local_190;
          if (lVar20 + -1 == 0) {
            (**(code **)(*plVar30 + 0x18))(plVar30);
            uVar27 = local_190;
          }
        }
joined_r0x00526d28:
        iVar17 = 0;
        local_190 = uVar27;
        plVar30 = plStack_e8;
      }
      else {
                    /* catch() { ... } // from try @ 00526cf8 with catch @ 00526d08 */
        uVar27 = local_188;
        if (iVar17 < 2) goto joined_r0x00526d28;
                    /* try { // try from 00526d0c to 00626d13 has its CatchHandler @ 00526d1c */
        iVar17 = 5;
        plVar30 = plStack_e8;
      }
                    /* try { // try from 00526d14 to 00626d1f has its CatchHandler @ 00526cd4 */
      plStack_e8 = plVar30;
      if ((plVar30 != (long *)0x0) &&
         (lVar20 = plVar30[1], plVar30[1] = lVar20 + -1, lVar20 + -1 == 0)) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        lVar20 = plVar30[2];
        plVar30[2] = lVar20 + -1;
        if (lVar20 + -1 == 0) {
                    /* try { // try from 00526d68 to 00626d83 has its CatchHandler @ 00526dec */
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      if (iVar17 != 0) break;
      uStack_1e8 = 0;
      local_1f0 = local_190;
      local_198 = CONCAT44((float)((ulong)local_190 >> 0x20) - (float)((ulong)local_188 >> 0x20),
                           (float)local_190 - (float)local_188);
      uStack_208 = 0;
      local_210 = local_188;
                    /* try { // try from 00526d84 to 00626def has its CatchHandler @ 00526d20 */
      Vector2::Normalize((Vector2 *)&local_198);
      fVar25 = (float)((ulong)local_1f0 >> 0x20);
      if (lVar18 < (*(long *)(local_140 + 8) - *(long *)local_140) * 0x20000000 + -0x100000000 >>
                   0x20) {
        plVar30 = *(long **)(*(long *)(this + 0x3c8) + 0x54);
        local_1a0 = CONCAT44(fVar25 - (float)((ulong)plVar30 >> 0x20) * 0.5,
                             (float)local_1f0 - SUB84(plVar30,0) * 0.5);
        Vector2::Rounded();
        local_f0 = local_130;
        local_1b0 = (long *)CONCAT44(local_1b0._4_4_,0xffffffff);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00526d68 with catch @ 00526dec
                        */
                    /* try { // try from 00526df0 to 00626df7 has its CatchHandler @ 00526e00 */
        plStack_e8 = plVar30;
        uVar27 = Sprite::AddRectangle
                           (local_1f8,(Rectangle *)&local_f0,
                            (Rectangle *)(*(long *)(this + 0x3c8) + 0x5c),(Color *)&local_1b0);
                    /* try { // try from 00526df8 to 00626e03 has its CatchHandler @ 00526d20 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00526df0 with catch @ 00526e00
                        */
        fVar25 = (float)local_210 - (float)local_1f0;
        fVar28 = (float)((ulong)local_210 >> 0x20) - (float)((ulong)local_1f0 >> 0x20);
                    /* catch() { ... } // from try @ 00526e40 with catch @ 00526e1c */
        fVar26 = 3.0;
        if (fVar5 < fVar25 * fVar25 + fVar28 * fVar28) {
LAB_00526e28:
          fVar25 = (float)((ulong)local_210 >> 0x20);
          if (bVar22) {
                    /* try { // try from 00526e3c to 00626e3f has its CatchHandler @ 00526e50 */
                    /* try { // try from 00526e40 to 00626e63 has its CatchHandler @ 00526e1c */
                    /* catch() { ... } // from try @ 00526e3c with catch @ 00526e50 */
            fVar28 = (float)local_210 + (float)local_198 * 6.0;
            fVar25 = fVar25 + local_198._4_4_ * 6.0;
            local_c0 = CONCAT44(fVar25,fVar28);
            local_b8 = 0x3f80000000000000;
            plStack_e8 = plStack_228;
            local_f0 = local_230;
            local_188 = CONCAT44(fVar25,fVar28);
            uStack_d8 = uStack_238;
            local_e0 = local_240;
            uStack_c8 = uStack_248;
            local_d0 = local_250;
            pMVar13 = (Matrix4 *)Vector2::Angle((Vector2 *)&local_198);
            Matrix4::RotationZ(pMVar13,(float)((double)extraout_s0 + dVar6));
            C_Matrix4Mul((float *)&local_f0,(float *)&local_130,(float *)&local_f0);
            local_1d0 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)(this + 0x3d0) + 0x54) >>
                                        0x20) * (float)((ulong)local_258 >> 0x20),
                                 (float)*(undefined8 *)(*(long *)(this + 0x3d0) + 0x54) *
                                 (float)local_258);
            Vector2::Rounded();
            local_128 = *(long **)(*(long *)(this + 0x3d0) + 0x54);
            local_130 = local_1b0;
            uVar27 = Sprite::AddTransformedRectangle
                               (local_1f8,(Rectangle *)&local_130,
                                (Rectangle *)(*(long *)(this + 0x3d0) + 0x5c),(Matrix4 *)&local_f0,
                                param_4);
            local_188 = CONCAT44(fVar25 + local_198._4_4_ * 8.0,fVar28 + (float)local_198 * 8.0);
          }
          else {
            local_188 = CONCAT44(fVar25 + local_198._4_4_ * 3.0,
                                 (float)local_210 + (float)local_198 * 3.0);
          }
          local_190 = CONCAT44((float)((ulong)local_1f0 >> 0x20) - fVar26 * local_198._4_4_,
                               (float)local_1f0 - fVar26 * (float)local_198);
          local_1d8 = *param_4;
          local_1d7 = param_4[1];
          local_1d6 = param_4[2];
          local_1d5 = param_4[3];
          AddPathSegmentToSprite
                    (pMVar31._0_4_,uVar27,local_1f8,&local_188,&local_190,this + 0x398,&local_1d8);
        }
      }
      else {
        fVar26 = (float)local_210 - (float)local_1f0;
        fVar25 = (float)((ulong)local_210 >> 0x20) - fVar25;
        fVar25 = fVar26 * fVar26 + fVar25 * fVar25;
        ppMVar4 = &local_260;
        if (fVar25 <= local_21c) {
          ppMVar4 = &local_268;
        }
        plVar30 = *(long **)*ppMVar4;
        if (plVar30 != (long *)0x0) {
          *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
        }
        uVar27 = *(undefined8 *)((long)plVar30 + 0x54);
        local_1b8 = CONCAT44((float)((ulong)uVar27 >> 0x20) * (float)((ulong)local_258 >> 0x20),
                             (float)uVar27 * (float)local_258);
        Vector2::Rounded();
        local_b8 = 0x3f80000000000000;
        local_c0 = local_1f0;
        local_1b0 = local_f0;
        plStack_e8 = plStack_228;
        local_f0 = local_230;
        uStack_d8 = uStack_238;
        local_e0 = local_240;
        uStack_c8 = uStack_248;
        local_d0 = local_250;
        local_1a8 = uVar27;
        pMVar13 = (Matrix4 *)Vector2::Angle((Vector2 *)&local_198);
        Matrix4::RotationZ(pMVar13,(float)((double)extraout_s0_00 + dVar6));
        C_Matrix4Mul((float *)&local_f0,(float *)&local_130,(float *)&local_f0);
        Sprite::AddTransformedRectangle
                  (local_1f8,(Rectangle *)&local_1b0,(Rectangle *)((long)plVar30 + 0x5c),
                   (Matrix4 *)&local_f0,param_4);
        plVar24 = local_218;
        plVar19 = *(long **)(*local_218 + 0x54);
        local_1c8 = CONCAT44((float)((ulong)local_1f0 >> 0x20) -
                             (float)((ulong)plVar19 >> 0x20) * 0.5,
                             (float)local_1f0 - SUB84(plVar19,0) * 0.5);
        Vector2::Rounded();
        local_130 = local_1c0;
        local_128 = plVar19;
        uVar27 = Sprite::AddRectangle
                           (local_1f8,(Rectangle *)&local_130,(Rectangle *)(*plVar24 + 0x5c),param_4
                           );
        iVar17 = (int)plVar30[1] + -1;
        *(int *)(plVar30 + 1) = iVar17;
        if (iVar17 == 0) {
          uVar27 = (**(code **)(*plVar30 + 8))(plVar30);
        }
        fVar26 = fVar7;
        if (local_21c < fVar25) goto LAB_00526e28;
      }
      bVar22 = false;
    } while (lVar18 < (int)((ulong)(*(long *)(local_140 + 8) - *(long *)local_140) >> 3));
  }
  if ((local_138 != (long *)0x0) &&
     (lVar18 = local_138[1], local_138[1] = lVar18 + -1, lVar18 + -1 == 0)) {
    (**(code **)(*local_138 + 0x10))(local_138);
    lVar18 = local_138[2];
    local_138[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*local_138 + 0x18))(local_138);
    }
  }
LAB_005271f0:
  if (*(long *)(lVar3 + 0x28) == local_1e0) {
                    /* catch() { ... } // from try @ 00527240 with catch @ 00527210 */
                    /* try { // try from 0052722c to 0062723f has its CatchHandler @ 00527264 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


