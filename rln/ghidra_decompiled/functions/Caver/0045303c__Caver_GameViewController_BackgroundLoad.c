/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045303c
 * Function: Caver::GameViewController::BackgroundLoad
 * Signature: undefined __thiscall BackgroundLoad(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::BackgroundLoad() */

void __thiscall Caver::GameViewController::BackgroundLoad(GameViewController *this)

{
  shared_ptr *psVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  Scene *pSVar8;
  undefined *puVar9;
  GameSceneController *pGVar10;
  undefined8 uVar11;
  GameSceneView *this_00;
  SceneObject *pSVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  GameState *this_01;
  code *pcVar17;
  string *psVar18;
  long *local_98;
  long local_90;
  long local_88;
  undefined1 auStack_80 [8];
  SceneObject *local_78;
  Scene *local_70;
  long *local_68;
  GameSceneController *local_60;
  long *local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar7 = (long *)OnlineController::SharedController();
  pcVar17 = *(code **)(*plVar7 + 0x120);
  FUN_0066a528(&local_60,*(long *)(this + 0xa8) + 0x158);
  (*pcVar17)(plVar7,&local_60);
  puVar5 = PTR_DAT_007e5de8;
  if (local_60 + -0x18 != (GameSceneController *)PTR_DAT_007e5de8) {
    pGVar10 = local_60 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pGVar10;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar6) {
          *(int *)pGVar10 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  pSVar8 = operator_new(0x408);
  Scene::Scene(pSVar8);
  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>
            ((shared_ptr<Caver::Scene> *)&local_70,pSVar8);
  RegisterSceneLibrary(this,local_70);
  uVar11 = *(undefined8 *)(this + 0xa8);
  lVar13 = *(long *)(this + 0xb0);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar7 = *(long **)(local_70 + 0x18);
  *(undefined8 *)(local_70 + 0x10) = uVar11;
  *(long *)(local_70 + 0x18) = lVar13;
  if ((plVar7 != (long *)0x0) && (lVar13 = plVar7[1], plVar7[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar13 = plVar7[2];
    plVar7[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  pSVar8 = local_70;
  FUN_0066a528(&local_50,*(long *)(this + 0xa8) + 0x158);
  FUN_00666bb8(&local_78,"scene",auStack_80);
  PathForResourceOfType((string *)&local_50,(string *)&local_78);
  Scene::LoadFromFile(pSVar8,(string *)&local_60);
  if (local_60 + -0x18 != (GameSceneController *)puVar5) {
    pGVar10 = local_60 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pGVar10;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar6) {
          *(int *)pGVar10 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  if (local_78 + -0x18 != (SceneObject *)puVar5) {
    pSVar12 = local_78 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pSVar12;
      *(int *)pSVar12 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pSVar12;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pSVar12,0x10);
        if (bVar6) {
          *(int *)pSVar12 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_78 + -0x18);
    }
  }
  puVar9 = (undefined *)(CONCAT44(fStack_4c,local_50) + -0x18);
  if (puVar9 != puVar5) {
    piVar14 = (int *)(CONCAT44(fStack_4c,local_50) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar6) {
          *piVar14 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(puVar9);
    }
  }
  pGVar10 = operator_new(0x188);
  GameSceneController::GameSceneController(pGVar10);
  local_60 = pGVar10;
  boost::detail::shared_count::shared_count<Caver::GameSceneController>
            ((shared_count *)&local_58,pGVar10);
  boost::detail::sp_enable_shared_from_this(&local_60,pGVar10,pGVar10);
  pGVar10 = *(GameSceneController **)(this + 200);
  plVar7 = *(long **)(this + 0xd0);
  *(GameSceneController **)(this + 200) = local_60;
  *(long **)(this + 0xd0) = local_58;
  local_60 = pGVar10;
  local_58 = plVar7;
  if ((plVar7 != (long *)0x0) && (lVar13 = plVar7[1], plVar7[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar13 = plVar7[2];
    plVar7[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  uVar11 = *(undefined8 *)(this + 0xa8);
  lVar13 = *(long *)(this + 0xb0);
  lVar16 = *(long *)(this + 200);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar7 = *(long **)(lVar16 + 0x10);
  *(undefined8 *)(lVar16 + 8) = uVar11;
  *(long *)(lVar16 + 0x10) = lVar13;
  if ((plVar7 != (long *)0x0) && (lVar13 = plVar7[1], plVar7[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar13 = plVar7[2];
    plVar7[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  this_01 = *(GameState **)(this + 0xa8);
  lVar13 = *(long *)(this + 200);
  FUN_0066a528(&local_60,this_01 + 0x158);
  uVar11 = GameState::StateForLevelWithName(this_01,(string *)&local_60,true);
  *(undefined8 *)(lVar13 + 0x18) = uVar11;
  psVar1 = (shared_ptr *)(this + 200);
  if (local_60 + -0x18 != (GameSceneController *)puVar5) {
    pGVar10 = local_60 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pGVar10;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar6) {
          *(int *)pGVar10 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  GameSceneController::InitWithScene(*(GameSceneController **)psVar1,(shared_ptr *)&local_70);
  Scene::FinishLoad(local_70);
  this_00 = operator_new(0x1a8);
  GameSceneView::GameSceneView(this_00);
  boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>
            ((shared_ptr<Caver::GameSceneView> *)&local_60,this_00);
  pGVar10 = *(GameSceneController **)(this + 0xd8);
  plVar7 = *(long **)(this + 0xe0);
  *(GameSceneController **)(this + 0xd8) = local_60;
  *(long **)(this + 0xe0) = local_58;
  local_60 = pGVar10;
  local_58 = plVar7;
  if ((plVar7 != (long *)0x0) && (lVar13 = plVar7[1], plVar7[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar13 = plVar7[2];
    plVar7[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  GameSceneView::InitWithSceneController(*(GameSceneView **)(this + 0xd8),psVar1);
  lVar13 = *(long *)(*(long *)(this + 0xd8) + 0x100);
  *(GameViewController **)(lVar13 + 0xf0) = this + 0x50;
  pGVar10 = *(GameSceneController **)(this + 200);
  *(long *)(pGVar10 + 0x30) = lVar13;
  FUN_0066a528(&local_60,*(long *)(this + 0xa8) + 0x160);
  GameSceneController::SpawnHeroAt(pGVar10,(string *)&local_60);
  if (local_60 + -0x18 != (GameSceneController *)puVar5) {
    pGVar10 = local_60 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pGVar10;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar6) {
          *(int *)pGVar10 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  plVar7 = *(long **)(*(long *)psVar1 + 0xd8);
  if (plVar7 == (long *)0x0) goto LAB_00453a08;
  if ((int)plVar7[1] == 0) {
    (**(code **)(*plVar7 + 8))();
  }
  FUN_0066a528(&local_88,*(long *)(this + 0xa8) + 0x188);
  plVar7 = (long *)(local_88 + -0x18);
  if (*plVar7 == 0) {
    bVar6 = false;
    if (plVar7 != (long *)puVar5) goto LAB_004535d8;
LAB_00453448:
    if (bVar6) {
LAB_0045344c:
      psVar18 = *(string **)(*(long *)(this + 200) + 0x20);
      FUN_0066a528(&local_60,*(long *)(this + 0xa8) + 0x188);
      Scene::ObjectWithIdentifier(psVar18);
      if (local_60 + -0x18 != (GameSceneController *)puVar5) {
        pGVar10 = local_60 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar15 = *(int *)pGVar10;
          *(int *)pGVar10 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *(int *)pGVar10;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
            if (bVar6) {
              *(int *)pGVar10 = iVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar15 < 1) {
          operator_delete(local_60 + -0x18);
        }
      }
      psVar18 = *(string **)(*(long *)(*(long *)(this + 200) + 0x20) + 0xa0);
      FUN_0066a528(&local_60,*(long *)(this + 0xa8) + 0x180);
      ObjectLibrary::TemplateForName(psVar18,SUB81(&local_60,0));
      if (local_60 + -0x18 == (GameSceneController *)puVar5) {
LAB_004534c4:
        if (local_78 != (SceneObject *)0x0) goto LAB_004534cc;
LAB_004537b0:
        if (local_98 != (long *)0x0) {
          pSVar12 = operator_new(0x128);
          SceneObject::SceneObject(pSVar12);
          *(int *)(pSVar12 + 8) = *(int *)(pSVar12 + 8) + 1;
          if ((local_78 != (SceneObject *)0x0) &&
             (iVar15 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar15 + -1,
             iVar15 + -1 == 0)) {
            lVar13 = *(long *)local_78;
            local_78 = pSVar12;
            (**(code **)(lVar13 + 8))();
            pSVar12 = local_78;
          }
          local_78 = pSVar12;
          SceneObject::InitWithTemplate(local_78,(intrusive_ptr *)&local_98);
          pSVar12 = local_78;
          FUN_0066a528(&local_60,*(long *)(this + 0xa8) + 0x188);
          SceneObject::SetIdentifier(pSVar12,(string *)&local_60);
          if (local_60 + -0x18 != (GameSceneController *)puVar5) {
            pGVar10 = local_60 + -8;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar15 = *(int *)pGVar10;
              *(int *)pGVar10 = iVar15 + -1;
            }
            else {
              do {
                iVar15 = *(int *)pGVar10;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
                if (bVar6) {
                  *(int *)pGVar10 = iVar15 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar15 < 1) {
              operator_delete(local_60 + -0x18);
            }
          }
          pSVar12 = local_78;
          lVar13 = *(long *)(*(long *)(*(long *)psVar1 + 0xe0) + 0x28);
          local_60 = *(GameSceneController **)(lVar13 + 0x70);
          local_58 = (long *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar13 + 0x78));
          Vector2::Vector2((Vector2 *)&local_50,(Vector3 *)&local_60);
          if ((DAT_00683488 < ABS(local_50 - *(float *)(pSVar12 + 0x70))) ||
             (DAT_00683488 < ABS(fStack_4c - *(float *)(pSVar12 + 0x74)))) {
            *(float *)(pSVar12 + 0x70) = local_50;
            *(float *)(pSVar12 + 0x74) = fStack_4c;
            if (pSVar12[0xb4] == (SceneObject)0x0) {
              SceneObject::RegisterForWorldBoundsUpdate(pSVar12);
              pSVar12[0xb4] = (SceneObject)0x1;
            }
          }
          *(undefined4 *)(pSVar12 + 0x78) = local_58._0_4_;
          (**(code **)(**(long **)(*(long *)psVar1 + 0x20) + 0x28))
                    (*(long **)(*(long *)psVar1 + 0x20),&local_78);
        }
      }
      else {
        pGVar10 = local_60 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar15 = *(int *)pGVar10;
          *(int *)pGVar10 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *(int *)pGVar10;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
            if (bVar6) {
              *(int *)pGVar10 = iVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar15) goto LAB_004534c4;
        operator_delete(local_60 + -0x18);
        if (local_78 == (SceneObject *)0x0) goto LAB_004537b0;
LAB_004534cc:
        pSVar12 = local_78;
        if (*(long **)(local_78 + 0x48) != local_98) {
          local_78 = (SceneObject *)0x0;
          iVar15 = *(int *)(pSVar12 + 8);
          *(int *)(pSVar12 + 8) = iVar15 + -1;
          if (iVar15 + -1 == 0) {
            (**(code **)(*(long *)pSVar12 + 8))();
          }
        }
      }
      pSVar12 = local_78;
      if (local_78 != (SceneObject *)0x0) {
        lVar13 = *(long *)(*(long *)(*(long *)psVar1 + 0xe0) + 0x28);
        local_60 = *(GameSceneController **)(lVar13 + 0x70);
        local_58 = (long *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar13 + 0x78));
        Vector2::Vector2((Vector2 *)&local_50,(Vector3 *)&local_60);
        if ((DAT_00683488 < ABS(local_50 - *(float *)(pSVar12 + 0x70))) ||
           (DAT_00683488 < ABS(fStack_4c - *(float *)(pSVar12 + 0x74)))) {
          *(float *)(pSVar12 + 0x70) = local_50;
          *(float *)(pSVar12 + 0x74) = fStack_4c;
          if (pSVar12[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(pSVar12);
            pSVar12[0xb4] = (SceneObject)0x1;
          }
        }
        *(undefined4 *)(pSVar12 + 0x78) = local_58._0_4_;
        CharControllerComponent::Pickup
                  (*(CharControllerComponent **)(*(long *)psVar1 + 0xe0),local_78,false);
      }
      if ((local_98 != (long *)0x0) &&
         (iVar15 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar15, iVar15 == 0)) {
        (**(code **)(*local_98 + 8))();
      }
      if ((local_78 != (SceneObject *)0x0) &&
         (iVar15 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar15 + -1, iVar15 + -1 == 0))
      {
        (**(code **)(*(long *)local_78 + 8))();
      }
    }
  }
  else {
    FUN_0066a528(&local_90,*(long *)(this + 0xa8) + 0x180);
    plVar7 = (long *)(local_90 + -0x18);
    bVar6 = *plVar7 != 0;
    if (plVar7 != (long *)puVar5) {
      piVar14 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar14;
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = iVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete(plVar7);
      }
    }
    plVar7 = (long *)(local_88 + -0x18);
    if (plVar7 == (long *)puVar5) goto LAB_00453448;
LAB_004535d8:
    piVar14 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (0 < iVar15) goto LAB_00453448;
    operator_delete(plVar7);
    if (bVar6) goto LAB_0045344c;
  }
  CheckAndEnableNewPurchases(this);
  this[0xe9] = (GameViewController)0x1;
LAB_00453a08:
  if ((local_68 != (long *)0x0) &&
     (lVar13 = local_68[1], local_68[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar13 = local_68[2];
    local_68[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


