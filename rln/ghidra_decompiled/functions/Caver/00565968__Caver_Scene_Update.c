/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00565968
 * Function: Caver::Scene::Update
 * Signature: undefined __thiscall Update(Scene * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Scene::Update(float) */

void __thiscall Caver::Scene::Update(Scene *this,float param_1)

{
  long lVar1;
  Camera *this_00;
  Camera *this_01;
  Scene *pSVar2;
  FastVector<Caver::CollisionShapeComponent*> *this_02;
  int iVar3;
  CollisionShapeComponent *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  Rectangle *this_03;
  CollisionShape *this_04;
  CollisionShape *pCVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  Scene *pSVar23;
  CollisionShapeComponent *this_05;
  Scene *pSVar24;
  CollisionShapeComponent *pCVar25;
  CollisionShapeComponent *this_06;
  SceneObject *pSVar26;
  float fVar27;
  void **local_c0;
  undefined8 local_b8;
  SceneObject *local_b0;
  CollisionShapeComponent *pCStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte local_7c;
  long local_78;
  
                    /* try { // try from 00565968 to 0066598f has its CatchHandler @ 00565bcc */
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
                    /* try { // try from 005659a8 to 006659cf has its CatchHandler @ 00565bc4 */
  *(float *)(this + 0x24) = param_1;
  *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
  this[0x78] = (Scene)(0 < *(int *)(this + 0x20));
  ProgramState::Update((ProgramState *)(this + 0x28),param_1);
  fVar27 = DAT_0068797c;
  *(undefined8 *)(this + 0x324) = DAT_00695be8;
  Camera::AABBForZRange(DAT_00689170,fVar27);
  fVar27 = _DAT_00684940;
  *(CollisionShapeComponent **)(this + 0x334) = pCStack_a8;
  *(SceneObject **)(this + 0x32c) = local_b0;
  Rectangle::RectangleByOutsetting((Rectangle *)(this + 0x32c),fVar27);
  this_00 = (Camera *)(this + 0x360);
                    /* try { // try from 00565a20 to 00665a5f has its CatchHandler @ 00565bd4 */
  *(CollisionShapeComponent **)(this + 0x31c) = pCStack_a8;
  *(SceneObject **)(this + 0x314) = local_b0;
  SceneGrid::UpdateVisibleAreasWithCamera(this_00);
  this_01 = (Camera *)(this + 0x3a0);
  SceneGrid::UpdateVisibleAreasWithCamera(this_01);
  puVar9 = PTR_Interface_007e5b08;
  pSVar24 = *(Scene **)(this + 0x160);
  pSVar2 = this + 0x160;
  if (pSVar2 != pSVar24) {
                    /* try { // try from 00565a60 to 00665b27 has its CatchHandler @ 005656f4 */
    do {
      plVar13 = *(long **)(pSVar24 + 0x10);
      if (plVar13[5] != 0) {
        (**(code **)(*plVar13 + 0xa8))(plVar13,this + 0x180);
        plVar13 = *(long **)(pSVar24 + 0x10);
        if (*(char *)(plVar13[5] + 0xf0) != '\0') {
          (**(code **)(*plVar13 + 0xa8))(plVar13,this + 0x1e0);
          plVar13 = *(long **)(pSVar24 + 0x10);
        }
        uVar14 = (**(code **)(*plVar13 + 0xa0))(plVar13,puVar9);
        if (((uVar14 & 1) != 0) &&
           (pSVar26 = *(SceneObject **)(*(long *)(pSVar24 + 0x10) + 0x28),
           pSVar26[0xb4] == (SceneObject)0x0)) {
          SceneObject::RegisterForWorldBoundsUpdate(pSVar26);
          pSVar26[0xb4] = (SceneObject)0x1;
        }
      }
      pSVar24 = *(Scene **)pSVar24;
    } while (pSVar2 != pSVar24);
    pSVar24 = *(Scene **)pSVar2;
  }
  while (pSVar24 != pSVar2) {
    plVar13 = *(long **)(pSVar24 + 0x10);
    pSVar23 = *(Scene **)pSVar24;
    if ((plVar13 != (long *)0x0) &&
       (iVar11 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar11, iVar11 == 0)) {
      (**(code **)(*plVar13 + 8))();
    }
    operator_delete(pSVar24);
    pSVar24 = pSVar23;
  }
                    /* try { // try from 00565b28 to 00665b2f has its CatchHandler @ 00565b34 */
  pSVar23 = *(Scene **)(this + 0x170);
  pSVar24 = this + 0x170;
                    /* try { // try from 00565b30 to 00665b6f has its CatchHandler @ 005656f4 */
  *(Scene **)(this + 0x160) = pSVar2;
  *(Scene **)(this + 0x168) = pSVar2;
                    /* catch() { ... } // from try @ 00565b28 with catch @ 00565b34 */
  if (pSVar23 != pSVar24) {
    do {
                    /* catch() { ... } // from try @ 00565940 with catch @ 00565b44 */
      if (*(char *)(*(long *)(pSVar23 + 0x10) + 0xf0) == '\0') {
                    /* catch() { ... } // from try @ 005658ec with catch @ 00565b4c */
        ActivateObject(this,(intrusive_ptr *)(pSVar23 + 0x10));
      }
      pSVar23 = *(Scene **)pSVar23;
    } while (pSVar24 != pSVar23);
    pSVar2 = *(Scene **)pSVar24;
    while (pSVar2 != pSVar24) {
      plVar13 = *(long **)(pSVar2 + 0x10);
                    /* try { // try from 00565b70 to 00665b77 has its CatchHandler @ 00565b7c */
      pSVar23 = *(Scene **)pSVar2;
                    /* catch() { ... } // from try @ 00565b70 with catch @ 00565b7c */
                    /* catch() { ... } // from try @ 0056591c with catch @ 00565b80 */
      if ((plVar13 != (long *)0x0) &&
         (iVar11 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar11, iVar11 == 0)) {
                    /* catch() { ... } // from try @ 005658a0 with catch @ 00565b90 */
        (**(code **)(*plVar13 + 8))();
      }
      operator_delete(pSVar2);
      pSVar2 = pSVar23;
    }
    *(Scene **)(this + 0x170) = pSVar24;
    *(Scene **)(this + 0x178) = pSVar24;
  }
                    /* try { // try from 00565bb4 to 00665bbb has its CatchHandler @ 00565bc0 */
  iVar11 = SceneGrid::GetObjectsNearCamera((SceneGrid *)this_00,fVar27,&local_c0);
                    /* catch() { ... } // from try @ 00565bb4 with catch @ 00565bc0 */
  if (0 < iVar11) {
                    /* catch() { ... } // from try @ 005659a8 with catch @ 00565bc4 */
    lVar20 = 0;
    do {
                    /* catch() { ... } // from try @ 00565968 with catch @ 00565bcc */
      pSVar26 = local_c0[lVar20];
                    /* catch() { ... } // from try @ 00565a20 with catch @ 00565bd4 */
      if (pSVar26 != (SceneObject *)0x0) {
        *(int *)(pSVar26 + 8) = *(int *)(pSVar26 + 8) + 1;
      }
      local_b0 = pSVar26;
      ActivateObject(this,(intrusive_ptr *)&local_b0);
                    /* try { // try from 00565bf4 to 00665c1b has its CatchHandler @ 00565dc4 */
      if ((pSVar26 != (SceneObject *)0x0) &&
         (iVar12 = *(int *)(pSVar26 + 8), *(int *)(pSVar26 + 8) = iVar12 + -1, iVar12 + -1 == 0)) {
        (**(code **)(*(long *)pSVar26 + 8))(pSVar26);
      }
      lVar20 = lVar20 + 1;
                    /* catch() { ... } // from try @ 005658bc with catch @ 00565c20 */
    } while (lVar20 < iVar11);
  }
  pSVar2 = this + 0x110;
  for (pSVar24 = *(Scene **)(this + 0x110); pSVar2 != pSVar24; pSVar24 = *(Scene **)pSVar24) {
                    /* try { // try from 00565c44 to 00665c4f has its CatchHandler @ 00565d90 */
    pSVar26 = *(SceneObject **)(pSVar24 + 0x10);
    if (*(long *)(pSVar26 + 0x30) == 0) {
      fVar27 = (float)SceneObject::updateSpeedMultiplier(pSVar26);
      SceneObject::Update(pSVar26,fVar27 * param_1,0 < *(int *)(this + 0x20),(bool)this[0xb]);
                    /* try { // try from 00565c74 to 00665d27 has its CatchHandler @ 00565dc4 */
    }
  }
  iVar11 = *(int *)(this + 0x120);
  uVar14 = (ulong)iVar11;
  this_02 = (FastVector<Caver::CollisionShapeComponent*> *)(this + 0x120);
  if (0 < iVar11) {
    lVar20 = *(long *)(this + 0x128);
    if (iVar11 == 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar14 & 0xfffffffffffffffe;
      plVar13 = (long *)(lVar20 + 8);
      uVar19 = uVar18;
      do {
        plVar21 = plVar13 + -1;
        lVar1 = *plVar13;
        uVar19 = uVar19 - 2;
        plVar13 = plVar13 + 2;
        *(undefined1 *)(*plVar21 + 0x1c0) = 0;
        *(undefined1 *)(lVar1 + 0x1c0) = 0;
      } while (uVar19 != 0);
      if (uVar18 == uVar14) goto LAB_00565ce0;
    }
    do {
      lVar1 = uVar18 * 8;
      uVar18 = uVar18 + 1;
      *(undefined1 *)(*(long *)(lVar20 + lVar1) + 0x1c0) = 0;
    } while ((long)uVar18 < (long)uVar14);
  }
LAB_00565ce0:
  *(undefined4 *)this_02 = 0;
  pSVar24 = *(Scene **)pSVar2;
  if (pSVar2 != pSVar24) {
    do {
      pSVar26 = *(SceneObject **)(pSVar24 + 0x10);
      if (pSVar26[0xf2] == (SceneObject)0x0) {
        if (pSVar26[0xf1] != (SceneObject)0x0) {
          *(int *)(pSVar26 + 8) = *(int *)(pSVar26 + 8) + 1;
          local_b0 = pSVar26;
          ActivateObject(this,(intrusive_ptr *)&local_b0);
          goto LAB_00565d50;
        }
      }
      else {
        pSVar26[0xf2] = (SceneObject)0x0;
        if (pSVar26 != (SceneObject *)0x0) {
          *(int *)(pSVar26 + 8) = *(int *)(pSVar26 + 8) + 1;
        }
        local_b0 = pSVar26;
        ActivateObject(this,(intrusive_ptr *)&local_b0);
        if (pSVar26 != (SceneObject *)0x0) {
LAB_00565d50:
          iVar11 = *(int *)(pSVar26 + 8);
          *(int *)(pSVar26 + 8) = iVar11 + -1;
          if (iVar11 + -1 == 0) {
            (**(code **)(*(long *)pSVar26 + 8))(pSVar26);
          }
        }
      }
      pSVar24 = *(Scene **)pSVar24;
    } while (pSVar2 != pSVar24);
    pSVar24 = *(Scene **)pSVar2;
  }
  do {
    while( true ) {
      if (pSVar2 == pSVar24) {
        ComponentManager::PurgeInactive((ComponentManager *)(this + 0x1e0));
        puVar9 = PTR_Interface_007e5b08;
        plVar13 = *(long **)(this + 0x340);
        plVar21 = *(long **)(this + 0x348);
        if (plVar13 != plVar21) {
          do {
            lVar20 = *plVar13;
            if (*(long *)(lVar20 + 0x20) != 0) {
              pCStack_a8 = *(CollisionShapeComponent **)(lVar20 + 0x9c);
              local_b0 = *(SceneObject **)(lVar20 + 0x94);
                    /* try { // try from 00565f18 to 00665f3f has its CatchHandler @ 00566104 */
              if (*(char *)(lVar20 + 0x90) != '\0') {
                Rectangle::FlipHorizontally((Rectangle *)&local_b0);
              }
              local_b8._0_4_ = *(undefined4 *)(lVar20 + 0x8c);
              local_b8._4_4_ = (undefined4)local_b8;
              Rectangle::Transform
                        ((Rectangle *)&local_b0,(Vector2 *)(lVar20 + 0x70),*(float *)(lVar20 + 0x80)
                         ,(Vector2 *)&local_b8);
              *(CollisionShapeComponent **)(lVar20 + 0xac) = pCStack_a8;
              *(SceneObject **)(lVar20 + 0xa4) = local_b0;
              *(undefined1 *)(lVar20 + 0xb4) = 0;
              lVar20 = *plVar13;
                    /* try { // try from 00565f60 to 00665f87 has its CatchHandler @ 005661b8 */
              SceneGrid::MoveObject
                        ((SceneGrid *)this_00,(SceneGridEntry *)(lVar20 + 0xf8),
                         (Rectangle *)(lVar20 + 0xa4),
                         *(float *)(lVar20 + 0x78) + *(float *)(lVar20 + 0xb8));
              puVar6 = *(undefined8 **)(*plVar13 + 200);
              for (puVar5 = *(undefined8 **)(*plVar13 + 0xc0); puVar5 != puVar6; puVar5 = puVar5 + 1
                  ) {
                uVar14 = (**(code **)(*(long *)*puVar5 + 0xa0))((long *)*puVar5,puVar9);
                if (((uVar14 & 1) != 0) &&
                   (pCVar25 = (CollisionShapeComponent *)*puVar5,
                   pCVar25[0x178] != (CollisionShapeComponent)0x0)) {
                  CollisionShapeComponent::UpdateWorldAABB(pCVar25);
                    /* try { // try from 00565fbc to 00665fc3 has its CatchHandler @ 00566154 */
                  if (*(long *)(pCVar25 + 400) == 0) {
                    SceneGrid::AddObject
                              ((SceneGrid *)this_01,(SceneGridEntry *)(pCVar25 + 400),
                               (Rectangle *)(pCVar25 + 0x168),0.0);
                  }
                  else {
                    SceneGrid::MoveObject
                              ((SceneGrid *)this_01,(SceneGridEntry *)(pCVar25 + 400),
                               (Rectangle *)(pCVar25 + 0x168),0.0);
                  }
                    /* try { // try from 00565fdc to 00665fe3 has its CatchHandler @ 0056615c */
                  iVar11 = *(int *)(this + 0x120);
                  if (*(int *)(this + 0x124) <= iVar11) {
                    iVar11 = *(int *)(this + 0x124) * 2;
                    if (iVar11 < 0xb) {
                      iVar11 = 10;
                    }
                    /* try { // try from 00566000 to 00666027 has its CatchHandler @ 00566154 */
                    FastVector<Caver::CollisionShapeComponent*>::Resize(this_02,iVar11);
                    iVar11 = *(int *)this_02;
                  }
                  *(CollisionShapeComponent **)(*(long *)(this + 0x128) + (long)iVar11 * 8) =
                       pCVar25;
                  *(int *)(this + 0x120) = iVar11 + 1;
                  pCVar25[0x1c0] = (CollisionShapeComponent)0x1;
                }
              }
            }
                    /* try { // try from 00566028 to 00666127 has its CatchHandler @ 00565df0 */
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar21);
          plVar22 = *(long **)(this + 0x348);
          plVar13 = *(long **)(this + 0x340);
          for (plVar21 = plVar13; plVar22 != plVar21; plVar21 = plVar21 + 1) {
            plVar15 = (long *)*plVar21;
            if ((plVar15 != (long *)0x0) &&
               (iVar11 = (int)plVar15[1] + -1, *(int *)(plVar15 + 1) = iVar11, iVar11 == 0)) {
              (**(code **)(*plVar15 + 8))();
            }
          }
        }
        iVar11 = *(int *)(this + 0x120);
        *(long **)(this + 0x348) = plVar13;
        if (0 < iVar11) {
          uVar7 = *(uint *)(this + 0x310);
          lVar20 = 0;
          do {
            pCVar25 = *(CollisionShapeComponent **)(*(long *)(this + 0x128) + lVar20 * 8);
            if (pCVar25[0x178] != (CollisionShapeComponent)0x0) {
              iVar12 = SceneGrid::GetObjectsInBounds
                                 ((SceneGrid *)this_01,(Rectangle *)(pCVar25 + 0x168),
                                  (void ***)&local_b8);
              iVar11 = iVar12 + -1;
              if (0 < iVar12) {
                iVar12 = 0;
                do {
                  iVar3 = iVar11;
                  if ((uVar7 & 1) != 0) {
                    iVar3 = iVar12;
                  }
                  this_06 = *(CollisionShapeComponent **)
                             (CONCAT44(local_b8._4_4_,(undefined4)local_b8) + (long)iVar3 * 8);
                    /* catch() { ... } // from try @ 00565f18 with catch @ 00566104 */
                  if (((*(SceneObject **)(this_06 + 0x28) != (SceneObject *)0x0) &&
                      ((((pCVar25 < this_06 || (this_06[0x1c0] == (CollisionShapeComponent)0x0)) &&
                        (this_06[0x178] != (CollisionShapeComponent)0x0)) &&
                       ((uVar14 = SceneObject::isHidden(*(SceneObject **)(this_06 + 0x28)),
                        (uVar14 & 1) == 0 || (this[10] != (Scene)0x0)))))) &&
                     (*(long *)(pCVar25 + 0x28) != *(long *)(this_06 + 0x28))) {
                    /* try { // try from 00566128 to 006661a3 has its CatchHandler @ 005661a8 */
                    this_03 = (Rectangle *)(pCVar25 + 0x168);
                    this_05 = pCVar25;
                    if (*(int *)(pCVar25 + 0x70) == 3) {
                      pCVar4 = this_06;
                      if (*(int *)(this_06 + 0x70) != 3) {
                        pCVar4 = pCVar25;
                        this_05 = this_06;
                      }
                      this_03 = (Rectangle *)(this_05 + 0x168);
                      this_06 = pCVar4;
                    }
                    /* catch() { ... } // from try @ 00565fbc with catch @ 00566154
                       catch() { ... } // from try @ 00566000 with catch @ 00566154 */
                    uVar14 = Rectangle::IntersectsWithRect(this_03,(Rectangle *)(this_06 + 0x168));
                    if ((uVar14 & 1) != 0) {
                    /* catch() { ... } // from try @ 00565fdc with catch @ 0056615c */
                      this_04 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_05);
                      pCVar16 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_06);
                      uVar14 = CollisionShape::CollidesWithShape
                                         (this_04,pCVar16,param_1,(CollisionInfo *)&uStack_a0);
                      if ((uVar14 & 1) != 0) {
                    /* try { // try from 005661a4 to 0066627f has its CatchHandler @ 00565df0 */
                        if ((*(long *)(*(long *)(this_05 + 0x28) + 0x30) !=
                             *(long *)(this_06 + 0x28)) &&
                           (*(long *)(*(long *)(this_06 + 0x28) + 0x30) != *(long *)(this_05 + 0x28)
                           )) {
                          local_b0 = (SceneObject *)this_05;
                          pCStack_a8 = this_06;
                    /* catch() { ... } // from try @ 00566128 with catch @ 005661a8 */
                    /* catch() { ... } // from try @ 00565eb0 with catch @ 005661ac */
                    /* catch() { ... } // from try @ 00565e9c with catch @ 005661b4 */
                    /* catch() { ... } // from try @ 00565ec4 with catch @ 005661b8
                       catch() { ... } // from try @ 00565f60 with catch @ 005661b8 */
                          local_7c = CollisionPairSet::RegisterCollision
                                               ((CollisionPairSet *)(this + 0x130),this_05,this_06);
                          local_7c = local_7c & 1;
                          SceneObject::HandleMessage(*(SceneObject **)(this_05 + 0x28),7,&local_b0);
                          uVar10 = local_98;
                          uStack_a0 = *(undefined8 *)(*(SceneObject **)(this_06 + 0x28) + 0x70);
                          local_88 = CONCAT44(-(float)((ulong)local_88 >> 0x20),-(float)local_88);
                          local_98 = uStack_90;
                          uStack_90 = uVar10;
                          local_b0 = (SceneObject *)this_06;
                          pCStack_a8 = this_05;
                          SceneObject::HandleMessage(*(SceneObject **)(this_06 + 0x28),7,&local_b0);
                          this_05[0x88] = (CollisionShapeComponent)0x1;
                          this_06[0x88] = (CollisionShapeComponent)0x1;
                        }
                      }
                    }
                  }
                  iVar11 = iVar11 + -1;
                  iVar12 = iVar12 + 1;
                } while (iVar11 != -1);
              }
              iVar11 = *(int *)this_02;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < iVar11);
        }
        if ((DAT_00683734 < param_1) && (*(int *)(this + 0x20) < 1)) {
          CollisionPairSet::Purge((CollisionPairSet *)(this + 0x130));
        }
        ComponentManager::Purge((ComponentManager *)(this + 0x180));
        if (*(long *)(lVar8 + 0x28) == local_78) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pSVar26 = *(SceneObject **)(pSVar24 + 0x10);
      if (pSVar26[0xe8] != (SceneObject)0x0) {
        pcVar17 = *(code **)(*(long *)this + 0x30);
                    /* try { // try from 00565db4 to 00665dbb has its CatchHandler @ 00565dc0 */
        if (pSVar26 != (SceneObject *)0x0) {
                    /* try { // try from 00565dbc to 00665def has its CatchHandler @ 005656f4 */
                    /* catch() { ... } // from try @ 00565db4 with catch @ 00565dc0 */
                    /* catch() { ... } // from try @ 00565bf4 with catch @ 00565dc4
                       catch() { ... } // from try @ 00565c74 with catch @ 00565dc4 */
          *(int *)(pSVar26 + 8) = *(int *)(pSVar26 + 8) + 1;
        }
        local_b0 = pSVar26;
                    /* catch() { ... } // from try @ 005657ec with catch @ 00565dd0 */
        (*pcVar17)(this,&local_b0,0);
        goto LAB_00565dd8;
      }
      if (*(int *)(pSVar26 + 0xec) != *(int *)(this + 0x310)) break;
      pSVar24 = *(Scene **)pSVar24;
    }
    SceneObject::HandleMessage(pSVar26,6,(void *)0x0);
    pSVar26[0xf0] = (SceneObject)0x0;
    if (*(long *)(*(long *)(pSVar26 + 0x50) + -0x18) == 0) {
      pcVar17 = *(code **)(*(long *)this + 0x30);
                    /* try { // try from 00565eb0 to 00665ec3 has its CatchHandler @ 005661ac */
      *(int *)(pSVar26 + 8) = *(int *)(pSVar26 + 8) + 1;
      local_b0 = pSVar26;
                    /* try { // try from 00565ec4 to 00665edf has its CatchHandler @ 005661b8 */
      (*pcVar17)(this,&local_b0,0);
LAB_00565dd8:
                    /* catch() { ... } // from try @ 00565728 with catch @ 00565ddc */
      if ((local_b0 != (SceneObject *)0x0) &&
         (iVar11 = *(int *)(local_b0 + 8), *(int *)(local_b0 + 8) = iVar11 + -1, iVar11 + -1 == 0))
      {
                    /* try { // try from 00565df0 to 00665e9b has its CatchHandler @ 00565df0
                       catch() { ... } // from try @ 00565df0 with catch @ 00565df0
                       catch() { ... } // from try @ 00566028 with catch @ 00565df0
                       catch() { ... } // from try @ 005661a4 with catch @ 00565df0 */
        (**(code **)(*(long *)local_b0 + 8))();
      }
    }
    else if (pSVar26[0xe8] != (SceneObject)0x0) {
      pcVar17 = *(code **)(*(long *)this + 0x30);
      *(int *)(pSVar26 + 8) = *(int *)(pSVar26 + 8) + 1;
      local_b0 = pSVar26;
      (*pcVar17)(this,&local_b0,0);
      goto LAB_00565dd8;
    }
    pSVar23 = *(Scene **)pSVar24;
    FUN_0062a9c8(pSVar24);
    plVar13 = *(long **)(pSVar24 + 0x10);
    if ((plVar13 != (long *)0x0) &&
       (iVar11 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar11, iVar11 == 0)) {
                    /* try { // try from 00565e9c to 00665eaf has its CatchHandler @ 005661b4 */
      (**(code **)(*plVar13 + 8))();
    }
                    /* catch() { ... } // from try @ 00565c44 with catch @ 00565d90 */
    operator_delete(pSVar24);
    pSVar24 = pSVar23;
  } while( true );
}


