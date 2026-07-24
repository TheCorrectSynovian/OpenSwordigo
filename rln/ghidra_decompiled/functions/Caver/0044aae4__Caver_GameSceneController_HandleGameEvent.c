/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044aae4
 * Function: Caver::GameSceneController::HandleGameEvent
 * Signature: undefined __thiscall HandleGameEvent(GameSceneController * this, GameEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&) */

void __thiscall
Caver::GameSceneController::HandleGameEvent(GameSceneController *this,GameEvent *param_1)

{
  intrusive_ptr *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  OverlayTextComponent *this_00;
  char *pcVar10;
  TransformControllerComponent *this_01;
  GameEvent *pGVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  SceneObject *pSVar17;
  int *piVar18;
  string *psVar19;
  long *plVar20;
  TargetFrame *this_02;
  long *plVar21;
  uint uVar22;
  GameSceneController *pGVar23;
  undefined *puVar24;
  undefined *local_90;
  long local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  SceneObject *local_70;
  undefined8 local_68;
  char acStack_5c [4];
  long local_58;
  
                    /* try { // try from 0044aaf0 to 0054aaff has its CatchHandler @ 0044cd60 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar9 = 0;
                    /* try { // try from 0044ab14 to 0054ab27 has its CatchHandler @ 0044d62c */
  switch(*(undefined4 *)param_1) {
  case 5:
    local_70 = *(SceneObject **)(param_1 + 0x68);
                    /* try { // try from 0044ab44 to 0054ab53 has its CatchHandler @ 0044cd58 */
    local_68 = *(SceneObject **)(param_1 + 0x70);
    if (local_68 != (SceneObject *)0x0) {
      *(long *)(local_68 + 8) = *(long *)(local_68 + 8) + 1;
    }
                    /* try { // try from 0044ab64 to 0054ab73 has its CatchHandler @ 0044d5c8 */
    EquipItem(this,(shared_ptr *)&local_70);
    break;
  default:
    goto switchD_0044ab38_caseD_6;
  case 7:
                    /* try { // try from 0044acb4 to 0054acc3 has its CatchHandler @ 0044cd48 */
    FUN_00666bb8(&local_70,"amount",&local_88);
    pGVar11 = (GameEvent *)
              std::
              _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      *)(param_1 + 0x38),(string *)&local_70);
    puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 0044acd8 to 0054aceb has its CatchHandler @ 0044d4f4 */
    if (param_1 + 0x40 == pGVar11) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(uint *)(pGVar11 + 0x28);
    }
                    /* try { // try from 0044ada4 to 0054adb3 has its CatchHandler @ 0044cd38 */
    if (local_70 + -0x18 != (SceneObject *)PTR_DAT_007e5de8) {
      pSVar17 = local_70 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *(int *)pSVar17;
        *(int *)pSVar17 = iVar12 + -1;
      }
      else {
        do {
                    /* try { // try from 0044b320 to 0054b32f has its CatchHandler @ 0044ccf0 */
          iVar12 = *(int *)pSVar17;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pSVar17,0x10);
          if (bVar7) {
            *(int *)pSVar17 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
                    /* try { // try from 0044b3dc to 0054b3eb has its CatchHandler @ 0044d018 */
        operator_delete(local_70 + -0x18);
      }
    }
    pSVar17 = operator_new(0x128);
                    /* try { // try from 0044adc4 to 0054add3 has its CatchHandler @ 0044d428 */
    SceneObject::SceneObject(pSVar17);
    this_00 = operator_new(0xd8);
    OverlayTextComponent::OverlayTextComponent(this_00);
    SceneObject::AddComponent(pSVar17,(Component *)this_00);
                    /* try { // try from 0044adec to 0054adfb has its CatchHandler @ 0044cd38 */
    GameInterfaceBuilder::TextGradient(DAT_0068ea18,1.0,DAT_0068ea1c,1.0);
    if (local_68 != (SceneObject *)0x0) {
                    /* try { // try from 0044ae10 to 0054ae23 has its CatchHandler @ 0044d424 */
      *(long *)(local_68 + 8) = *(long *)(local_68 + 8) + 1;
    }
    plVar20 = *(long **)(this_00 + 0xd0);
    *(SceneObject **)(this_00 + 200) = local_70;
    *(SceneObject **)(this_00 + 0xd0) = local_68;
    if ((plVar20 != (long *)0x0) &&
       (lVar14 = plVar20[1], plVar20[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* try { // try from 0044ae40 to 0054ae4f has its CatchHandler @ 0044cd30 */
      (**(code **)(*plVar20 + 0x10))(plVar20);
      lVar14 = plVar20[2];
      plVar20[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
                    /* try { // try from 0044ae60 to 0054ae6f has its CatchHandler @ 0044d3c0 */
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
    pSVar17 = local_68;
    if ((local_68 != (SceneObject *)0x0) &&
       (lVar14 = *(long *)(local_68 + 8), *(long *)(local_68 + 8) = lVar14 + -1, lVar14 + -1 == 0))
    {
                    /* try { // try from 0044ae88 to 0054ae97 has its CatchHandler @ 0044cd30 */
      (**(code **)(*(long *)local_68 + 0x10))(local_68);
      lVar14 = *(long *)(pSVar17 + 0x10);
      *(long *)(pSVar17 + 0x10) = lVar14 + -1;
      if (lVar14 + -1 == 0) {
                    /* try { // try from 0044aeac to 0054aebf has its CatchHandler @ 0044d3bc */
        (**(code **)(*(long *)pSVar17 + 0x18))(pSVar17);
      }
    }
    uVar2 = -uVar22;
    if (-1 < (int)uVar22) {
      uVar2 = uVar22;
    }
    local_90 = puVar6 + 0x18;
    pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (uVar2,acStack_5c);
    puVar24 = puVar6 + 0x18;
    if ((int)uVar22 < 0) {
                    /* try { // try from 0044aedc to 0054aeeb has its CatchHandler @ 0044cd28 */
      pcVar10 = pcVar10 + -1;
      *pcVar10 = '-';
      puVar24 = local_90;
    }
    FUN_00669e1c(&local_90,0,*(undefined8 *)(puVar24 + -0x18),pcVar10,
                 (long)acStack_5c - (long)pcVar10);
                    /* try { // try from 0044aefc to 0054af0b has its CatchHandler @ 0044d358 */
    FUN_0035a030(&local_88,&DAT_0069239d,&local_90);
    FUN_0066a528(&local_80,&local_88);
                    /* try { // try from 0044af24 to 0054af33 has its CatchHandler @ 0044cd28 */
    FUN_006677d4(&local_80,&DAT_0068eaaf,3);
    piVar1 = (intrusive_ptr *)(this + 0xd8);
    local_68 = (SceneObject *)((ulong)local_68._4_4_ << 0x20);
    local_70 = DAT_0068ea28;
                    /* try { // try from 0044af48 to 0054af5b has its CatchHandler @ 0044d354 */
    OverlayTextComponent::CombatTextFromObject
              (this_00,(string *)&local_80,piVar1,(Vector3 *)&local_70,DAT_0068ea20);
    if (local_80 + -3 != (long *)puVar6) {
      plVar20 = local_80 + -1;
                    /* try { // try from 0044b340 to 0054b34f has its CatchHandler @ 0044d080 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = (int)*plVar20;
        *(int *)plVar20 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = (int)*plVar20;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *(int *)plVar20 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(local_80 + -3);
      }
    }
                    /* try { // try from 0044af78 to 0054af87 has its CatchHandler @ 0044cd20 */
    if ((undefined *)(local_88 + -0x18) != puVar6) {
      piVar18 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0044b404 to 0054b413 has its CatchHandler @ 0044cce8 */
        iVar12 = *piVar18;
        *piVar18 = iVar12 + -1;
      }
      else {
        do {
                    /* try { // try from 0044b368 to 0054b377 has its CatchHandler @ 0044ccf0 */
          iVar12 = *piVar18;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar7) {
            *piVar18 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_88 + -0x18));
      }
    }
    if (local_90 + -0x18 != puVar6) {
      piVar18 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar18;
                    /* try { // try from 0044b428 to 0054b43b has its CatchHandler @ 0044d014 */
        *piVar18 = iVar12 + -1;
      }
      else {
        do {
                    /* try { // try from 0044b38c to 0054b39f has its CatchHandler @ 0044d07c */
          iVar12 = *piVar18;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar7) {
            *piVar18 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(local_90 + -0x18);
      }
    }
    lVar14 = *(long *)(this + 8);
                    /* try { // try from 0044af98 to 0054afa7 has its CatchHandler @ 0044d2f0 */
    if (*(int *)(lVar14 + 0xb8) < 99) {
      *(uint *)(lVar14 + 0xb4) = *(int *)(lVar14 + 0xb4) + uVar22;
      ExperienceBar::UpdateExperience(*(ExperienceBar **)(*(long *)(this + 0x30) + 0x218));
      lVar14 = *(long *)(this + 8);
                    /* try { // try from 0044afc0 to 0054afcf has its CatchHandler @ 0044cd20 */
      if ((0x62 < *(int *)(lVar14 + 0xb8)) ||
         (iVar12 = *(int *)(lVar14 + 0xb4),
         iVar8 = CharacterState::ExperiencePointsRequiredForLevel
                           ((CharacterState *)(lVar14 + 0x10),*(int *)(lVar14 + 0xb8) + 1),
         iVar12 < iVar8)) goto LAB_0044b0b8;
                    /* try { // try from 0044afe4 to 0054aff7 has its CatchHandler @ 0044d2ec */
      *(undefined4 *)(this + 0x17c) = 0x3f333333;
      pSVar17 = operator_new(0x128);
      SceneObject::SceneObject(pSVar17);
      *(int *)(pSVar17 + 8) = *(int *)(pSVar17 + 8) + 1;
      psVar19 = *(string **)(*(long *)(this + 0x20) + 0xa0);
                    /* try { // try from 0044b014 to 0054b023 has its CatchHandler @ 0044cd18 */
      local_70 = pSVar17;
      FUN_00666bb8(&local_88,"hiro_xp_whoosh",auStack_78);
                    /* try { // try from 0044b034 to 0054b043 has its CatchHandler @ 0044d288 */
      ObjectLibrary::TemplateForName(psVar19,SUB81(&local_88,0));
      SceneObject::InitWithTemplate(pSVar17,(intrusive_ptr *)&local_80);
                    /* try { // try from 0044b05c to 0054b06b has its CatchHandler @ 0044cd18 */
      if ((local_80 != (long *)0x0) &&
         (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
        (**(code **)(*local_80 + 8))();
      }
      if ((undefined *)(local_88 + -0x18) != puVar6) {
        piVar18 = (int *)(local_88 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar12 = *piVar18;
          *piVar18 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar18;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar12 < 1) {
          operator_delete((undefined *)(local_88 + -0x18));
        }
      }
                    /* try { // try from 0044b080 to 0054b093 has its CatchHandler @ 0044d284 */
      this_01 = (TransformControllerComponent *)
                SceneObject::ComponentWithInterface(local_70,(long)PTR_Interface_007e6a60);
      TransformControllerComponent::FollowObject(this_01,piVar1);
      SceneObject::AddChildObject(*(SceneObject **)piVar1,(intrusive_ptr *)&local_70);
                    /* try { // try from 0044b0b0 to 0054b0bf has its CatchHandler @ 0044cd10 */
      if ((local_70 == (SceneObject *)0x0) ||
         (iVar12 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar12 + -1, iVar12 + -1 != 0))
      goto LAB_0044b0b8;
      pcVar15 = *(code **)(*(long *)local_70 + 8);
      pSVar17 = local_70;
      goto LAB_0044ad80;
    }
    goto LAB_0044b0b8;
  case 10:
    plVar20 = *(long **)(param_1 + 0x68);
    if (plVar20 == (long *)0x0) {
      if (*(long *)(this + 0x170) != 0) {
        plVar20 = *(long **)(param_1 + 0x68);
        goto joined_r0x0044ad98;
      }
    }
    else {
      plVar21 = *(long **)(this + 0x170);
      if ((int)plVar20[1] == 0) {
                    /* try { // try from 0044ab8c to 0054ab9b has its CatchHandler @ 0044cd58 */
        (**(code **)(*plVar20 + 8))(plVar20);
      }
      if (plVar20 != plVar21) {
        plVar20 = *(long **)(param_1 + 0x68);
joined_r0x0044ad98:
        if (plVar20 != (long *)0x0) {
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 2;
        }
        pGVar23 = this + 0x170;
                    /* try { // try from 0044abb0 to 0054abc3 has its CatchHandler @ 0044d5c4 */
        plVar21 = *(long **)pGVar23;
        *(long **)pGVar23 = plVar20;
        if ((plVar21 != (long *)0x0) &&
           (iVar12 = (int)plVar21[1] + -1, *(int *)(plVar21 + 1) = iVar12, iVar12 == 0)) {
          (**(code **)(*plVar21 + 8))();
        }
                    /* try { // try from 0044abd8 to 0054abe7 has its CatchHandler @ 0044cd50 */
        if ((plVar20 != (long *)0x0) &&
           (iVar12 = (int)plVar20[1] + -1, *(int *)(plVar20 + 1) = iVar12, iVar12 == 0)) {
                    /* try { // try from 0044abf0 to 0054abff has its CatchHandler @ 0044d560 */
          (**(code **)(*plVar20 + 8))(plVar20);
        }
        lVar14 = SceneObject::ComponentWithInterface
                           (*(SceneObject **)pGVar23,(long)PTR_Interface_007e4ff0);
                    /* try { // try from 0044ac18 to 0054ac27 has its CatchHandler @ 0044cd50 */
        FUN_00666bb8(&local_70,"Unknown",&local_80);
        if (lVar14 == 0) {
          bVar7 = false;
          iVar12 = 0;
        }
        else {
          lVar16 = *(long *)(lVar14 + 0x80);
          plVar20 = *(long **)(lVar14 + 0x88);
          if (plVar20 == (long *)0x0) {
            if (lVar16 != 0) {
              plVar20 = (long *)0x0;
LAB_0044b0f8:
                    /* try { // try from 0044b0f8 to 0054b107 has its CatchHandler @ 0044cd10 */
              bVar7 = true;
              goto LAB_0044b0fc;
            }
LAB_0044b1c0:
            FUN_0066a528(&local_80,lVar14 + 0x78);
            FUN_0066a6a8(&local_70,&local_80);
                    /* try { // try from 0044b1e8 to 0054b1f7 has its CatchHandler @ 0044cd00 */
            if (local_80 + -3 != (long *)PTR_DAT_007e5de8) {
                    /* try { // try from 0044b4b0 to 0054cfcb has its CatchHandler @ 00447cc4 */
              plVar20 = local_80 + -1;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar12 = (int)*plVar20;
                *(int *)plVar20 = iVar12 + -1;
              }
              else {
                do {
                  iVar12 = (int)*plVar20;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar7) {
                    *(int *)plVar20 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if (iVar12 < 1) {
                operator_delete(local_80 + -3);
              }
            }
            bVar7 = false;
          }
          else {
            if (plVar20[1] == 0) {
                    /* try { // try from 0044ac3c to 0054ac4f has its CatchHandler @ 0044d55c */
              (**(code **)(*plVar20 + 0x10))(plVar20);
              lVar13 = plVar20[2];
              plVar20[2] = lVar13 + -1;
              if (lVar13 + -1 == 0) {
                (**(code **)(*plVar20 + 0x18))(plVar20);
              }
            }
            if (lVar16 == 0) goto LAB_0044b1c0;
                    /* try { // try from 0044ac6c to 0054ac7b has its CatchHandler @ 0044cd48 */
            lVar16 = *(long *)(lVar14 + 0x80);
            plVar20 = *(long **)(lVar14 + 0x88);
            if (plVar20 == (long *)0x0) goto LAB_0044b0f8;
            bVar7 = false;
            plVar20[1] = plVar20[1] + 1;
LAB_0044b0fc:
            FUN_0066a528(&local_80,lVar16 + 8);
            FUN_0066a6a8(&local_70,&local_80);
                    /* try { // try from 0044b11c to 0054b12f has its CatchHandler @ 0044d21c */
            if (local_80 + -3 != (long *)PTR_DAT_007e5de8) {
              plVar21 = local_80 + -1;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar12 = (int)*plVar21;
                *(int *)plVar21 = iVar12 + -1;
              }
              else {
                do {
                  iVar12 = (int)*plVar21;
                    /* try { // try from 0044b478 to 0054b487 has its CatchHandler @ 0044cfb0 */
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar4) {
                    *(int *)plVar21 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if (iVar12 < 1) {
                operator_delete(local_80 + -3);
              }
            }
            if ((!bVar7) && (lVar16 = plVar20[1], plVar20[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0044b14c to 0054b15b has its CatchHandler @ 0044cd08 */
              (**(code **)(*plVar20 + 0x10))(plVar20);
              lVar16 = plVar20[2];
              plVar20[2] = lVar16 + -1;
              if (lVar16 + -1 == 0) {
                    /* try { // try from 0044b16c to 0054b17b has its CatchHandler @ 0044d1b8 */
                (**(code **)(*plVar20 + 0x18))(plVar20);
              }
            }
            plVar20 = *(long **)(lVar14 + 0x88);
            if (plVar20 == (long *)0x0) {
              bVar7 = *(char *)(*(long *)(lVar14 + 0x80) + 0x10) != '\0';
            }
            else {
              bVar7 = *(char *)(*(long *)(lVar14 + 0x80) + 0x10) != '\0';
              if (plVar20[1] == 0) {
                    /* try { // try from 0044b194 to 0054b1a3 has its CatchHandler @ 0044cd08 */
                (**(code **)(*plVar20 + 0x10))(plVar20);
                lVar16 = plVar20[2];
                plVar20[2] = lVar16 + -1;
                if (lVar16 + -1 == 0) {
                    /* try { // try from 0044b1b8 to 0054b1cb has its CatchHandler @ 0044d1b4 */
                  (**(code **)(*plVar20 + 0x18))(plVar20);
                }
              }
            }
          }
          iVar12 = *(int *)(lVar14 + 0x90);
        }
                    /* try { // try from 0044b208 to 0054b217 has its CatchHandler @ 0044d150 */
        if (*(long *)(local_70 + -0x18) != 0) {
          TargetFrame::SetCharacterLevel
                    (*(TargetFrame **)(*(long *)(this + 0x30) + 0x208),
                     *(int *)(*(long *)(this + 8) + 0xb8));
                    /* try { // try from 0044b230 to 0054b23f has its CatchHandler @ 0044cd00 */
          TargetFrame::SetTargetInfo
                    (*(TargetFrame **)(*(long *)(this + 0x30) + 0x208),(string *)&local_70,iVar12,
                     bVar7);
          lVar14 = SceneObject::ComponentWithInterface
                             (*(SceneObject **)pGVar23,(long)PTR_Interface_007e7450);
                    /* try { // try from 0044b254 to 0054b267 has its CatchHandler @ 0044d14c */
          this_02 = *(TargetFrame **)(*(long *)(this + 0x30) + 0x208);
          if (lVar14 == 0) {
            TargetFrame::SetHealth(this_02,1.0);
          }
          else {
            FUN_00666bb8(&local_80,"health",&local_90);
            pGVar11 = (GameEvent *)
                      std::
                      _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                              *)(param_1 + 0x38),(string *)&local_80);
                    /* try { // try from 0044b284 to 0054b293 has its CatchHandler @ 0044ccf8 */
            if (param_1 + 0x40 == pGVar11) {
                    /* try { // try from 0044b2a4 to 0054b2b3 has its CatchHandler @ 0044d0e8 */
              iVar12 = 0;
            }
            else {
              iVar12 = *(int *)(pGVar11 + 0x28);
            }
            TargetFrame::SetHealth(this_02,(float)iVar12 / (float)*(int *)(lVar14 + 0x7c));
                    /* try { // try from 0044b2cc to 0054b2db has its CatchHandler @ 0044ccf8 */
            if (local_80 + -3 != (long *)PTR_DAT_007e5de8) {
              plVar20 = local_80 + -1;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar12 = (int)*plVar20;
                *(int *)plVar20 = iVar12 + -1;
              }
              else {
                do {
                  iVar12 = (int)*plVar20;
                    /* try { // try from 0044b4a0 to 0054b4af has its CatchHandler @ 0044cce0 */
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar7) {
                    *(int *)plVar20 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if (iVar12 < 1) {
                operator_delete(local_80 + -3);
              }
            }
          }
        }
        if (local_70 + -0x18 != (SceneObject *)PTR_DAT_007e5de8) {
          pSVar17 = local_70 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar12 = *(int *)pSVar17;
            *(int *)pSVar17 = iVar12 + -1;
          }
          else {
            do {
              iVar12 = *(int *)pSVar17;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pSVar17,0x10);
              if (bVar7) {
                *(int *)pSVar17 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
                    /* try { // try from 0044b3bc to 0054b3cb has its CatchHandler @ 0044cce8 */
            } while (cVar3 != '\0');
          }
          if (iVar12 < 1) {
                    /* try { // try from 0044b458 to 0054b467 has its CatchHandler @ 0044cce0 */
            operator_delete(local_70 + -0x18);
          }
        }
      }
    }
                    /* try { // try from 0044b2f0 to 0054b303 has its CatchHandler @ 0044d0e4 */
    TargetFrame::Show(*(TargetFrame **)(*(long *)(this + 0x30) + 0x208));
    uVar9 = 0;
    goto switchD_0044ab38_caseD_6;
  case 0xc:
    local_70 = *(SceneObject **)(*(long *)(this + 8) + 0x78);
    local_68 = *(SceneObject **)(*(long *)(this + 8) + 0x80);
    if (local_68 != (SceneObject *)0x0) {
      *(long *)(local_68 + 8) = *(long *)(local_68 + 8) + 1;
    }
                    /* try { // try from 0044ad08 to 0054ad17 has its CatchHandler @ 0044cd40 */
    HeroEquipmentManager::ApplyWeaponTrinket
              ((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)&local_70);
    break;
  case 0xd:
    local_70 = *(SceneObject **)(*(long *)(this + 8) + 0x88);
    local_68 = *(SceneObject **)(*(long *)(this + 8) + 0x90);
    if (local_68 != (SceneObject *)0x0) {
                    /* try { // try from 0044ad28 to 0054ad37 has its CatchHandler @ 0044d490 */
      *(long *)(local_68 + 8) = *(long *)(local_68 + 8) + 1;
    }
    HeroEquipmentManager::ApplyArmorTrinket
              ((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)&local_70);
    break;
  case 0xe:
                    /* try { // try from 0044ac8c to 0054ac9b has its CatchHandler @ 0044d4f8 */
    local_70 = *(SceneObject **)(*(long *)(this + 8) + 0x98);
    local_68 = *(SceneObject **)(*(long *)(this + 8) + 0xa0);
    if (local_68 != (SceneObject *)0x0) {
      *(long *)(local_68 + 8) = *(long *)(local_68 + 8) + 1;
    }
    HeroEquipmentManager::ApplyTrinketToSpells
              ((HeroEquipmentManager *)(this + 0x100),(shared_ptr *)&local_70);
  }
  pSVar17 = local_68;
                    /* try { // try from 0044ad50 to 0054ad5f has its CatchHandler @ 0044cd40 */
  if ((local_68 != (SceneObject *)0x0) &&
     (lVar14 = *(long *)(local_68 + 8), *(long *)(local_68 + 8) = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*(long *)local_68 + 0x10))(local_68);
    lVar14 = *(long *)(pSVar17 + 0x10);
    *(long *)(pSVar17 + 0x10) = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* try { // try from 0044ad74 to 0054ad87 has its CatchHandler @ 0044d48c */
      pcVar15 = *(code **)(*(long *)pSVar17 + 0x18);
LAB_0044ad80:
      (*pcVar15)(pSVar17);
    }
  }
LAB_0044b0b8:
  uVar9 = 1;
switchD_0044ab38_caseD_6:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
                    /* try { // try from 0044b0d0 to 0054b0df has its CatchHandler @ 0044d220 */
  return;
}


