/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dad60
 * Function: Caver::HealthBar::Update
 * Signature: undefined __thiscall Update(HealthBar * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::Update(float) */

void __thiscall Caver::HealthBar::Update(HealthBar *this,float param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  string *psVar6;
  undefined *puVar7;
  GUIAnimation *pGVar8;
  Vector2 *extraout_x1;
  Vector2 *extraout_x1_00;
  Vector2 *extraout_x1_01;
  Vector2 *extraout_x1_02;
  Vector2 *extraout_x1_03;
  Vector2 *extraout_x1_04;
  Vector2 *pVVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  long *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  GUIAnimation *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  fVar20 = DAT_0068ea20;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar10 = *(uint *)(this + 0x110);
  if (uVar10 - 1 < 2) {
    uVar14 = *(uint *)(this + 0x1ac);
    fVar19 = *(float *)(this + 0x1a8) + param_1;
    *(float *)(this + 0x1a8) = fVar19;
    if (((fVar20 < fVar19) && ((uVar14 & 1) == 0)) ||
       ((DAT_00684318 < fVar19 && ((int)uVar14 % 2 == 1)))) {
      uVar10 = uVar14 + 2;
                    /* catch() { ... } // from try @ 004dacfc with catch @ 004dadf8 */
                    /* catch() { ... } // from try @ 004dac00 with catch @ 004dadfc */
      if (-1 < (int)(uVar14 + 1)) {
        uVar10 = uVar14 + 1;
      }
      *(uint *)(this + 0x1ac) = (uVar14 + 1) - (uVar10 & 0xfffffffe);
      *(undefined4 *)(this + 0x1a8) = 0;
      psVar6 = (string *)AudioSystem::sharedSystem();
      FUN_00666bb8(&local_a0,"lowhealth",&local_78);
      AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
      if ((local_60 != (long *)0x0) &&
         (iVar13 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar13, iVar13 == 0)) {
        (**(code **)(*local_60 + 8))();
      }
      puVar7 = (undefined *)(CONCAT44(uStack_9c,local_a0) + -0x18);
      if (puVar7 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004db3b0 with catch @ 004db380 */
        piVar12 = (int *)(CONCAT44(uStack_9c,local_a0) + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004db39c to 005db3af has its CatchHandler @ 004db3d4 */
          iVar13 = *piVar12;
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar13 < 1) {
                    /* try { // try from 004db3b0 to 005db3d7 has its CatchHandler @ 004db380 */
          operator_delete(puVar7);
        }
      }
      pGVar8 = operator_new(0xc0);
      GUIAnimation::GUIAnimation(pGVar8);
      local_70 = pGVar8;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                ((shared_count *)&local_68,pGVar8);
      boost::detail::sp_enable_shared_from_this(&local_70,pGVar8,pGVar8);
      pGVar8 = local_70;
      local_78 = 0x3f6666663f666666;
      GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_78,extraout_x1);
      *(undefined4 *)(pGVar8 + 0x70) = local_a0;
      if (local_90 != (long *)0x0) {
        local_90[1] = local_90[1] + 1;
      }
      plVar15 = *(long **)(pGVar8 + 0x80);
      *(undefined8 *)(pGVar8 + 0x78) = uStack_98;
      *(long **)(pGVar8 + 0x80) = local_90;
      pVVar9 = extraout_x1_00;
      if ((plVar15 != (long *)0x0) &&
         (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar11 = plVar15[2];
        plVar15[2] = lVar11 + -1;
        pVVar9 = extraout_x1_01;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
          pVVar9 = extraout_x1_02;
        }
      }
      plVar15 = local_90;
      if ((local_90 != (long *)0x0) &&
         (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar11 = plVar15[2];
        plVar15[2] = lVar11 + -1;
        pVVar9 = extraout_x1_03;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
          pVVar9 = extraout_x1_04;
        }
      }
      pGVar8 = local_70;
      local_78 = NEON_fmov(0x3f800000,4);
      GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_78,pVVar9);
      *(undefined4 *)(pGVar8 + 0x88) = local_a0;
      if (local_90 != (long *)0x0) {
        local_90[1] = local_90[1] + 1;
      }
      plVar15 = *(long **)(pGVar8 + 0x98);
      *(undefined8 *)(pGVar8 + 0x90) = uStack_98;
      *(long **)(pGVar8 + 0x98) = local_90;
      if ((plVar15 != (long *)0x0) &&
         (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar11 = plVar15[2];
        plVar15[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      plVar15 = local_90;
      if ((local_90 != (long *)0x0) &&
         (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar11 = plVar15[2];
        plVar15[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      pGVar8 = local_70;
      local_78 = DAT_00692950;
      local_a8 = DAT_00692958;
      GUIAnimationCurve::GUIAnimationCurve
                ((GUIAnimationCurve *)&local_a0,(Vector2 *)&local_78,(Vector2 *)&local_a8);
      *(undefined8 *)(pGVar8 + 0x3c) = uStack_98;
      *(ulong *)(pGVar8 + 0x34) = CONCAT44(uStack_9c,local_a0);
      *(undefined8 *)(pGVar8 + 0x4c) = uStack_88;
      *(long **)(pGVar8 + 0x44) = local_90;
      *(undefined4 *)(local_70 + 0x5c) = 0x3e4ccccd;
      AddAnimationToHeart(this,0,(shared_ptr *)&local_70);
      if ((local_68 != (long *)0x0) &&
         (lVar11 = local_68[1], local_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_68 + 0x10))(local_68);
        lVar11 = local_68[2];
        local_68[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*local_68 + 0x18))(local_68);
        }
      }
      uVar10 = *(uint *)(this + 0x110);
    }
  }
  else {
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  fVar20 = *(float *)(this + 0x118);
  uVar14 = *(uint *)(this + 0x114);
  *(float *)(this + 0x118) = fVar20 + param_1;
  if (uVar14 == uVar10) {
LAB_004db110:
    bVar4 = false;
  }
  else {
    if (-1 < (int)uVar14) {
      if ((int)uVar14 <= (int)uVar10) {
        bVar4 = false;
        if ((fVar20 + param_1 <= DAT_00687988) || (bVar4 = false, (int)uVar10 <= (int)uVar14))
        goto LAB_004db154;
        *(undefined4 *)(this + 0x118) = 0;
        if ((uVar14 & 1) != 0) {
          uVar14 = uVar14 + 1;
          *(uint *)(this + 0x114) = uVar14;
        }
        if ((int)(uVar14 + 2) <= (int)uVar10) {
          uVar10 = uVar14 + 2;
        }
        *(uint *)(this + 0x114) = uVar10;
        if (-1 < (int)(uVar10 - 1)) {
          uVar10 = uVar10 - 1;
        }
        PopHeart(this,(int)uVar10 >> 1);
        psVar6 = (string *)AudioSystem::sharedSystem();
        FUN_00666bb8(&local_a0,"heart_get",&local_78);
        AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
        if ((local_b0 != (long *)0x0) &&
           (iVar13 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar13, iVar13 == 0)) {
          (**(code **)(*local_b0 + 8))();
        }
        puVar7 = (undefined *)(CONCAT44(uStack_9c,local_a0) + -0x18);
        if (puVar7 != PTR_DAT_007e5de8) {
          piVar12 = (int *)(CONCAT44(uStack_9c,local_a0) + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar13 = *piVar12;
            *piVar12 = iVar13 + -1;
          }
          else {
            do {
              iVar13 = *piVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar4) {
                *piVar12 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar13 < 1) {
                    /* catch() { ... } // from try @ 004db39c with catch @ 004db3d4 */
            operator_delete(puVar7);
          }
        }
        goto LAB_004db110;
      }
      do {
        uVar10 = uVar14;
        if (-1 < (int)(uVar14 - 1)) {
          uVar10 = uVar14 - 1;
        }
        ShatterHeart(this,(int)uVar10 >> 1);
        uVar10 = *(uint *)(this + 0x110);
        uVar14 = uVar14 - 2;
      } while ((int)uVar10 < (int)uVar14);
    }
    *(uint *)(this + 0x114) = uVar10;
    bVar4 = true;
  }
LAB_004db154:
  lVar11 = *(long *)(this + 400);
  if (*(long *)(this + 0x198) != lVar11) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      lVar2 = *(long *)(lVar11 + lVar17);
      plVar15 = (long *)((long *)(lVar11 + lVar17))[1];
      if (plVar15 != (long *)0x0) {
        plVar15[1] = plVar15[1] + 1;
      }
      if (lVar2 != 0) {
        GUIAnimation::Update(param_1);
        if (*(char *)(lVar2 + 0x54) != '\0') {
          puVar1 = (undefined8 *)(*(long *)(this + 400) + lVar17);
          plVar16 = (long *)puVar1[1];
          *puVar1 = 0;
          puVar1[1] = 0;
          if ((plVar16 != (long *)0x0) &&
             (lVar11 = plVar16[1], plVar16[1] = lVar11 + -1, lVar11 + -1 == 0)) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            lVar11 = plVar16[2];
            plVar16[2] = lVar11 + -1;
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar16 + 0x18))(plVar16);
            }
          }
        }
        bVar4 = true;
      }
      if ((plVar15 != (long *)0x0) &&
         (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar11 = plVar15[2];
        plVar15[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      lVar11 = *(long *)(this + 400);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while (uVar18 < (ulong)(*(long *)(this + 0x198) - lVar11 >> 4));
  }
  if (bVar4) {
    UpdateSprite(this);
  }
  ParticleSystem::Update(*(ParticleSystem **)(this + 0x180),param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


