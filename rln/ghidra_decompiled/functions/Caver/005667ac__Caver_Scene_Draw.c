/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005667ac
 * Function: Caver::Scene::Draw
 * Signature: undefined __thiscall Draw(Scene * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall Caver::Scene::Draw(Scene *this,RenderingContext *param_1,Matrix4 *param_2)

{
  ComponentManager *this_00;
  LightOverlay *this_01;
  Scene *pSVar1;
  Color *this_02;
  FastVector *pFVar2;
  SceneGrid *this_03;
  long *plVar3;
  long lVar4;
  Texture *pTVar5;
  byte bVar6;
  void **ppvVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  Matrix4 *pMVar11;
  WaterMeshComponent *this_04;
  Matrix4 *this_05;
  ulong uVar12;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  FloatColor *extraout_x1_03;
  FloatColor *pFVar13;
  long lVar14;
  long lVar15;
  Scene *pSVar16;
  float *pfVar17;
  int iVar18;
  Scene *pSVar19;
  long *plVar20;
  SpriteComponent *this_06;
  MagicExplosionComponent *this_07;
  long *plVar21;
  WeaponTrailComponent *this_08;
  ParticleEmitterComponent *this_09;
  ShadowComponent *this_10;
  Texture *pTVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  float local_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_194;
  void **local_190;
  long *local_188;
  int local_180 [2];
  PointLight *local_178;
  FastVector<boost::shared_ptr<Caver::PointLightGroup>> aFStack_170 [16];
  undefined8 local_160;
  void **local_120;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined4 local_f4;
  float local_f0;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
                    /* try { // try from 005667c4 to 006667d7 has its CatchHandler @ 00566cdc */
                    /* try { // try from 005667d8 to 006667e3 has its CatchHandler @ 00566c68 */
  lVar4 = tpidr_el0;
  lVar14 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005667e4 to 006668c3 has its CatchHandler @ 0056673c */
  C_Matrix4Mul((float *)param_2,(float *)(*(long *)(this + 0x240) + 0x6c),(float *)&local_e0);
  RenderingContext::SetProjectionMatrix(param_1,(Matrix4 *)&local_e0);
  lVar15 = *(long *)(this + 0x240);
  local_b0 = *(undefined8 *)(lVar15 + 0x5c);
  uStack_a8 = *(undefined8 *)(lVar15 + 100);
  local_c0 = *(undefined8 *)(lVar15 + 0x4c);
  uStack_b8 = *(undefined8 *)(lVar15 + 0x54);
  local_d0 = *(undefined8 *)(lVar15 + 0x3c);
  uStack_c8 = *(undefined8 *)(lVar15 + 0x44);
  local_e0 = *(undefined8 *)(lVar15 + 0x2c);
  uStack_d8 = *(undefined8 *)(lVar15 + 0x34);
  RenderingContext::SetCullFaceEnabled(param_1,true);
  RenderingContext::SetDepthTestEnabled(param_1,true);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_e0);
  if (*(int *)(this + 0x250) < 0) {
    glGetIntegerv(0xd31,this + 0x250);
  }
  PointLightManager::PointLightManager((PointLightManager *)local_180);
  this_00 = (ComponentManager *)(this + 0x1e0);
  local_188 = (long *)0x0;
  auVar33 = ComponentManager::ComponentCollectionForInterface(this_00,(long)PTR_Interface_007e5298);
  pFVar13 = auVar33._8_8_;
  plVar10 = auVar33._0_8_;
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
  if (plVar3 != plVar21) {
                    /* try { // try from 005668c4 to 006668cb has its CatchHandler @ 00566ae0 */
    auVar33 = NEON_fmov(0x3f800000,4);
    do {
      lVar15 = *plVar21;
                    /* try { // try from 005668e0 to 006668ef has its CatchHandler @ 00566b1c */
      if (*(int *)(lVar15 + 0x70) == 3) {
        fVar23 = *(float *)(*(long *)(lVar15 + 0x28) + 0x78);
        uVar31 = *(undefined8 *)(*(long *)(lVar15 + 0x28) + 0x70);
        Vector2::Vector2((Vector2 *)&local_190,(Vector3 *)(lVar15 + 0xa0));
        local_120 = local_190;
                    /* try { // try from 00566940 to 00666943 has its CatchHandler @ 00566ad0 */
        Vector2::Rotate((Vector2 *)&local_120,*(float *)(*(long *)(lVar15 + 0x28) + 0x80));
        local_120 = (void **)CONCAT44((float)((ulong)uVar31 >> 0x20) +
                                      (float)((ulong)local_120 >> 0x20),
                                      (float)uVar31 + SUB84(local_120,0));
        fStack_118 = fVar23 + *(float *)(lVar15 + 0xa8);
        uVar31 = *(undefined8 *)(lVar15 + 0x78);
        uStack_10c = *(undefined8 *)(lVar15 + 0x80);
        fStack_114 = (float)uVar31;
        uStack_110 = (undefined4)((ulong)uVar31 >> 0x20);
                    /* try { // try from 00566964 to 0066696f has its CatchHandler @ 00566a94 */
        local_f4 = *(undefined4 *)(lVar15 + 0x74);
        local_f0 = *(float *)(lVar15 + 0x9c) * *(float *)(*(long *)(lVar15 + 0x28) + 0x8c);
        local_ec = *(undefined8 *)(lVar15 + 0x94);
                    /* try { // try from 0056698c to 006669b3 has its CatchHandler @ 00566b14 */
        local_104 = auVar33._0_8_;
        uStack_fc = auVar33._8_8_;
        PointLightManager::AddLight((PointLightManager *)local_180,(PointLight *)&local_120);
        pFVar13 = extraout_x1_00;
      }
      else if (*(int *)(lVar15 + 0x70) == 4) {
        *(undefined4 *)(this + 0x278) = *(undefined4 *)(lVar15 + 0x74);
        Color::FromFloatColor((Color *)(lVar15 + 0x78),pFVar13);
        *(undefined4 *)(this + 0x27c) = local_194;
        pFVar13 = extraout_x1;
                    /* try { // try from 00566910 to 0066691b has its CatchHandler @ 00566a9c */
      }
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
                    /* try { // try from 005669b4 to 00666a73 has its CatchHandler @ 0056673c */
      } while (*(long *)(*plVar21 + 0x28) == 0);
    } while (plVar3 != plVar21);
  }
  this_01 = (LightOverlay *)(this + 600);
  LightOverlay::SetFrame(this_01,*(Rectangle **)(this + 0x240));
  LightOverlay::SetPointLights(this_01,local_178,local_180[0]);
  LightOverlay::UpdateWithCamera(this_01,*(Camera **)(this + 0x240));
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e5298);
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
  if (plVar3 == plVar21) {
    bVar6 = 0;
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    bVar6 = 0;
    auVar33 = NEON_fmov(0x3f800000,4);
    do {
      plVar20 = (long *)*plVar21;
      if ((int)plVar20[0xe] == 1) {
        if (*(int *)param_1 == 0) {
          fVar23 = *(float *)((long)plVar20 + 0x74);
          fVar29 = *(float *)(this + 0x308);
          fVar27 = 1.0 / (fVar23 + fVar29);
          fVar24 = fVar23 + fVar29 * 0.5;
          local_1a8 = CONCAT44(((float)((ulong)plVar20[0xf] >> 0x20) * fVar23 +
                               (float)((ulong)*(undefined8 *)(this + 0x2f8) >> 0x20) * fVar29) *
                               fVar27 * fVar24,
                               ((float)plVar20[0xf] * fVar23 +
                               (float)*(undefined8 *)(this + 0x2f8) * fVar29) * fVar27 * fVar24);
          uStack_1a0 = CONCAT44(((float)((ulong)plVar20[0x10] >> 0x20) * fVar23 +
                                (float)((ulong)*(undefined8 *)(this + 0x300) >> 0x20) * fVar29) *
                                fVar27 * fVar24,
                                ((float)plVar20[0x10] * fVar23 +
                                (float)*(undefined8 *)(this + 0x300) * fVar29) * fVar27 * fVar24);
          glLightModelfv(0xb53,&local_1a8);
        }
LAB_00566bdc:
        bVar6 = 1;
      }
      else if ((int)plVar20[0xe] == 2) {
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                    /* try { // try from 00566a74 to 00666a7b has its CatchHandler @ 00566a80 */
                    /* try { // try from 00566a7c to 00666abf has its CatchHandler @ 0056673c */
        plVar8 = plVar20;
                    /* catch() { ... } // from try @ 00566a74 with catch @ 00566a80 */
        if ((local_188 != (long *)0x0) &&
           (iVar18 = (int)local_188[1] + -1, *(int *)(local_188 + 1) = iVar18, iVar18 == 0)) {
          lVar15 = *local_188;
                    /* catch() { ... } // from try @ 00566964 with catch @ 00566a94 */
          local_188 = plVar20;
          (**(code **)(lVar15 + 8))();
          plVar8 = local_188;
        }
        local_188 = plVar8;
                    /* catch() { ... } // from try @ 00566910 with catch @ 00566a9c */
        if (*(int *)param_1 == 0) {
          fVar23 = *(float *)((long)plVar20 + 0x74);
          lVar15 = plVar20[0xf];
          lVar30 = plVar20[0x10];
          uVar31 = *(undefined8 *)(this + 0x2f8);
          uVar32 = *(undefined8 *)(this + 0x300);
          fVar24 = *(float *)(this + 0x308);
          iVar18 = iVar9 + 0x4000;
                    /* try { // try from 00566ac0 to 00666ac7 has its CatchHandler @ 00566acc */
          glEnable(iVar18);
                    /* catch() { ... } // from try @ 00566ac0 with catch @ 00566acc */
                    /* catch() { ... } // from try @ 00566940 with catch @ 00566ad0 */
          LightComponent::Direction();
                    /* catch() { ... } // from try @ 005668c4 with catch @ 00566ae0 */
          local_1ac = 0;
          local_1b8 = CONCAT44(-(float)((ulong)local_1c8 >> 0x20),-(float)local_1c8);
          local_1b0 = -local_1c0;
          glLightfv(iVar18,0x1203,&local_1b8);
                    /* try { // try from 00566b04 to 00666b0b has its CatchHandler @ 00566b10 */
                    /* catch() { ... } // from try @ 00566b04 with catch @ 00566b10 */
                    /* catch() { ... } // from try @ 0056698c with catch @ 00566b14 */
                    /* catch() { ... } // from try @ 005668e0 with catch @ 00566b1c */
          fVar27 = 1.0 / (fVar23 + fVar24);
          fVar29 = fVar23 + fVar24 * 0.5;
          local_1d8 = CONCAT44(((float)((ulong)lVar15 >> 0x20) * fVar23 +
                               (float)((ulong)uVar31 >> 0x20) * fVar24) * fVar27 * fVar29,
                               ((float)lVar15 * fVar23 + (float)uVar31 * fVar24) * fVar27 * fVar29);
                    /* try { // try from 00566b40 to 00666b4b has its CatchHandler @ 00566c28 */
          uStack_1d0 = CONCAT44(((float)((ulong)lVar30 >> 0x20) * fVar23 +
                                (float)((ulong)uVar32 >> 0x20) * fVar24) * fVar27 * fVar29,
                                ((float)lVar30 * fVar23 + (float)uVar32 * fVar24) * fVar27 * fVar29)
          ;
          glLightfv(iVar18,0x1201,&local_1d8);
          local_1f0 = auVar33._0_8_;
          uStack_1e8 = auVar33._8_8_;
          glLightfv(iVar18,0x1202,&local_1f0);
        }
                    /* try { // try from 00566b70 to 00666c23 has its CatchHandler @ 00566c5c */
        iVar9 = iVar9 + 1;
        goto LAB_00566bdc;
      }
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
    } while (plVar3 != plVar21);
  }
  RenderingContext::SetBlendingEnabled(param_1,false);
                    /* catch() { ... } // from try @ 00566b40 with catch @ 00566c28 */
  RenderingContext::SetLightingEnabled(param_1,true);
  RenderingContext::UseProgram(param_1,1);
                    /* try { // try from 00566c4c to 00666c53 has its CatchHandler @ 00566c58 */
  DrawGroundMeshes(this,param_1,(Matrix4 *)&local_e0,false);
                    /* try { // try from 00566c54 to 00666cdf has its CatchHandler @ 0056673c */
                    /* catch() { ... } // from try @ 00566c4c with catch @ 00566c58 */
                    /* catch() { ... } // from try @ 00566b70 with catch @ 00566c5c */
                    /* catch() { ... } // from try @ 005667d8 with catch @ 00566c68 */
  DrawModels(this,param_1,(Matrix4 *)&local_e0,false,false);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::SetDepthWriteEnabled(param_1,false);
  DrawGroundMeshes(this,param_1,(Matrix4 *)&local_e0,true);
  DrawModels(this,param_1,(Matrix4 *)&local_e0,false,true);
  RenderingContext::SetDepthWriteEnabled(param_1,true);
  RenderingContext::SetLightingEnabled(param_1,false);
  RenderingContext::SetBlendingEnabled(param_1,true);
                    /* catch() { ... } // from try @ 005667c4 with catch @ 00566cdc */
                    /* catch() { ... } // from try @ 00566d2c with catch @ 00566ce0
                       catch() { ... } // from try @ 00566f14 with catch @ 00566ce0
                       catch() { ... } // from try @ 005670e8 with catch @ 00566ce0 */
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,1);
  pMVar11 = (Matrix4 *)
            ComponentManager::ComponentCollectionForInterface(this_00,(long)PTR_Interface_007e7498);
  plVar3 = *(long **)(pMVar11 + 8);
                    /* try { // try from 00566d18 to 00666d2b has its CatchHandler @ 005671b4 */
  for (plVar21 = *(long **)pMVar11; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
  pSVar19 = this + 0x32c;
                    /* try { // try from 00566d2c to 00666d8f has its CatchHandler @ 00566ce0 */
  pSVar1 = this + 0x338;
  this_02 = (Color *)(this + 0x3f4);
  this_05 = pMVar11;
  if (plVar3 != plVar21) {
    auVar33 = NEON_fmov(0x3f800000,4);
    do {
      this_04 = (WaterMeshComponent *)*plVar21;
      lVar15 = *(long *)(*(long *)(this_04 + 0x28) + 0xf8);
      if (lVar15 == 0) {
        local_120 = *(void ***)pSVar19;
        fStack_118 = *(float *)(this + 0x334);
        pSVar16 = pSVar1;
      }
      else {
        local_120 = *(void ***)(lVar15 + 0x38);
        fStack_118 = *(float *)(lVar15 + 0x40);
        pSVar16 = (Scene *)(lVar15 + 0x44);
      }
      fStack_114 = *(float *)pSVar16;
                    /* try { // try from 00566d90 to 00666da3 has its CatchHandler @ 005670f8 */
      uVar31 = auVar33._0_8_;
      uVar32 = auVar33._8_8_;
      if (this[0x3f0] != (Scene)0x0) {
        uVar31 = *(undefined8 *)this_02;
        uVar32 = *(undefined8 *)(this + 0x3fc);
      }
      *(undefined8 *)(this_04 + 0xd8) = uVar32;
      *(undefined8 *)(this_04 + 0xd0) = uVar31;
                    /* try { // try from 00566da4 to 00666db7 has its CatchHandler @ 005670f0 */
      this_05 = (Matrix4 *)
                WaterMeshComponent::Draw
                          (this_04,param_1,(Rectangle *)&local_120,(Matrix4 *)&local_e0);
                    /* try { // try from 00566db8 to 00666dd3 has its CatchHandler @ 005670fc */
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == *(long **)(pMVar11 + 8)) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
    } while (plVar3 != plVar21);
  }
  if ((local_188 != (long *)0x0) && (param_1[0x60] != (RenderingContext)0x0)) {
    RenderingContext::SetBlendingEnabled(param_1,false);
    RenderingContext::UseProgram(param_1,0);
                    /* try { // try from 00566e0c to 00666e33 has its CatchHandler @ 00567048 */
    glClearStencil(0);
    glClear(0x400);
    glEnable(0xb90);
    glStencilFunc(0x207,0,0xffffffff);
    RenderingContext::SetDepthTestEnabled(param_1,true);
    glColorMask(0,0,0,0);
                    /* try { // try from 00566e54 to 00666e7b has its CatchHandler @ 005670fc */
    RenderingContext::SetDepthWriteEnabled(param_1,false);
    glCullFace(0x405);
    glStencilOp(0x1e00,0x1e00,0x1e02);
    plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                                (this_00,(long)PTR_Interface_007e5cb8);
    plVar3 = (long *)plVar10[1];
    for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
        plVar21 = plVar21 + 1) {
                    /* try { // try from 00566ea8 to 00666eaf has its CatchHandler @ 00567098 */
    }
LAB_00566ef0:
    if (plVar3 != plVar21) {
      ShadowVolumeComponent::Draw
                ((ShadowVolumeComponent *)*plVar21,param_1,(intrusive_ptr *)&local_188,
                 (Matrix4 *)&local_e0);
                    /* try { // try from 00566ec8 to 00666ecf has its CatchHandler @ 005670a0 */
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
      goto LAB_00566ef0;
    }
    glCullFace(0x404);
    glStencilOp(0x1e00,0x1e00,0x1e03);
                    /* try { // try from 00566f14 to 0066706b has its CatchHandler @ 00566ce0 */
    plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                                (this_00,(long)PTR_Interface_007e5cb8);
    plVar3 = (long *)plVar10[1];
    for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
        plVar21 = plVar21 + 1) {
    }
LAB_00566f88:
    if (plVar3 != plVar21) {
      ShadowVolumeComponent::Draw
                ((ShadowVolumeComponent *)*plVar21,param_1,(intrusive_ptr *)&local_188,
                 (Matrix4 *)&local_e0);
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
      goto LAB_00566f88;
    }
    glCullFace(0x405);
    glColorMask(1,1,1,1);
    glStencilFunc(0x201,0,0xffffffff);
    glStencilOp(0x1e00,0x1e00,0x1e00);
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
    RenderingContext::UseProgram(param_1,0);
    local_120 = (void **)CONCAT44(local_120._4_4_,0x50000000);
    RenderingContext::SetColor(param_1,(Color *)&local_120);
    plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                                (this_00,(long)PTR_Interface_007e5cb8);
    plVar3 = (long *)plVar10[1];
    for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
        plVar21 = plVar21 + 1) {
    }
LAB_00567078:
    if (plVar3 != plVar21) {
                    /* catch() { ... } // from try @ 00566e0c with catch @ 00567048 */
      ShadowVolumeComponent::Draw
                ((ShadowVolumeComponent *)*plVar21,param_1,(intrusive_ptr *)&local_188,
                 (Matrix4 *)&local_e0);
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
      goto LAB_00567078;
    }
    RenderingContext::SetDepthWriteEnabled(param_1,true);
    glBlendFunc(1,0x303);
                    /* catch() { ... } // from try @ 00566ea8 with catch @ 00567098
                       catch() { ... } // from try @ 00566eec with catch @ 00567098 */
    glDepthFunc(0x201);
                    /* catch() { ... } // from try @ 00566ec8 with catch @ 005670a0 */
    glStencilFunc(0x207,0,0xffffffff);
    this_05 = (Matrix4 *)glDisable(0xb90);
  }
  pfVar17 = *(float **)(this + 0x240);
  Matrix4::Ortho(this_05,*pfVar17,pfVar17[1] + pfVar17[3],*pfVar17 + pfVar17[2],pfVar17[1],-1.0,1.0)
  ;
                    /* try { // try from 005670e8 to 006671bf has its CatchHandler @ 00566ce0 */
  C_Matrix4Mul((float *)param_2,(float *)&local_160,(float *)&local_120);
                    /* catch() { ... } // from try @ 0056706c with catch @ 005670ec */
                    /* catch() { ... } // from try @ 00566da4 with catch @ 005670f0 */
  RenderingContext::SetProjectionMatrix(param_1,(Matrix4 *)&local_120);
                    /* catch() { ... } // from try @ 00566d90 with catch @ 005670f8 */
                    /* catch() { ... } // from try @ 00566db8 with catch @ 005670fc
                       catch() { ... } // from try @ 00566e54 with catch @ 005670fc */
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::SetDepthTestEnabled(param_1,false);
  LightOverlay::Draw(this_01,param_1);
  if (*(int *)param_1 == 0) {
    local_200 = 0;
    uStack_1f8 = 0;
    glLightModelfv(0xb53,&local_200);
  }
  if ((bool)(bVar6 & 0 < iVar9)) {
    iVar18 = 0;
    do {
      if (*(int *)param_1 == 0) {
        glDisable(iVar18 + 0x4000);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar9);
  }
  C_Matrix4Mul((float *)param_2,(float *)(*(long *)(this + 0x240) + 0x6c),(float *)&local_120);
  RenderingContext::SetProjectionMatrix(param_1,(Matrix4 *)&local_120);
  RenderingContext::SetCullFaceEnabled(param_1,true);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_e0);
  RenderingContext::SetLightingEnabled(param_1,false);
  RenderingContext::UseProgram(param_1,1);
                    /* catch() { ... } // from try @ 00566d18 with catch @ 005671b4 */
  RenderingContext::SetDepthTestEnabled(param_1,true);
  glDepthFunc(0x202);
                    /* try { // try from 005671c8 to 0066723b has its CatchHandler @ 005671c8
                       catch() { ... } // from try @ 005671c8 with catch @ 005671c8
                       catch() { ... } // from try @ 0056725c with catch @ 005671c8
                       catch() { ... } // from try @ 00567428 with catch @ 005671c8
                       catch() { ... } // from try @ 005674ec with catch @ 005671c8
                       catch() { ... } // from try @ 005676c4 with catch @ 005671c8 */
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  DrawModels(this,param_1,(Matrix4 *)&local_e0,true,false);
  glBlendFunc(1,0x303);
  glDepthFunc(0x201);
  pMVar11 = (Matrix4 *)RenderingContext::SetLightingEnabled(param_1,false);
  fVar23 = 1.0;
  Matrix4::Ortho(pMVar11,-*(float *)(*(long *)(this + 0x240) + 0xf0),1.0,
                 *(float *)(*(long *)(this + 0x240) + 0xf0),-1.0,-1.0,1.0);
                    /* try { // try from 0056723c to 0066724f has its CatchHandler @ 0056774c */
  C_Matrix4Mul((float *)param_2,(float *)&local_160,(float *)&local_120);
                    /* try { // try from 00567250 to 0066725b has its CatchHandler @ 005676d8 */
  RenderingContext::SetProjectionMatrix(param_1,(Matrix4 *)&local_120);
                    /* try { // try from 0056725c to 0066733b has its CatchHandler @ 005671c8 */
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::SetDepthTestEnabled(param_1,true);
  RenderingContext::SetBlendingEnabled(param_1,false);
  RenderingContext::UseProgram(param_1,1);
  if (this[0x3f0] == (Scene)0x0) {
    local_120 = (void **)CONCAT44(local_120._4_4_,0xffffffff);
  }
  else {
    Color::FromFloatColor(this_02,extraout_x1_01);
  }
  RenderingContext::SetColor(param_1,(Color *)&local_120);
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e52d8);
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
LAB_0056732c:
  if (plVar3 != plVar21) {
    (**(code **)(*(long *)*plVar21 + 0x108))((long *)*plVar21,param_1,*(undefined8 *)(this + 0x240))
    ;
    do {
      plVar21 = plVar21 + 1;
      if (plVar21 == (long *)plVar10[1]) break;
    } while (*(long *)(*plVar21 + 0x28) == 0);
    goto LAB_0056732c;
  }
                    /* try { // try from 0056733c to 00667343 has its CatchHandler @ 00567550 */
  C_Matrix4Mul((float *)param_2,(float *)(*(long *)(this + 0x240) + 0x6c),(float *)&local_120);
  RenderingContext::SetProjectionMatrix(param_1,(Matrix4 *)&local_120);
                    /* try { // try from 00567358 to 00667363 has its CatchHandler @ 0056758c */
  RenderingContext::SetCullFaceEnabled(param_1,false);
  RenderingContext::SetDepthTestEnabled(param_1,true);
  RenderingContext::SetDepthWriteEnabled(param_1,false);
  RenderingContext::SetBlendingEnabled(param_1,true);
                    /* try { // try from 00567384 to 0066738f has its CatchHandler @ 0056750c */
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,3);
  *(undefined4 *)(this + 0x3e0) = 0;
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e4828);
  plVar3 = (long *)plVar10[1];
                    /* try { // try from 005673b4 to 006673b7 has its CatchHandler @ 00567540 */
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
  pFVar2 = (FastVector *)(this + 0x3e0);
  this_03 = (SceneGrid *)(this + 0x3a0);
  pTVar5 = (Texture *)0x0;
                    /* try { // try from 005673d8 to 006673e3 has its CatchHandler @ 00567504 */
joined_r0x005673e8:
  if (plVar3 != plVar21) {
    this_10 = (ShadowComponent *)*plVar21;
    pTVar22 = pTVar5;
    if (*(long *)(this_10 + 0x70) != 0) {
      lVar15 = *(long *)(*(long *)(this_10 + 0x28) + 0xf8);
                    /* try { // try from 00567400 to 00667427 has its CatchHandler @ 00567584 */
      if (lVar15 == 0) {
        local_120 = *(void ***)pSVar19;
                    /* try { // try from 00567428 to 006674e3 has its CatchHandler @ 005671c8 */
        fStack_118 = *(float *)(this + 0x334);
        pSVar16 = pSVar1;
      }
      else {
        local_120 = *(void ***)(lVar15 + 0x38);
        fStack_118 = *(float *)(lVar15 + 0x40);
        pSVar16 = (Scene *)(lVar15 + 0x44);
      }
      fStack_114 = *(float *)pSVar16;
      uVar12 = Rectangle::IntersectsWithRect
                         ((Rectangle *)(*(long *)(this_10 + 0x28) + 0xa4),(Rectangle *)&local_120);
      if ((uVar12 & 1) != 0) {
        ShadowComponent::UpdateShadowBounds(this_10);
        local_120 = *(void ***)(this_10 + 0xac);
        fStack_118 = (float)*(undefined8 *)(this_10 + 0xb4);
        fStack_114 = (float)((ulong)*(undefined8 *)(this_10 + 0xb4) >> 0x20);
        iVar9 = SceneGrid::GetObjectsInBounds(this_03,(Rectangle *)&local_120,(void ***)&local_160);
        ShadowComponent::CreateShadowWithShapes
                  (this_10,(CollisionShapeComponent **)CONCAT44(local_160._4_4_,(float)local_160),
                   iVar9,pFVar2);
        pTVar22 = *(Texture **)(this_10 + 0xd8);
        if (pTVar22 != (Texture *)0x0) {
          *(int *)(pTVar22 + 8) = *(int *)(pTVar22 + 8) + 2;
        }
        if ((pTVar5 != (Texture *)0x0) &&
           (iVar9 = *(int *)(pTVar5 + 8), *(int *)(pTVar5 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
          (**(code **)(*(long *)pTVar5 + 8))(pTVar5);
        }
        if ((pTVar22 != (Texture *)0x0) &&
           (iVar9 = *(int *)(pTVar22 + 8), *(int *)(pTVar22 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
          (**(code **)(*(long *)pTVar22 + 8))(pTVar22);
        }
      }
    }
                    /* try { // try from 005674e4 to 006674eb has its CatchHandler @ 005674f0 */
    do {
      plVar21 = plVar21 + 1;
      pTVar5 = pTVar22;
                    /* try { // try from 005674ec to 0066752f has its CatchHandler @ 005671c8 */
      if (plVar21 == (long *)plVar10[1]) break;
                    /* catch() { ... } // from try @ 005674e4 with catch @ 005674f0 */
    } while (*(long *)(*plVar21 + 0x28) == 0);
    goto joined_r0x005673e8;
  }
  if (0 < *(int *)pFVar2) {
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_e0);
                    /* try { // try from 00567530 to 00667537 has its CatchHandler @ 0056753c */
    RenderingContext::BindTexture(param_1,pTVar5);
                    /* catch() { ... } // from try @ 00567530 with catch @ 0056753c */
                    /* catch() { ... } // from try @ 005673b4 with catch @ 00567540 */
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8074,3,0x1406,0x18,*(undefined8 *)(this + 1000));
                    /* catch() { ... } // from try @ 0056733c with catch @ 00567550 */
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8078,2,0x1406,0x18,*(long *)(this + 1000) + 0xc);
                    /* try { // try from 00567574 to 0066757b has its CatchHandler @ 00567580 */
                    /* catch() { ... } // from try @ 00567574 with catch @ 00567580 */
                    /* catch() { ... } // from try @ 00567400 with catch @ 00567584 */
                    /* catch() { ... } // from try @ 00567358 with catch @ 0056758c */
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8076,4,0x1401,0x18,*(long *)(this + 1000) + 0x14);
    RenderingContext::DrawArrays(param_1,4,0,*(int *)pFVar2);
  }
                    /* try { // try from 005675b0 to 006675bb has its CatchHandler @ 00567698 */
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e7038);
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
                    /* try { // try from 005675e0 to 00667693 has its CatchHandler @ 005676cc */
  if (plVar3 != plVar21) {
    uVar31 = NEON_fmov(0x3f800000,4);
    do {
      this_08 = (WeaponTrailComponent *)*plVar21;
      plVar20 = *(long **)(this_08 + 0x80);
      if (plVar20 == (long *)0x0) {
        RenderingContext::UseProgram(param_1,2);
        pFVar13 = extraout_x1_03;
      }
      else {
        if ((int)plVar20[1] == 0) {
          (**(code **)(*plVar20 + 8))();
        }
        RenderingContext::UseProgram(param_1,3);
        pFVar13 = extraout_x1_02;
      }
      uVar32 = uVar31;
      uVar26 = uVar31;
      if (this[0x3f0] != (Scene)0x0) {
        uVar26 = *(undefined8 *)this_02;
        uVar32 = *(undefined8 *)(this + 0x3fc);
      }
      *(undefined8 *)(this_08 + 200) = uVar32;
      *(undefined8 *)(this_08 + 0xc0) = uVar26;
      local_120 = (void **)CONCAT44((float)((ulong)*(undefined8 *)(this_08 + 0xb0) >> 0x20) *
                                    (float)((ulong)uVar26 >> 0x20),
                                    (float)*(undefined8 *)(this_08 + 0xb0) * (float)uVar26);
      fStack_118 = (float)*(undefined8 *)(this_08 + 0xb8) * (float)uVar32;
      fStack_114 = (float)((ulong)*(undefined8 *)(this_08 + 0xb8) >> 0x20) *
                   (float)((ulong)uVar32 >> 0x20);
      Color::FromFloatColor((Color *)&local_120,pFVar13);
      *(float *)(this_08 + 0x78) = (float)local_160;
      WeaponTrailComponent::Draw(this_08,param_1,(Matrix4 *)&local_e0);
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
                    /* catch() { ... } // from try @ 005675b0 with catch @ 00567698 */
      } while (*(long *)(*plVar21 + 0x28) == 0);
    } while (plVar3 != plVar21);
  }
  RenderingContext::SetBlendingEnabled(param_1,true);
                    /* try { // try from 005676bc to 006676c3 has its CatchHandler @ 005676c8 */
  RenderingContext::SetDefaultBlendFunc(param_1);
                    /* try { // try from 005676c4 to 0066774f has its CatchHandler @ 005671c8 */
                    /* catch() { ... } // from try @ 005676bc with catch @ 005676c8 */
                    /* catch() { ... } // from try @ 005675e0 with catch @ 005676cc */
  RenderingContext::UseProgram(param_1,2);
                    /* catch() { ... } // from try @ 00567250 with catch @ 005676d8 */
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e6330);
  ppvVar7 = DAT_006840e0;
  fVar24 = DAT_00683734;
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
joined_r0x0056770c:
  if (plVar3 != plVar21) {
    plVar20 = (long *)*plVar21;
    lVar15 = *(long *)(plVar20[5] + 0xf8);
    if (lVar15 == 0) {
                    /* catch() { ... } // from try @ 0056723c with catch @ 0056774c */
                    /* catch() { ... } // from try @ 00567808 with catch @ 00567750
                       catch() { ... } // from try @ 00567a08 with catch @ 00567750
                       catch() { ... } // from try @ 00567b94 with catch @ 00567750 */
      local_120 = *(void ***)pSVar19;
      fStack_118 = *(float *)(this + 0x334);
      pSVar16 = pSVar1;
    }
    else {
      local_120 = *(void ***)(lVar15 + 0x38);
      fStack_118 = *(float *)(lVar15 + 0x40);
      pSVar16 = (Scene *)(lVar15 + 0x44);
    }
    fStack_114 = *(float *)pSVar16;
    uVar12 = Rectangle::IntersectsWithRect((Rectangle *)(plVar20[5] + 0xa4),(Rectangle *)&local_120)
    ;
    if ((uVar12 & 1) != 0) {
      uVar12 = (**(code **)(*plVar20 + 0x108))(plVar20);
      if ((uVar12 & 1) == 0) {
        RenderingContext::UseProgram(param_1,2);
      }
      else {
        RenderingContext::UseProgram(param_1,3);
      }
      fVar25 = 1.0;
      fVar27 = fVar23;
      fVar29 = fVar23;
      fVar28 = fVar23;
      if (this[0x3f0] != (Scene)0x0) {
        fVar27 = *(float *)(this + 0x3f4);
        fVar28 = *(float *)(this + 0x3f8);
        fVar29 = *(float *)(this + 0x3fc);
        fVar25 = *(float *)(this + 0x400);
      }
                    /* try { // try from 005677f8 to 00667807 has its CatchHandler @ 00567c70 */
                    /* try { // try from 00567808 to 0066787b has its CatchHandler @ 00567750 */
      if ((((fVar24 <= ABS(fVar27 - *(float *)((long)plVar20 + 0x74))) ||
           (fVar24 <= ABS(fVar28 - *(float *)(plVar20 + 0xf)))) ||
          (fVar24 <= ABS(fVar29 - *(float *)((long)plVar20 + 0x7c)))) ||
         (fVar24 <= ABS(fVar25 - *(float *)(plVar20 + 0x10)))) {
        *(float *)((long)plVar20 + 0x74) = fVar27;
        *(float *)(plVar20 + 0xf) = fVar28;
        *(float *)((long)plVar20 + 0x7c) = fVar29;
        *(float *)(plVar20 + 0x10) = fVar25;
        *(undefined1 *)(plVar20 + 0xe) = 1;
      }
      local_120 = ppvVar7;
      fStack_118 = 0.0;
      (**(code **)(*plVar20 + 0x110))
                (plVar20,param_1,&local_e0,*(long *)(this + 0x240) + 0x10,&local_120);
    }
    do {
      plVar21 = plVar21 + 1;
      if (plVar21 == (long *)plVar10[1]) break;
    } while (*(long *)(*plVar21 + 0x28) == 0);
    goto joined_r0x0056770c;
  }
                    /* try { // try from 00567890 to 006678a3 has its CatchHandler @ 00567b9c */
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
                    /* try { // try from 005678a4 to 006678bf has its CatchHandler @ 00567ba8 */
  RenderingContext::UseProgram(param_1,3);
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e5968);
  ppvVar7 = DAT_006840e0;
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
  if (plVar3 != plVar21) {
    auVar33 = NEON_fmov(0x3f800000,4);
                    /* try { // try from 005678f8 to 0066791f has its CatchHandler @ 00567af4 */
    do {
      this_09 = (ParticleEmitterComponent *)*plVar21;
      lVar15 = *(long *)(*(long *)(this_09 + 0x28) + 0xf8);
      if (lVar15 == 0) {
        local_120 = *(void ***)pSVar19;
        fStack_118 = *(float *)(this + 0x334);
        pSVar16 = pSVar1;
      }
      else {
        local_120 = *(void ***)(lVar15 + 0x38);
        fStack_118 = *(float *)(lVar15 + 0x40);
        pSVar16 = (Scene *)(lVar15 + 0x44);
      }
      fStack_114 = *(float *)pSVar16;
                    /* try { // try from 00567940 to 00667967 has its CatchHandler @ 00567ba8 */
      uVar12 = Rectangle::IntersectsWithRect
                         ((Rectangle *)(*(long *)(this_09 + 0x28) + 0xa4),(Rectangle *)&local_120);
      if ((uVar12 & 1) != 0) {
        uVar31 = auVar33._0_8_;
        uVar32 = auVar33._8_8_;
        if (this[0x3f0] != (Scene)0x0) {
          uVar31 = *(undefined8 *)this_02;
          uVar32 = *(undefined8 *)(this + 0x3fc);
        }
        *(undefined8 *)(this_09 + 0x180) = uVar32;
        *(undefined8 *)(this_09 + 0x178) = uVar31;
        local_120 = ppvVar7;
        fStack_118 = 0.0;
        ParticleEmitterComponent::Draw
                  (this_09,param_1,(Matrix4 *)&local_e0,(Vector3 *)(*(long *)(this + 0x240) + 0x10),
                   (Vector3 *)&local_120);
      }
      do {
        plVar21 = plVar21 + 1;
                    /* try { // try from 0056799c to 006679a3 has its CatchHandler @ 00567b44 */
        if (plVar21 == (long *)plVar10[1]) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
                    /* try { // try from 005679bc to 006679c3 has its CatchHandler @ 00567b4c */
    } while (plVar3 != plVar21);
  }
  RenderingContext::UseProgram(param_1,1);
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e6550);
  plVar3 = (long *)plVar10[1];
                    /* try { // try from 005679e0 to 00667a07 has its CatchHandler @ 00567b44 */
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
LAB_00567a9c:
  if (plVar3 != plVar21) {
    this_06 = (SpriteComponent *)*plVar21;
    lVar15 = *(long *)(this_06 + 0x28);
    lVar30 = *(long *)(lVar15 + 0xf8);
    if (lVar30 == 0) {
      local_120 = *(void ***)pSVar19;
      fStack_118 = *(float *)(this + 0x334);
      pSVar16 = pSVar1;
    }
    else {
      local_120 = *(void ***)(lVar30 + 0x38);
      fStack_118 = *(float *)(lVar30 + 0x40);
      pSVar16 = (Scene *)(lVar30 + 0x44);
    }
    fStack_114 = *(float *)pSVar16;
    uVar12 = Rectangle::IntersectsWithRect((Rectangle *)(lVar15 + 0xa4),(Rectangle *)&local_120);
    if ((uVar12 & 1) != 0) {
      SpriteComponent::Draw(this_06,param_1,(Matrix4 *)&local_e0);
    }
    do {
      plVar21 = plVar21 + 1;
      if (plVar21 == (long *)plVar10[1]) break;
    } while (*(long *)(*plVar21 + 0x28) == 0);
    goto LAB_00567a9c;
  }
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e7450);
  plVar3 = (long *)plVar10[1];
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
  }
LAB_00567b18:
                    /* try { // try from 00567b18 to 00667b93 has its CatchHandler @ 00567b98 */
  if (plVar3 != plVar21) {
    HealthComponent::Draw((HealthComponent *)*plVar21,param_1,(Matrix4 *)&local_e0);
                    /* catch() { ... } // from try @ 005678f8 with catch @ 00567af4 */
    do {
      plVar21 = plVar21 + 1;
      if (plVar21 == (long *)plVar10[1]) break;
    } while (*(long *)(*plVar21 + 0x28) == 0);
    goto LAB_00567b18;
  }
  plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                              (this_00,(long)PTR_Interface_007e7a68);
  fVar23 = DAT_00683734;
  plVar3 = (long *)plVar10[1];
                    /* catch() { ... } // from try @ 0056799c with catch @ 00567b44
                       catch() { ... } // from try @ 005679e0 with catch @ 00567b44 */
  for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
      plVar21 = plVar21 + 1) {
                    /* catch() { ... } // from try @ 005679bc with catch @ 00567b4c */
  }
  if (plVar3 != plVar21) {
    fVar24 = 1.0;
    do {
      this_07 = (MagicExplosionComponent *)*plVar21;
      fVar25 = 1.0;
      fVar27 = fVar24;
      fVar29 = fVar24;
      fVar28 = fVar24;
      if (this[0x3f0] != (Scene)0x0) {
        fVar27 = *(float *)(this + 0x3f4);
        fVar29 = *(float *)(this + 0x3f8);
        fVar28 = *(float *)(this + 0x3fc);
                    /* try { // try from 00567b94 to 00667c7b has its CatchHandler @ 00567750 */
        fVar25 = *(float *)(this + 0x400);
      }
                    /* catch() { ... } // from try @ 00567b18 with catch @ 00567b98 */
                    /* catch() { ... } // from try @ 00567890 with catch @ 00567b9c */
                    /* catch() { ... } // from try @ 0056787c with catch @ 00567ba4 */
                    /* catch() { ... } // from try @ 005678a4 with catch @ 00567ba8
                       catch() { ... } // from try @ 00567940 with catch @ 00567ba8 */
      if ((((fVar23 <= ABS(fVar27 - *(float *)(this_07 + 0xc0))) ||
           (fVar23 <= ABS(fVar29 - *(float *)(this_07 + 0xc4)))) ||
          (fVar23 <= ABS(fVar28 - *(float *)(this_07 + 200)))) ||
         (fVar23 <= ABS(fVar25 - *(float *)(this_07 + 0xcc)))) {
        *(float *)(this_07 + 0xc0) = fVar27;
        *(float *)(this_07 + 0xc4) = fVar29;
        *(float *)(this_07 + 200) = fVar28;
        *(float *)(this_07 + 0xcc) = fVar25;
        MagicExplosionComponent::UpdateStarPolygonColor();
      }
      MagicExplosionComponent::Draw(this_07,param_1,(Matrix4 *)&local_e0);
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
      } while (*(long *)(*plVar21 + 0x28) == 0);
    } while (plVar3 != plVar21);
  }
  RenderingContext::SetDepthWriteEnabled(param_1,true);
  RenderingContext::SetDepthTestEnabled(param_1,false);
  if (this[0x358] != (Scene)0x0) {
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
                    /* catch() { ... } // from try @ 005677f8 with catch @ 00567c70 */
    RenderingContext::UseProgram(param_1,0);
                    /* try { // try from 00567c84 to 00667d0b has its CatchHandler @ 00567c84
                       catch(type#1 @ 00000000) { ... } // from try @ 00567c84 with catch @ 00567c84
                       catch(type#1 @ 00000000) { ... } // from try @ 00567d10 with catch @ 00567c84
                       catch(type#1 @ 00000000) { ... } // from try @ 00567df4 with catch @ 00567c84
                        */
    iVar9 = SceneGrid::GetObjectsInBounds(this_03,(Rectangle *)(this + 0x314),&local_120);
    if (0 < iVar9) {
      lVar15 = 0;
      do {
        plVar21 = local_120[lVar15];
        if (((char)plVar21[0x2f] != '\0') && ((char)plVar21[0x11] == '\0')) {
          local_160._0_4_ = -NAN;
          RenderingContext::SetColor(param_1,(Color *)&local_160);
          (**(code **)(*plVar21 + 0x110))(plVar21,param_1,&local_e0);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar9);
      if (0 < iVar9) {
        lVar15 = 0;
        do {
          plVar21 = local_120[lVar15];
                    /* try { // try from 00567d0c to 00667d0f has its CatchHandler @ 00567da8 */
                    /* try { // try from 00567d10 to 00667dcb has its CatchHandler @ 00567c84 */
          if (((char)plVar21[0x2f] != '\0') && ((char)plVar21[0x11] != '\0')) {
            local_160._0_4_ = -1.7014636e+38;
            RenderingContext::SetColor(param_1,(Color *)&local_160);
            (**(code **)(*plVar21 + 0x110))(plVar21,param_1,&local_e0);
            *(undefined1 *)(plVar21 + 0x11) = 0;
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar9);
      }
    }
    RenderingContext::SetMatrix(param_1,(Matrix4 *)(*(long *)(this + 0x240) + 0x2c));
    for (pSVar19 = *(Scene **)(this + 0x110); this + 0x110 != pSVar19; pSVar19 = *(Scene **)pSVar19)
    {
      local_160._0_4_ = 1.6852366e+22;
      RenderingContext::DrawRect
                (param_1,(Rectangle *)(*(long *)(pSVar19 + 0x10) + 0xa4),(Color *)&local_160,0.0);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00567d0c with catch @ 00567da8
                        */
    local_160._0_4_ = -3.0400062e+38;
    RenderingContext::SetColor(param_1,(Color *)&local_160);
                    /* try { // try from 00567dcc to 00667df3 has its CatchHandler @ 00567dfc */
    SceneGrid::Draw(this_03,param_1,(Matrix4 *)(*(long *)(this + 0x240) + 0x2c));
  }
  RenderingContext::SetBlendingEnabled(param_1,true);
  pMVar11 = (Matrix4 *)RenderingContext::SetDefaultBlendFunc(param_1);
  pfVar17 = *(float **)(this + 0x240);
  local_210 = *pfVar17;
  fStack_20c = pfVar17[1];
                    /* try { // try from 00567df4 to 00667dff has its CatchHandler @ 00567c84 */
  local_208 = pfVar17[2];
  fStack_204 = pfVar17[3];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00567dcc with catch @ 00567dfc
                        */
                    /* catch() { ... } // from try @ 00567f28 with catch @ 00567e18
                       catch() { ... } // from try @ 00567ff0 with catch @ 00567e18 */
  Matrix4::Ortho(pMVar11,local_210,fStack_20c + fStack_204,local_210 + local_208,fStack_20c,-1.0,1.0
                );
  C_Matrix4Mul((float *)param_2,(float *)&local_160,(float *)&local_120);
  RenderingContext::SetProjectionMatrix(param_1,(Matrix4 *)&local_120);
  if (this[0x404] == (Scene)0x0) {
    plVar10 = (long *)ComponentManager::ComponentCollectionForInterface
                                (this_00,(long)PTR_Interface_007e6b48);
    plVar3 = (long *)plVar10[1];
                    /* try { // try from 00567e70 to 00667e97 has its CatchHandler @ 00567f54 */
    for (plVar21 = (long *)*plVar10; (plVar3 != plVar21 && (*(long *)(*plVar21 + 0x28) == 0));
        plVar21 = plVar21 + 1) {
    }
LAB_00567ec8:
    if (plVar3 != plVar21) {
      (**(code **)(*(long *)*plVar21 + 0x108))
                ((long *)*plVar21,param_1,*(undefined8 *)(this + 0x240),&local_210);
      do {
        plVar21 = plVar21 + 1;
        if (plVar21 == (long *)plVar10[1]) break;
                    /* try { // try from 00567eb8 to 00667edf has its CatchHandler @ 00567f44 */
      } while (*(long *)(*plVar21 + 0x28) == 0);
      goto LAB_00567ec8;
    }
  }
  if ((pTVar5 != (Texture *)0x0) &&
     (iVar9 = *(int *)(pTVar5 + 8), *(int *)(pTVar5 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
    (**(code **)(*(long *)pTVar5 + 8))();
  }
                    /* try { // try from 00567f00 to 00667f27 has its CatchHandler @ 00567f3c */
  if ((local_188 != (long *)0x0) &&
     (iVar9 = (int)local_188[1] + -1, *(int *)(local_188 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_188 + 8))();
  }
  FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector(aFStack_170);
                    /* try { // try from 00567f28 to 00667f77 has its CatchHandler @ 00567e18 */
  if (local_178 != (PointLight *)0x0) {
    operator_delete__(local_178);
  }
                    /* catch() { ... } // from try @ 00567f00 with catch @ 00567f3c */
  if (*(long *)(lVar4 + 0x28) == lVar14) {
                    /* catch() { ... } // from try @ 00567eb8 with catch @ 00567f44 */
                    /* catch() { ... } // from try @ 00567e70 with catch @ 00567f54 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


