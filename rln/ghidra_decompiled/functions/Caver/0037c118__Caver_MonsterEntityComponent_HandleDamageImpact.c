/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037c118
 * Function: Caver::MonsterEntityComponent::HandleDamageImpact
 * Signature: undefined __thiscall HandleDamageImpact(MonsterEntityComponent * this, DamageImpact * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact*) */

void __thiscall
Caver::MonsterEntityComponent::HandleDamageImpact
          (MonsterEntityComponent *this,DamageImpact *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  MonsterEntityComponent *this_00;
  FloatColor *pFVar8;
  SceneObject *pSVar9;
  OverlayTextComponent *pOVar10;
  GradientColor *pGVar11;
  HealthComponent *this_01;
  char *pcVar12;
  intrusive_ptr *piVar13;
  string *psVar14;
  long lVar15;
  GameEvent *pGVar16;
  ItemDropComponent *this_02;
  int *piVar17;
  MonsterDeathControllerComponent *this_03;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  FloatColor *extraout_x1_03;
  FloatColor *extraout_x1_04;
  FloatColor *extraout_x1_05;
  FloatColor *extraout_x1_06;
  ProgramState *pPVar18;
  long lVar19;
  GameEvent *pGVar20;
  uint uVar21;
  MonsterEntityComponent *this_04;
  long *plVar22;
  undefined *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ProgramState *pPVar27;
  float fVar28;
  long local_108;
  long local_100;
  long *local_f8;
  undefined *local_f0;
  long *local_e8 [2];
  long *local_d8 [2];
  GradientColor *local_c8;
  long *local_c0;
  undefined1 auStack_b8 [8];
  GradientColor *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ProgramState *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char acStack_7c [4];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(this + 400) != 0) && (*(int *)(*(long *)(this + 400) + 0x80) < 1))
  goto LAB_0037c4f4;
  this_04 = this + 0x78;
  this_00 = this;
  if (this[0xec] == (MonsterEntityComponent)0x0) {
    lVar7 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4ee0);
    this_00 = (MonsterEntityComponent *)0x0;
    if (lVar7 != 0) {
      this_00 = (MonsterEntityComponent *)
                SceneObject::ComponentWithInterface
                          (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4ee0);
      this_04 = this_00 + 0x78;
    }
  }
  if (*(PhysicsObjectState *)(this_04 + 0x74) != (PhysicsObjectState)0x0) {
    pPVar27 = *(ProgramState **)(param_1 + 0x18);
    if ((*(float *)(this_04 + 8) < _DAT_00684434) &&
       (fVar24 = *(float *)(this_04 + 0x14), 0.0 < fVar24)) {
      fVar25 = *(float *)(this_04 + 0x10);
      if (fVar25 * SUB84(pPVar27,0) + fVar24 * (float)((ulong)pPVar27 >> 0x20) < 0.0) {
        if (0.0 <= SUB84(pPVar27,0)) {
          fVar25 = -fVar25;
        }
        else {
          fVar24 = -fVar24;
        }
        local_90 = (ProgramState *)CONCAT44(fVar25,fVar24);
        Vector2::Rotate((Vector2 *)&local_90,DAT_006883bc);
        pPVar27 = local_90;
      }
    }
    fVar24 = SQRT(*(float *)(param_1 + 0x20));
    if (NAN(fVar24)) {
      fVar24 = sqrtf(*(float *)(param_1 + 0x20));
    }
    fVar24 = ((DAT_00688634 - fVar24) / DAT_00688634) * DAT_00687990;
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    local_90 = (ProgramState *)
               CONCAT44((float)((ulong)pPVar27 >> 0x20) * (fVar24 + DAT_00688638),
                        SUB84(pPVar27,0) * (fVar24 + DAT_00688638));
    this_00 = (MonsterEntityComponent *)
              PhysicsObjectState::setVelocity((PhysicsObjectState *)this_04,(Vector2 *)&local_90);
  }
  fVar24 = DAT_0068493c;
  if (param_1[0x24] != (DamageImpact)0x0) {
    uStack_88 = _UNK_006886c4;
    local_90 = _DAT_006886bc;
    FloatColor::FromHSLA((FloatColor *)this_00,DAT_0068863c,DAT_0068493c,0.5,1.0);
    pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)&local_b0,extraout_x1);
    fVar25 = DAT_00687988;
    FloatColor::FromHSLA(pFVar8,DAT_00687988,fVar24,DAT_006846c8,1.0);
    pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)&local_c8,extraout_x1_00);
    FloatColor::FromHSLA(pFVar8,DAT_00688640,fVar24,DAT_00688644,1.0);
    pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)local_d8,extraout_x1_01);
    FloatColor::FromHSLA(pFVar8,fVar25,fVar24,DAT_00684430,1.0);
    Color::FromFloatColor((Color *)local_e8,extraout_x1_02);
    pSVar9 = operator_new(0x128);
    SceneObject::SceneObject(pSVar9);
    pOVar10 = operator_new(0xd8);
    OverlayTextComponent::OverlayTextComponent(pOVar10);
    SceneObject::AddComponent(pSVar9,(Component *)pOVar10);
    pGVar11 = operator_new(0x18);
    GradientColor::GradientColor(pGVar11,4,(float *)&local_90,(Color *)&local_a0);
    local_b0 = pGVar11;
    boost::detail::shared_count::shared_count<Caver::GradientColor>
              ((shared_count *)&local_a8,pGVar11);
    boost::detail::sp_enable_shared_from_this(&local_b0,pGVar11,pGVar11);
    lVar7 = CONCAT44(uStack_a4,local_a8);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
    }
    plVar22 = *(long **)(pOVar10 + 0xd0);
    *(GradientColor **)(pOVar10 + 200) = local_b0;
    *(long *)(pOVar10 + 0xd0) = lVar7;
    if ((plVar22 != (long *)0x0) && (lVar7 = plVar22[1], plVar22[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      lVar7 = plVar22[2];
      plVar22[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_a4,local_a8);
    if ((plVar22 != (long *)0x0) && (lVar7 = plVar22[1], plVar22[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      lVar7 = plVar22[2];
      plVar22[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    FUN_00666bb8(&local_c8,"Blocked",local_e8);
    local_d8[0] = *(long **)(this + 0x28);
    if (local_d8[0] != (long *)0x0) {
      *(int *)(local_d8[0] + 1) = (int)local_d8[0][1] + 1;
    }
    local_a8 = 0;
    local_b0 = (GradientColor *)DAT_00688498;
    OverlayTextComponent::CombatTextFromObject
              (pOVar10,(string *)&local_c8,(intrusive_ptr *)local_d8,(Vector3 *)&local_b0,
               DAT_00684314);
    if ((local_d8[0] != (long *)0x0) &&
       (iVar6 = (int)local_d8[0][1] + -1, *(int *)(local_d8[0] + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_d8[0] + 8))();
    }
    if (local_c8 + -0x18 != (GradientColor *)PTR_DAT_007e5de8) {
      pGVar11 = local_c8 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *(int *)pGVar11;
        *(int *)pGVar11 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *(int *)pGVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pGVar11,0x10);
          if (bVar2) {
            *(int *)pGVar11 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_c8 + -0x18);
      }
    }
    goto LAB_0037c4f4;
  }
  this_01 = *(HealthComponent **)(this + 400);
  if (this_01 == (HealthComponent *)0x0) goto LAB_0037c4f4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this_01 + 0x80);
  pFVar8 = (FloatColor *)HealthComponent::TakeDamageWithImpact(this_01,param_1);
  fVar25 = DAT_00687988;
  fVar24 = DAT_0068493c;
  iVar6 = *(int *)(*(long *)param_1 + 0xa8);
  uVar21 = (uint)pFVar8;
  fVar28 = 0.0;
  if ((0 < iVar6) &&
     (fVar26 = (float)(int)(uVar21 - *(int *)(*(long *)param_1 + 0xa4)) / (float)iVar6, fVar28 = 0.0
     , 0.0 <= fVar26)) {
    fVar28 = fVar26;
  }
  fVar28 = fVar28 * DAT_00687998 + DAT_00687988;
  plStack_98 = _UNK_006886c4;
  local_a0 = _DAT_006886bc;
  FloatColor::FromHSLA(pFVar8,fVar28 + DAT_00688648,DAT_0068493c,0.5,1.0);
  pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)&local_90,extraout_x1_03);
  FloatColor::FromHSLA(pFVar8,fVar28,fVar24,DAT_006846c8,1.0);
  pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)&local_c8,extraout_x1_04);
  FloatColor::FromHSLA(pFVar8,fVar28 + DAT_0068864c,fVar24,DAT_00688644,1.0);
  pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)local_d8,extraout_x1_05);
  FloatColor::FromHSLA(pFVar8,fVar28,fVar24,DAT_00684430,1.0);
  Color::FromFloatColor((Color *)local_e8,extraout_x1_06);
  pGVar11 = operator_new(0x18);
  GradientColor::GradientColor(pGVar11,4,(float *)&local_a0,(Color *)&local_b0);
  local_c8 = pGVar11;
  boost::detail::shared_count::shared_count<Caver::GradientColor>((shared_count *)&local_c0,pGVar11)
  ;
  boost::detail::sp_enable_shared_from_this(&local_c8,pGVar11,pGVar11);
  puVar5 = PTR_DAT_007e5de8;
  local_d8[0] = (long *)(PTR_DAT_007e5de8 + 0x18);
  if ((int)uVar21 < 1) {
    FUN_0066918c(local_d8,"Immune",6);
  }
  else {
    local_e8[0] = local_d8[0];
    pcVar12 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (uVar21,acStack_7c);
    FUN_00669e1c(local_e8,0,*(undefined8 *)puVar5,pcVar12,(long)acStack_7c - (long)pcVar12);
    FUN_0066a6a8(local_d8,local_e8);
    if (local_e8[0] + -3 != (long *)puVar5) {
      plVar22 = local_e8[0] + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = (int)*plVar22;
        *(int *)plVar22 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = (int)*plVar22;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar2) {
            *(int *)plVar22 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_e8[0] + -3);
      }
    }
    iVar6 = fastrandom();
    uVar3 = iVar6 % 3;
    uVar21 = ~uVar3;
    if (-2 < (int)uVar3) {
      uVar21 = uVar3 + 1;
    }
    local_f0 = puVar5 + 0x18;
    pcVar12 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (uVar21,acStack_7c);
    puVar23 = puVar5 + 0x18;
    if ((int)uVar3 < -1) {
      pcVar12 = pcVar12 + -1;
      *pcVar12 = '-';
      puVar23 = local_f0;
    }
    FUN_00669e1c(&local_f0,0,*(undefined8 *)(puVar23 + -0x18),pcVar12,
                 (long)acStack_7c - (long)pcVar12);
    FUN_0035a030(local_e8,"impact_splurt",&local_f0);
    if (local_f0 + -0x18 != puVar5) {
      piVar17 = (int *)(local_f0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar17;
        *piVar17 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar2) {
            *piVar17 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_f0 + -0x18);
      }
    }
    piVar13 = (intrusive_ptr *)AudioSystem::sharedSystem();
    psVar14 = (string *)SoundLibrary::sharedLibrary();
    SoundLibrary::EffectForName(psVar14);
    AudioSystem::PlaySoundEffectAfterDelay(piVar13,0.0,1.0);
    if ((local_f8 != (long *)0x0) &&
       (iVar6 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_f8 + 8))();
    }
    if ((local_90 != (ProgramState *)0x0) &&
       (iVar6 = *(int *)(local_90 + 8), *(int *)(local_90 + 8) = iVar6 + -1, iVar6 + -1 == 0)) {
      (**(code **)(*(long *)local_90 + 8))();
    }
    if (local_e8[0] + -3 != (long *)puVar5) {
      plVar22 = local_e8[0] + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = (int)*plVar22;
        *(int *)plVar22 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = (int)*plVar22;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar2) {
            *(int *)plVar22 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_e8[0] + -3);
      }
    }
  }
  pSVar9 = operator_new(0x128);
  SceneObject::SceneObject(pSVar9);
  pOVar10 = operator_new(0xd8);
  OverlayTextComponent::OverlayTextComponent(pOVar10);
  SceneObject::AddComponent(pSVar9,(Component *)pOVar10);
  if (local_c0 != (long *)0x0) {
    local_c0[1] = local_c0[1] + 1;
  }
  plVar22 = *(long **)(pOVar10 + 0xd0);
  *(GradientColor **)(pOVar10 + 200) = local_c8;
  *(long **)(pOVar10 + 0xd0) = local_c0;
  if ((plVar22 != (long *)0x0) && (lVar7 = plVar22[1], plVar22[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    lVar7 = plVar22[2];
    plVar22[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  local_e8[0] = *(long **)(this + 0x28);
  if (local_e8[0] != (long *)0x0) {
    *(int *)(local_e8[0] + 1) = (int)local_e8[0][1] + 1;
  }
  uStack_88 = (long *)((ulong)uStack_88._4_4_ << 0x20);
  local_90 = DAT_00688498;
  OverlayTextComponent::CombatTextFromObject
            (pOVar10,(string *)local_d8,(intrusive_ptr *)local_e8,(Vector3 *)&local_90,DAT_00684314)
  ;
  if ((local_e8[0] != (long *)0x0) &&
     (iVar6 = (int)local_e8[0][1] + -1, *(int *)(local_e8[0] + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*local_e8[0] + 8))();
  }
  SceneObject::HandleMessage(*(SceneObject **)(*(long *)param_1 + 0x28),0xc,(void *)0x0);
  SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),10,(void *)0x0);
  if (*(int *)(*(long *)(this + 400) + 0x80) < 1) {
    lVar7 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4ff0);
    if (lVar7 != 0) {
      EntityInfoComponent::ClassTitle();
      lVar15 = FUN_00667c1c(&local_100,"Bat",0,3);
      if ((undefined *)(local_100 + -0x18) != puVar5) {
        piVar17 = (int *)(local_100 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar17;
          *piVar17 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar17;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar2) {
              *piVar17 = iVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete((undefined *)(local_100 + -0x18));
        }
      }
      if (lVar15 != -1) {
        EntityInfoComponent::ClassTitle();
        plVar22 = (long *)(local_108 + -0x18);
        lVar19 = *plVar22;
        if (plVar22 != (long *)puVar5) {
          piVar17 = (int *)(local_108 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar6 = *piVar17;
            *piVar17 = iVar6 + -1;
          }
          else {
            do {
              iVar6 = *piVar17;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar2) {
                *piVar17 = iVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar6 < 1) {
            operator_delete(plVar22);
          }
        }
        if (lVar15 == lVar19 + -3) {
          lVar15 = SceneObject::ComponentWithInterface
                             (*(SceneObject **)(*(long *)param_1 + 0x28),
                              (long)PTR_Interface_007e4fd0);
          lVar19 = SceneObject::ComponentWithInterface
                             (*(SceneObject **)(*(long *)param_1 + 0x28),
                              (long)PTR_Interface_007e7a68);
          if (lVar15 == 0) {
            if (lVar19 != 0) {
              FUN_00666bb8(&local_90,"bombabat",&local_f0);
              pGVar16 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_90,1);
              GameEvent::SendEvent(pGVar16);
              pPVar27 = local_90 + -0x18;
              if (pPVar27 != (ProgramState *)puVar5) {
                pPVar18 = local_90 + -8;
                if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0037d20c;
                do {
                  iVar6 = *(int *)pPVar18;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pPVar18,0x10);
                  if (bVar2) {
                    *(int *)pPVar18 = iVar6 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                goto LAB_0037d218;
              }
            }
          }
          else {
            FUN_00666bb8(&local_90,"blastabat",&local_f0);
            pGVar16 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_90,1);
            GameEvent::SendEvent(pGVar16);
            pPVar27 = local_90 + -0x18;
            if (pPVar27 != (ProgramState *)puVar5) {
              pPVar18 = local_90 + -8;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0037d20c:
                iVar6 = *(int *)pPVar18;
                *(int *)pPVar18 = iVar6 + -1;
              }
              else {
                do {
                  iVar6 = *(int *)pPVar18;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pPVar18,0x10);
                  if (bVar2) {
                    *(int *)pPVar18 = iVar6 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
LAB_0037d218:
              if (iVar6 < 1) {
                operator_delete(pPVar27);
              }
            }
          }
        }
      }
    }
    param_1[0x25] = (DamageImpact)0x1;
    if (*(long *)(this + 0x170) != 0) {
      Component::NewProgramStateForProgram((Program *)this);
      if (local_90 != (ProgramState *)0x0) {
        SceneObjectLib::PushSceneObject(local_90,*(SceneObject **)(this + 0x28));
        ProgramState::Execute(local_90,1);
      }
      plVar22 = uStack_88;
      if ((uStack_88 != (long *)0x0) &&
         (lVar15 = uStack_88[1], uStack_88[1] = lVar15 + -1, lVar15 + -1 == 0)) {
        (**(code **)(*uStack_88 + 0x10))(uStack_88);
        lVar15 = plVar22[2];
        plVar22[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
      }
    }
    this_02 = (ItemDropComponent *)
              SceneObject::ComponentWithInterface
                        (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e60a0);
    if (this_02 == (ItemDropComponent *)0x0) {
      this_02 = operator_new(0xb0);
      ItemDropComponent::ItemDropComponent(this_02);
      this_02[0x71] = (ItemDropComponent)0x1;
      SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_02);
    }
    ItemDropComponent::Trigger(this_02);
    if (this[0x198] != (MonsterEntityComponent)0x0) {
      if (lVar7 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)(lVar7 + 0x90);
      }
      lVar7 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
      if ((lVar7 != 0) &&
         (iVar6 = CharacterState::ExperiencePointsForKillingMonster
                            ((CharacterState *)(lVar7 + 0x10),iVar6,
                             *(int *)(*(long *)(this + 400) + 0x7c)), 0 < iVar6)) {
        pGVar16 = operator_new(0x68);
        *(undefined4 *)pGVar16 = 7;
        pGVar20 = pGVar16 + 0x10;
        *(undefined8 *)pGVar20 = 0;
        *(undefined8 *)(pGVar16 + 0x18) = 0;
        *(GameEvent **)(pGVar16 + 0x20) = pGVar20;
        *(GameEvent **)(pGVar16 + 0x28) = pGVar20;
        *(undefined8 *)(pGVar16 + 0x30) = 0;
        pGVar20 = pGVar16 + 0x40;
        *(undefined8 *)pGVar20 = 0;
        *(undefined8 *)(pGVar16 + 0x48) = 0;
        *(GameEvent **)(pGVar16 + 0x50) = pGVar20;
        *(GameEvent **)(pGVar16 + 0x58) = pGVar20;
        *(undefined8 *)(pGVar16 + 0x60) = 0;
        FUN_00666bb8(&local_90,"amount",&local_f0);
        piVar17 = (int *)std::
                         map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                       *)(pGVar16 + 0x38),(string *)&local_90);
        *piVar17 = iVar6;
        if (local_90 + -0x18 != (ProgramState *)puVar5) {
          pPVar27 = local_90 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar6 = *(int *)pPVar27;
            *(int *)pPVar27 = iVar6 + -1;
          }
          else {
            do {
              iVar6 = *(int *)pPVar27;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pPVar27,0x10);
              if (bVar2) {
                *(int *)pPVar27 = iVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar6 < 1) {
            operator_delete(local_90 + -0x18);
          }
        }
        GameEvent::SendEvent(pGVar16);
      }
    }
    psVar14 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
    FUN_00666bb8(local_e8,"monster_death",auStack_b8);
    ObjectLibrary::TemplateForName(psVar14,SUB81(local_e8,0));
    if (local_e8[0] + -3 == (long *)puVar5) {
LAB_0037cd6c:
      if (this[0x19a] == (MonsterEntityComponent)0x0) goto LAB_0037d04c;
LAB_0037cd74:
      if (local_90 == (ProgramState *)0x0) goto LAB_0037d04c;
      pSVar9 = operator_new(0x128);
      SceneObject::SceneObject(pSVar9);
      SceneObject::InitWithTemplate(pSVar9,(intrusive_ptr *)&local_90);
      lVar7 = *(long *)(this + 0x28);
      if (ABS(*(float *)(lVar7 + 0x70) - *(float *)(pSVar9 + 0x70)) <= DAT_00683488) {
        fVar24 = *(float *)(lVar7 + 0x74);
        if (DAT_00683488 < ABS(fVar24 - *(float *)(pSVar9 + 0x74))) goto LAB_0037cdec;
      }
      else {
        fVar24 = *(float *)(lVar7 + 0x74);
LAB_0037cdec:
        *(float *)(pSVar9 + 0x70) = *(float *)(lVar7 + 0x70);
        *(float *)(pSVar9 + 0x74) = fVar24;
        if (pSVar9[0xb4] == (SceneObject)0x0) {
          SceneObject::RegisterForWorldBoundsUpdate(pSVar9);
          pSVar9[0xb4] = (SceneObject)0x1;
          lVar7 = *(long *)(this + 0x28);
        }
      }
      *(undefined4 *)(pSVar9 + 0x78) = *(undefined4 *)(lVar7 + 0x78);
      this_03 = (MonsterDeathControllerComponent *)
                SceneObject::ComponentWithInterface(pSVar9,(long)PTR_Interface_007e6aa0);
      fVar24 = *(float *)(param_1 + 0x2c);
      if (fVar24 * fVar24 + *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
          *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
          *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) <= DAT_00683944) {
        local_e8[0] = *(long **)(this + 0x28);
        if (local_e8[0] != (long *)0x0) {
          *(int *)(local_e8[0] + 1) = (int)local_e8[0][1] + 1;
        }
        MonsterDeathControllerComponent::KillMonster(this_03,(intrusive_ptr *)local_e8);
        if ((local_e8[0] != (long *)0x0) &&
           (iVar6 = (int)local_e8[0][1] + -1, *(int *)(local_e8[0] + 1) = iVar6, iVar6 == 0)) {
          (**(code **)(*local_e8[0] + 8))();
        }
      }
      else {
        local_e8[0] = *(long **)(this + 0x28);
        if (local_e8[0] != (long *)0x0) {
          *(int *)(local_e8[0] + 1) = (int)local_e8[0][1] + 1;
        }
        MonsterDeathControllerComponent::SliceMonster
                  (this_03,(intrusive_ptr *)local_e8,(Vector4 *)(param_1 + 0x2c));
        if ((local_e8[0] != (long *)0x0) &&
           (iVar6 = (int)local_e8[0][1] + -1, *(int *)(local_e8[0] + 1) = iVar6, iVar6 == 0)) {
          (**(code **)(*local_e8[0] + 8))();
        }
      }
    }
    else {
      plVar22 = local_e8[0] + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = (int)*plVar22;
        *(int *)plVar22 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = (int)*plVar22;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar2) {
            *(int *)plVar22 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (0 < iVar6) goto LAB_0037cd6c;
      operator_delete(local_e8[0] + -3);
      if (this[0x19a] != (MonsterEntityComponent)0x0) goto LAB_0037cd74;
LAB_0037d04c:
      *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
    }
    if ((local_90 != (ProgramState *)0x0) &&
       (iVar6 = *(int *)(local_90 + 8), *(int *)(local_90 + 8) = iVar6 + -1, iVar6 + -1 == 0)) {
      (**(code **)(*(long *)local_90 + 8))();
    }
  }
  else {
    local_90 = (ProgramState *)CONCAT44(local_90._4_4_,0xff4b5078);
    EntityComponent::FlashModel((EntityComponent *)this,(Color *)&local_90,fVar25);
    if (*(long *)(this + 0x148) != 0) {
      Component::NewProgramStateForProgram((Program *)this);
      if (local_90 != (ProgramState *)0x0) {
        local_e8[0] = (long *)0x0;
        ProgramState::SetParentObject(local_90,(intrusive_ptr *)local_e8);
        if ((local_e8[0] != (long *)0x0) &&
           (iVar6 = (int)local_e8[0][1] + -1, *(int *)(local_e8[0] + 1) = iVar6, iVar6 == 0)) {
          (**(code **)(*local_e8[0] + 8))();
        }
        SceneObjectLib::PushSceneObject(local_90,*(SceneObject **)(this + 0x28));
        ProgramState::Execute(local_90,1);
      }
      plVar22 = uStack_88;
      if ((uStack_88 != (long *)0x0) &&
         (lVar7 = uStack_88[1], uStack_88[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*uStack_88 + 0x10))(uStack_88);
        lVar7 = plVar22[2];
        plVar22[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
      }
    }
  }
  if (local_d8[0] + -3 != (long *)puVar5) {
    plVar22 = local_d8[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar22;
      *(int *)plVar22 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar22;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *(int *)plVar22 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_d8[0] + -3);
    }
  }
  if ((local_c0 != (long *)0x0) && (lVar7 = local_c0[1], local_c0[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_c0 + 0x10))(local_c0);
    lVar7 = local_c0[2];
    local_c0[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_c0 + 0x18))(local_c0);
    }
  }
LAB_0037c4f4:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


