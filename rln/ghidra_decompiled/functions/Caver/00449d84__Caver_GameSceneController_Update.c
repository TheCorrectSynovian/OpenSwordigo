/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00449d84
 * Function: Caver::GameSceneController::Update
 * Signature: undefined __thiscall Update(GameSceneController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0044a178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameSceneController::Update(float) */

void __thiscall Caver::GameSceneController::Update(GameSceneController *this,float param_1)

{
  float *pfVar1;
  long *plVar2;
  GameSceneController GVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  GameEvent *pGVar11;
  intrusive_ptr *piVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  float *pfVar16;
  int *piVar17;
  GameEvent *pGVar18;
  string *psVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 in_register_00005004;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  undefined1 auStack_b8 [8];
  float local_b0;
  float fStack_ac;
  long *local_a8;
  long *local_a0;
  long local_98;
  
                    /* try { // try from 00449d84 to 00549d97 has its CatchHandler @ 0044df1c */
  lVar7 = tpidr_el0;
                    /* try { // try from 00449db4 to 00549dc3 has its CatchHandler @ 0044ce08 */
  local_98 = *(long *)(lVar7 + 0x28);
  lVar15 = *(long *)(this + 0xd8);
  if (*(long *)(lVar15 + 0x20) == 0) {
    psVar19 = *(string **)(this + 0x20);
                    /* try { // try from 00449dd8 to 00549de7 has its CatchHandler @ 0044deb8 */
    FUN_00666bb8(&local_c8,"hero",&local_d0);
    Scene::ObjectWithIdentifier(psVar19);
                    /* try { // try from 00449e00 to 00549e0f has its CatchHandler @ 0044ce08 */
    if ((local_a0 != (long *)0x0) &&
       (iVar9 = (int)local_a0[1] + -1, *(int *)(local_a0 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*local_a0 + 8))(local_a0);
    }
                    /* try { // try from 00449e24 to 00549e37 has its CatchHandler @ 0044deb4 */
    puVar10 = (undefined *)(CONCAT44(fStack_c4,local_c8) + -0x18);
    if (puVar10 != PTR_DAT_007e5de8) {
      piVar17 = (int *)(CONCAT44(fStack_c4,local_c8) + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar17;
        *piVar17 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar17;
                    /* try { // try from 0044a514 to 0054a523 has its CatchHandler @ 0044cda8 */
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar5) {
            *piVar17 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar9 < 1) {
                    /* try { // try from 0044a538 to 0054a547 has its CatchHandler @ 0044d9d8 */
        operator_delete(puVar10);
      }
    }
    if (local_a0 == (long *)0x0) {
      AddHeroObjectToScene(this);
    }
    lVar15 = *(long *)(this + 0xd8);
  }
                    /* try { // try from 00449e54 to 00549e63 has its CatchHandler @ 0044ce00 */
  if ((((lVar15 != 0) && (*(long *)(this + 0xe8) != 0)) && (this[0x180] == (GameSceneController)0x0)
      ) && ((*(float *)(lVar15 + 0x74) < *(float *)(*(long *)(this + 0x20) + 0x94) &&
            (this[0x178] == (GameSceneController)0x0)))) {
                    /* try { // try from 00449e78 to 00549e87 has its CatchHandler @ 0044de50 */
    lVar15 = *(long *)(this + 0xf0);
    if (*(char *)(lVar15 + 0x78) == '\0') {
      uVar6 = *(int *)(lVar15 + 0x80) - 1;
      if ((int)*(uint *)(lVar15 + 0x7c) <= (int)uVar6) {
        uVar6 = *(uint *)(lVar15 + 0x7c);
      }
      *(uint *)(lVar15 + 0x80) = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    }
                    /* try { // try from 00449ea0 to 00549eaf has its CatchHandler @ 0044ce00 */
    *(undefined4 *)(lVar15 + 0x94) = 0x3fb33333;
    this[0x178] = (GameSceneController)0x1;
    pGVar11 = operator_new(0x68);
                    /* try { // try from 00449ec4 to 00549ed7 has its CatchHandler @ 0044de4c */
    *(undefined4 *)pGVar11 = 0xb;
    pGVar18 = pGVar11 + 0x10;
    *(undefined8 *)pGVar18 = 0;
    *(undefined8 *)(pGVar11 + 0x18) = 0;
    *(GameEvent **)(pGVar11 + 0x20) = pGVar18;
    *(GameEvent **)(pGVar11 + 0x28) = pGVar18;
    *(undefined8 *)(pGVar11 + 0x30) = 0;
    pGVar18 = pGVar11 + 0x40;
    *(undefined8 *)pGVar18 = 0;
    *(undefined8 *)(pGVar11 + 0x48) = 0;
    *(GameEvent **)(pGVar11 + 0x50) = pGVar18;
    *(GameEvent **)(pGVar11 + 0x58) = pGVar18;
    *(undefined8 *)(pGVar11 + 0x60) = 0;
    GameEvent::SendEvent(pGVar11);
  }
  fVar24 = DAT_00683734;
                    /* try { // try from 00449ef4 to 00549f03 has its CatchHandler @ 0044cdf8 */
                    /* try { // try from 00449f18 to 00549f27 has its CatchHandler @ 0044dde8 */
  if (((*(float *)(this + 0x17c) <= 0.0) || (0 < *(int *)(*(long *)(this + 0x20) + 0x20))) ||
     ((this[0x180] != (GameSceneController)0x0 ||
      (fVar21 = *(float *)(this + 0x17c) - param_1, *(float *)(this + 0x17c) = fVar21,
      fVar24 <= fVar21)))) {
LAB_0044a040:
    lVar15 = *(long *)(this + 0xd8);
  }
  else {
    lVar15 = *(long *)(this + 8);
    *(undefined4 *)(this + 0x17c) = 0xbf800000;
                    /* try { // try from 00449f40 to 00549f4f has its CatchHandler @ 0044cdf8 */
    if ((0x62 < *(int *)(lVar15 + 0xb8)) ||
       (iVar9 = *(int *)(lVar15 + 0xb4),
       iVar8 = CharacterState::ExperiencePointsRequiredForLevel
                         ((CharacterState *)(lVar15 + 0x10),*(int *)(lVar15 + 0xb8) + 1),
       iVar9 < iVar8)) goto LAB_0044a040;
    *(undefined4 *)(this + 0x17c) = 0x3f800000;
    ExperienceBar::UpdateExperience(*(ExperienceBar **)(*(long *)(this + 0x30) + 0x218));
                    /* try { // try from 00449f64 to 00549f77 has its CatchHandler @ 0044dde4 */
    pGVar11 = operator_new(0x68);
    *(undefined4 *)pGVar11 = 9;
    pGVar18 = pGVar11 + 0x10;
    *(undefined8 *)pGVar18 = 0;
    *(undefined8 *)(pGVar11 + 0x18) = 0;
    *(GameEvent **)(pGVar11 + 0x20) = pGVar18;
    *(GameEvent **)(pGVar11 + 0x28) = pGVar18;
    *(undefined8 *)(pGVar11 + 0x30) = 0;
    pGVar18 = pGVar11 + 0x40;
    *(undefined8 *)pGVar18 = 0;
    *(undefined8 *)(pGVar11 + 0x48) = 0;
    *(GameEvent **)(pGVar11 + 0x50) = pGVar18;
    *(GameEvent **)(pGVar11 + 0x58) = pGVar18;
    *(undefined8 *)(pGVar11 + 0x60) = 0;
                    /* try { // try from 00449f94 to 00549fa3 has its CatchHandler @ 0044cdf0 */
    GameEvent::SendEvent(pGVar11);
    piVar12 = (intrusive_ptr *)AudioSystem::sharedSystem();
    psVar19 = (string *)SoundLibrary::sharedLibrary();
                    /* try { // try from 00449fb8 to 00549fc7 has its CatchHandler @ 0044dd80 */
    FUN_00666bb8(&local_b0,"level_get",auStack_b8);
    SoundLibrary::EffectForName(psVar19);
    AudioSystem::PlaySoundEffect(piVar12,1.0);
                    /* try { // try from 00449fe0 to 00549fef has its CatchHandler @ 0044cdf0 */
    if ((local_a8 != (long *)0x0) &&
       (iVar9 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*local_a8 + 8))();
    }
                    /* try { // try from 0044a004 to 0054a017 has its CatchHandler @ 0044dd7c */
    plVar20 = (long *)CONCAT44(fStack_c4,local_c8);
    if ((plVar20 != (long *)0x0) &&
       (iVar9 = (int)plVar20[1] + -1, *(int *)(plVar20 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar20 + 8))();
    }
                    /* try { // try from 0044a02c to 0054a03b has its CatchHandler @ 0044cde8 */
    puVar10 = (undefined *)(CONCAT44(fStack_ac,local_b0) + -0x18);
    if (puVar10 == PTR_DAT_007e5de8) goto LAB_0044a040;
    piVar17 = (int *)(CONCAT44(fStack_ac,local_b0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar17;
      *piVar17 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar17;
                    /* try { // try from 0044a560 to 0054a56f has its CatchHandler @ 0044cda8 */
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (0 < iVar9) goto LAB_0044a040;
                    /* try { // try from 0044a584 to 0054a597 has its CatchHandler @ 0044d9d4 */
    operator_delete(puVar10);
    lVar15 = *(long *)(this + 0xd8);
  }
                    /* try { // try from 0044a048 to 0054a057 has its CatchHandler @ 0044dd18 */
  if ((lVar15 != 0) && (*(long *)(this + 0xe0) != 0)) {
    fStack_c4 = *(float *)(lVar15 + 0xa8);
    local_c8 = *(float *)(lVar15 + 0xa4) + DAT_00688018;
                    /* try { // try from 0044a070 to 0054a07f has its CatchHandler @ 0044cde8 */
    local_bc = *(undefined4 *)(lVar15 + 0xb0);
    local_c0 = (local_c8 + ((*(float *)(lVar15 + 0xa4) + *(float *)(lVar15 + 0xac)) - local_c8) +
               _DAT_0068782c) - local_c8;
                    /* try { // try from 0044a094 to 0054a0a7 has its CatchHandler @ 0044dd14 */
    if ((*(long *)(this + 0x170) == 0) ||
       (uVar13 = Rectangle::IntersectsWithRect
                           ((Rectangle *)(*(long *)(this + 0x170) + 0xa4),(Rectangle *)&local_c8),
       (uVar13 & 1) == 0)) {
      iVar9 = 0;
    }
    else {
                    /* try { // try from 0044a0bc to 0054a0cb has its CatchHandler @ 0044cde0 */
      iVar9 = -1;
                    /* try { // try from 0044a0d8 to 0054a0e7 has its CatchHandler @ 0044dcb0 */
      if (*(float *)(*(long *)(this + 0xd8) + 0x70) <= *(float *)(*(long *)(this + 0x170) + 0x70)) {
        iVar9 = 1;
      }
      plVar14 = (long *)ComponentManager::ComponentCollectionForInterface
                                  ((ComponentManager *)(*(long *)(this + 0x20) + 0x1e0),
                                   (long)PTR_Interface_007e4d78);
      plVar2 = (long *)plVar14[1];
      for (plVar20 = (long *)*plVar14; (plVar2 != plVar20 && (*(long *)(*plVar20 + 0x28) == 0));
          plVar20 = plVar20 + 1) {
                    /* try { // try from 0044a100 to 0054a10f has its CatchHandler @ 0044cde0 */
      }
LAB_0044a108:
      if (plVar2 != plVar20) {
        lVar15 = *plVar20;
        uVar13 = Rectangle::IntersectsWithRect
                           ((Rectangle *)(*(long *)(lVar15 + 0x28) + 0xa4),(Rectangle *)&local_c8);
                    /* try { // try from 0044a124 to 0054a137 has its CatchHandler @ 0044dcac */
        if ((uVar13 & 1) != 0) {
          iVar8 = -1;
          if (*(float *)(*(long *)(this + 0xd8) + 0x70) <=
              *(float *)(*(long *)(lVar15 + 0x28) + 0x70)) {
            iVar8 = 1;
          }
          if (iVar8 != iVar9) {
            iVar9 = 0;
            goto LAB_0044a190;
          }
        }
        do {
          plVar20 = plVar20 + 1;
                    /* try { // try from 0044a154 to 0054a163 has its CatchHandler @ 0044cdd8 */
          if (plVar20 == (long *)plVar14[1]) break;
        } while (*(long *)(*plVar20 + 0x28) == 0);
        goto LAB_0044a108;
      }
    }
LAB_0044a190:
    if (*(int *)(*(long *)(this + 0xe8) + 0x70) != iVar9) {
      iVar9 = 0;
    }
                    /* try { // try from 0044a1a0 to 0054a1af has its CatchHandler @ 0044cdd8 */
    *(int *)(*(long *)(this + 0xe0) + 0x248) = iVar9;
  }
  UpdateTarget(this);
  lVar15 = *(long *)(this + 0xd8);
  if ((lVar15 != 0) && ((*(uint *)(this + 0x38) | 2) == 2)) {
                    /* try { // try from 0044a1c4 to 0054a1d7 has its CatchHandler @ 0044dc44 */
    fVar24 = (float)*(int *)(*(long *)(this + 0xe8) + 0x70);
    fVar21 = fVar24 - *(float *)(this + 0x148);
    if (param_1 + param_1 <= ABS(fVar21)) {
      fVar24 = -1.0;
                    /* try { // try from 0044a1f4 to 0054a203 has its CatchHandler @ 0044cdd0 */
      if (0.0 <= fVar21) {
        fVar24 = 1.0;
      }
      fVar24 = *(float *)(this + 0x148) + (param_1 + param_1) * fVar24;
    }
    *(float *)(this + 0x148) = fVar24;
    fVar31 = *(float *)(lVar15 + 0x74);
    fVar29 = *(float *)(lVar15 + 0x78);
    fVar21 = *(float *)(lVar15 + 0x70);
                    /* try { // try from 0044a218 to 0054a227 has its CatchHandler @ 0044dbe0 */
    fVar24 = 25.0;
    Camera::VisibleAreaSizeAtDistance(*(float *)(this + 0x44));
    uVar26 = *(undefined8 *)(*(long *)(this + 0x20) + 0x90);
    fVar22 = local_c8 * 0.5;
    fVar28 = (float)((ulong)uVar26 >> 0x20);
    fVar27 = (float)uVar26;
    fVar32 = fVar27 + fVar22;
                    /* try { // try from 0044a240 to 0054a24f has its CatchHandler @ 0044cdd0 */
    fVar30 = fVar28 + fStack_c4 * 0.5;
    uVar26 = *(undefined8 *)(*(long *)(this + 0x20) + 0x98);
    fVar27 = (fVar27 + (float)uVar26) - fVar22;
    fVar28 = (fVar28 + (float)((ulong)uVar26 >> 0x20)) - fStack_c4 * 0.5;
    local_d0 = CONCAT44(fVar28,fVar27);
    if (fVar22 + fVar32 <= fVar21) {
      if (fVar27 - fVar22 < fVar21) {
        fVar25 = fVar27 - fVar21;
        goto LAB_0044a27c;
      }
      fVar23 = 1.0;
    }
    else {
                    /* try { // try from 0044a264 to 0054a277 has its CatchHandler @ 0044dbdc */
      fVar25 = fVar21 - fVar32;
LAB_0044a27c:
      fVar23 = fVar25 / fVar22;
      if (fVar25 / fVar22 <= 0.0) {
        fVar23 = 0.0;
      }
    }
                    /* try { // try from 0044a294 to 0054a2a3 has its CatchHandler @ 0044cdc8 */
    pfVar1 = &local_b0;
    fVar31 = fVar31 + 25.0;
    if (*(int *)(this + 0x38) == 0) {
      if (DAT_00684314 < *(float *)(this + 100)) {
                    /* try { // try from 0044a2b8 to 0054a2c7 has its CatchHandler @ 0044db78 */
        fVar22 = *(float *)(this + 100) + param_1 * DAT_006846cc;
        if (fVar22 <= DAT_00684314) {
          fVar22 = DAT_00684314;
        }
        *(float *)(this + 100) = fVar22;
      }
                    /* try { // try from 0044a2e0 to 0054a2ef has its CatchHandler @ 0044cdc8 */
      *(float *)(this + 0x54) = fVar23 * DAT_0068ea14 + (1.0 - fVar23) * _DAT_0068a084;
    }
    fVar22 = fVar23 * *(float *)(this + 0x148) * _DAT_0068937c;
    local_b0 = fVar32;
    fStack_ac = fVar30;
    iVar9 = CurrentDeviceType();
                    /* try { // try from 0044a304 to 0054a317 has its CatchHandler @ 0044db74 */
    if (iVar9 != 1) {
      fVar24 = 0.0;
    }
    fVar22 = fVar21 + fVar22;
    fVar24 = fVar31 + fVar24;
    if (fVar32 <= fVar22) {
      if (fVar27 < fVar22) {
        pfVar16 = (float *)&local_d0;
        goto LAB_0044a350;
      }
      fVar21 = fVar21 + *(float *)(this + 0x3c);
    }
    else {
                    /* try { // try from 0044a334 to 0054a343 has its CatchHandler @ 0044cdc0 */
      pfVar16 = &local_b0;
LAB_0044a350:
      fVar22 = *pfVar16;
      fVar21 = fVar22;
                    /* try { // try from 0044a358 to 0054a367 has its CatchHandler @ 0044db10 */
    }
    if (fVar24 < fVar30) {
LAB_0044a390:
      fVar24 = *(float *)((ulong)pfVar1 | 4);
      fVar31 = fVar24;
    }
    else {
                    /* try { // try from 0044a380 to 0054a38f has its CatchHandler @ 0044cdc0 */
      if (fVar28 < fVar24) {
        pfVar1 = (float *)&local_d0;
        goto LAB_0044a390;
      }
      fVar31 = fVar31 + *(float *)(this + 0x40);
                    /* try { // try from 0044a3a4 to 0054a3b7 has its CatchHandler @ 0044db0c */
    }
    *(float *)(this + 0x58) = fVar22;
    *(float *)(this + 0x5c) = fVar24;
    *(float *)(this + 0x60) = fVar29 + 0.0;
    *(float *)(this + 0x48) = fVar21;
    *(float *)(this + 0x4c) = fVar31;
    *(float *)(this + 0x50) = fVar29 + *(float *)(this + 0x44);
  }
  if (*(long *)(this + 0x158) != 0) {
    if (0.0 < *(float *)(this + 0x168)) {
      *(float *)(this + 0x168) = *(float *)(this + 0x168) - param_1;
                    /* try { // try from 0044a3d4 to 0054a3e3 has its CatchHandler @ 0044cdb8 */
      GVar3 = this[0x180];
      goto joined_r0x0044a4a0;
    }
                    /* try { // try from 0044a444 to 0054a457 has its CatchHandler @ 0044daa4 */
    CharControllerComponent::FinishCasting(*(CharControllerComponent **)(this + 0xe0));
    plVar20 = *(long **)(this + 0x160);
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x160) = 0;
    if ((plVar20 != (long *)0x0) &&
       (lVar15 = plVar20[1], plVar20[1] = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* try { // try from 0044a474 to 0054a483 has its CatchHandler @ 0044cdb0 */
      (**(code **)(*plVar20 + 0x10))(plVar20);
      lVar15 = plVar20[2];
      plVar20[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
                    /* try { // try from 0044a498 to 0054a4a7 has its CatchHandler @ 0044da40 */
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
  }
  GVar3 = this[0x180];
joined_r0x0044a4a0:
  if (GVar3 == (GameSceneController)0x0) {
    if ((*(long *)(this + 0xf0) != 0) &&
       (iVar9 = *(int *)(*(long *)(this + 0xf0) + 0x80),
       *(int *)(*(long *)(this + 8) + 0xa8) = iVar9, iVar9 < 1)) {
                    /* try { // try from 0044a3f8 to 0054a407 has its CatchHandler @ 0044daa8 */
      pGVar11 = operator_new(0x68);
      *(undefined4 *)pGVar11 = 3;
      pGVar18 = pGVar11 + 0x10;
      *(undefined8 *)pGVar18 = 0;
      *(undefined8 *)(pGVar11 + 0x18) = 0;
      *(GameEvent **)(pGVar11 + 0x20) = pGVar18;
      *(GameEvent **)(pGVar11 + 0x28) = pGVar18;
      *(undefined8 *)(pGVar11 + 0x30) = 0;
      pGVar18 = pGVar11 + 0x40;
      *(undefined8 *)pGVar18 = 0;
                    /* try { // try from 0044a420 to 0054a42f has its CatchHandler @ 0044cdb8 */
      *(undefined8 *)(pGVar11 + 0x48) = 0;
      *(GameEvent **)(pGVar11 + 0x50) = pGVar18;
      *(GameEvent **)(pGVar11 + 0x58) = pGVar18;
      *(undefined8 *)(pGVar11 + 0x60) = 0;
      GameEvent::SendEvent(pGVar11);
    }
    if (*(long *)(this + 0xf8) != 0) {
      *(undefined4 *)(*(long *)(this + 8) + 0xac) = *(undefined4 *)(*(long *)(this + 0xf8) + 0x74);
    }
  }
  CameraController::Update(param_1);
                    /* try { // try from 0044a4c0 to 0054a4cf has its CatchHandler @ 0044cdb0 */
  (**(code **)(**(long **)(this + 0x20) + 0x18))(CONCAT44(in_register_00005004,param_1));
  if (*(long *)(lVar7 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0044a4e4 to 0054a4f7 has its CatchHandler @ 0044da3c */
  return;
}


