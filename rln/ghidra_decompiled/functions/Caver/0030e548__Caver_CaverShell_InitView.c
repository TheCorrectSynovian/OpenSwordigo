/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030e548
 * Function: Caver::CaverShell::InitView
 * Signature: undefined __thiscall InitView(CaverShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::InitView() */

void __thiscall Caver::CaverShell::InitView(CaverShell *this)

{
  IFWKeyboardListener *pIVar1;
  IFWMouseListener *pIVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  GUIWindow *pGVar10;
  FWKeyboard *this_00;
  FWMouse *this_01;
  TextureLibrary *pTVar11;
  AudioSystem *this_02;
  SoundLibrary *this_03;
  GameOptions *pGVar12;
  Caver *this_04;
  long lVar13;
  MusicPlayer *this_05;
  GUINavigationController *pGVar14;
  PlayerProfile *pPVar15;
  ProfileManager *this_06;
  GameViewController *this_07;
  MainMenuViewController *this_08;
  undefined8 uVar16;
  GameOptions *extraout_x0;
  Caver *extraout_x0_00;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *psVar17;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *extraout_x1_07;
  string *extraout_x1_08;
  string *extraout_x1_09;
  string *extraout_x1_10;
  string *extraout_x1_11;
  code *pcVar18;
  GameOptions *pGVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  PlayerProfile *local_128;
  long *local_120;
  PlayerProfile *local_118;
  long *local_110;
  undefined1 auStack_108 [8];
  GameOptions *local_100;
  long *local_f8;
  string asStack_f0 [8];
  GameOptions *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  PlayerProfile *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar9 = TextureLibrary::sharedLibrary();
  *(undefined1 *)(lVar9 + 0x39) = 1;
  lVar9 = FontLibrary::sharedLibrary();
  *(undefined1 *)(lVar9 + 0x30) = 1;
  lVar9 = TextureLibrary::sharedLibrary();
  *(undefined4 *)(lVar9 + 0x40) = 40000000;
  pGVar10 = operator_new(0x228);
  GUIWindow::GUIWindow(pGVar10);
  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>
            ((shared_ptr<Caver::GUIWindow> *)&local_a8,pGVar10);
  plVar23 = *(long **)(this + 0x88);
  plVar24 = *(long **)(this + 0x90);
  *(long **)(this + 0x88) = local_a8;
  *(long **)(this + 0x90) = local_a0;
  local_a8 = plVar23;
  local_a0 = plVar24;
  if ((plVar24 != (long *)0x0) && (lVar9 = plVar24[1], plVar24[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar9 = plVar24[2];
    plVar24[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  UpdateViewSize(this);
  GUIWindow::SetMainWindow((shared_ptr *)(this + 0x88));
  this_00 = (FWKeyboard *)FWKeyboard::sharedKeyboard();
  pIVar1 = (IFWKeyboardListener *)0x0;
  if (*(long *)(this + 0x88) != 0) {
    pIVar1 = (IFWKeyboardListener *)(*(long *)(this + 0x88) + 0xf8);
  }
  FWKeyboard::AddListener(this_00,pIVar1);
  this_01 = (FWMouse *)FWMouse::sharedMouse();
  pIVar2 = (IFWMouseListener *)0x0;
  if (*(long *)(this + 0x88) != 0) {
    pIVar2 = (IFWMouseListener *)(*(long *)(this + 0x88) + 0xf0);
  }
  FWMouse::AddListener(this_01,pIVar2);
  puVar6 = PTR_DAT_007e5de8;
  local_c8 = PTR_DAT_007e5de8 + 0x18;
  if (*(long *)(*(long *)(this + 0x80) + -0x18) == 0) {
    uVar22 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if ((int)(uVar22 >> 3) < 1) {
      plVar23 = (long *)GUIFileDialog::New();
      local_a0 = (long *)0x0;
      local_a8 = plVar23;
      local_a0 = operator_new(0x20);
      puVar7 = PTR_vtable_007e69d8;
      local_a0[3] = (long)plVar23;
      local_a0[2] = 1;
      local_a0[1] = 1;
      *local_a0 = (long)(puVar7 + 0x10);
      boost::detail::sp_enable_shared_from_this(&local_a8,plVar23,plVar23);
      plVar23 = local_a8;
      pcVar18 = *(code **)(*local_a8 + 0x10);
      FUN_00666bb8(&local_b8,"Scene files",&local_128);
      FUN_00666bb8(&local_100,"*.scene",&local_d8);
      (*pcVar18)(plVar23,&local_b8,&local_100);
      if (local_100 + -0x18 != (GameOptions *)puVar6) {
        pGVar12 = local_100 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *(int *)pGVar12;
          *(int *)pGVar12 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *(int *)pGVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
            if (bVar4) {
              *(int *)pGVar12 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_100 + -0x18);
        }
      }
      if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
        pPVar15 = local_b8 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *(int *)pPVar15;
          *(int *)pPVar15 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *(int *)pPVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
            if (bVar4) {
              *(int *)pPVar15 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_b8 + -0x18);
        }
      }
      (**(code **)*local_a8)();
      plVar23 = (long *)(**(code **)(*local_a8 + 0x18))();
      if (*(long *)(*plVar23 + -0x18) == 0) {
        FUN_00666bb8(&local_100,"plains1",&local_d8);
        FUN_00666bb8(&local_118,"scene",auStack_c0);
        PathForResourceOfType((string *)&local_100,(string *)&local_118);
        FUN_0066a6a8(&local_c8,&local_b8);
        psVar17 = extraout_x1_04;
        if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
          pPVar15 = local_b8 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *(int *)pPVar15;
            *(int *)pPVar15 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *(int *)pPVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
              if (bVar4) {
                *(int *)pPVar15 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(local_b8 + -0x18);
            psVar17 = extraout_x1_09;
          }
        }
        if (local_118 + -0x18 != (PlayerProfile *)puVar6) {
          pPVar15 = local_118 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *(int *)pPVar15;
            *(int *)pPVar15 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *(int *)pPVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
              if (bVar4) {
                *(int *)pPVar15 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(local_118 + -0x18);
            psVar17 = extraout_x1_10;
          }
        }
        plVar23 = local_a0;
        if (local_100 + -0x18 != (GameOptions *)puVar6) {
          pGVar12 = local_100 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *(int *)pGVar12;
            *(int *)pGVar12 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *(int *)pGVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
              if (bVar4) {
                *(int *)pGVar12 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(local_100 + -0x18);
            psVar17 = extraout_x1_11;
            plVar23 = local_a0;
          }
        }
      }
      else {
        uVar16 = (**(code **)(*local_a8 + 0x18))();
        FUN_0066a6a8(&local_c8,uVar16);
        psVar17 = extraout_x1_03;
        plVar23 = local_a0;
      }
      local_a0 = plVar23;
      if ((plVar23 != (long *)0x0) && (lVar9 = plVar23[1], plVar23[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        lVar9 = plVar23[2];
        plVar23[2] = lVar9 + -1;
        psVar17 = extraout_x1_05;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
          psVar17 = extraout_x1_06;
        }
      }
    }
    else {
      FUN_0066a6a8(&local_c8,
                   *(long *)(this + 8) + ((long)(uVar22 * 0x20000000 + -0x100000000) >> 0x1d));
      psVar17 = extraout_x1_00;
    }
  }
  else {
    FUN_0066a528(&local_a8);
    FUN_006677d4(&local_a8,".scene",6);
    FUN_0066a6a8(&local_c8,&local_a8);
    psVar17 = extraout_x1;
    if (local_a8 + -3 != (long *)puVar6) {
      plVar23 = local_a8 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = (int)*plVar23;
        *(int *)plVar23 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = (int)*plVar23;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar4) {
            *(int *)plVar23 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_a8 + -3);
        psVar17 = extraout_x1_07;
      }
    }
  }
  LastPathComponent((Caver *)&local_c8,psVar17);
  iVar8 = FUN_006689e0(&local_a8,"menu.scene");
  if (local_a8 + -3 != (long *)puVar6) {
    plVar23 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = (int)*plVar23;
      *(int *)plVar23 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_a8 + -3);
    }
  }
  if (*(long *)(local_c8 + -0x18) != 0) {
    FUN_00666bb8(&local_b8,"Resources",&local_118);
    FUN_0066a528(&local_d0,&local_c8);
    FindFileFromParentDirectories(&local_a8,&local_b8,&local_d0);
    if ((undefined *)(local_d0 + -0x18) != puVar6) {
      piVar20 = (int *)(local_d0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar21 = *piVar20;
        *piVar20 = iVar21 + -1;
      }
      else {
        do {
          iVar21 = *piVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar21 < 1) {
        operator_delete((undefined *)(local_d0 + -0x18));
      }
    }
    if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
      pPVar15 = local_b8 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar21 = *(int *)pPVar15;
        *(int *)pPVar15 = iVar21 + -1;
      }
      else {
        do {
          iVar21 = *(int *)pPVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
          if (bVar4) {
            *(int *)pPVar15 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar21 < 1) {
        operator_delete(local_b8 + -0x18);
      }
    }
    plVar23 = local_a8 + -3;
    if (*plVar23 != 0) {
      SetResourcesPath((string *)&local_a8);
      plVar23 = local_a8 + -3;
    }
    if (plVar23 != (long *)puVar6) {
      plVar24 = local_a8 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar21 = (int)*plVar24;
        *(int *)plVar24 = iVar21 + -1;
      }
      else {
        do {
          iVar21 = (int)*plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *(int *)plVar24 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar21 < 1) {
        operator_delete(plVar23);
      }
    }
  }
  pTVar11 = (TextureLibrary *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_game_atlas",&local_100);
  TextureLibrary::LoadTextureAtlasWithName(pTVar11,(string *)&local_a8);
  if (local_a8 + -3 != (long *)puVar6) {
    plVar23 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = (int)*plVar23;
      *(int *)plVar23 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_a8 + -3);
    }
  }
  pTVar11 = (TextureLibrary *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_game2_atlas",&local_100);
  TextureLibrary::LoadTextureAtlasWithName(pTVar11,(string *)&local_a8);
  if (local_a8 + -3 != (long *)puVar6) {
    plVar23 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = (int)*plVar23;
      *(int *)plVar23 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_a8 + -3);
    }
  }
  pTVar11 = (TextureLibrary *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"game_common_atlas",&local_100);
  TextureLibrary::LoadTextureAtlasWithName(pTVar11,(string *)&local_a8);
  if (local_a8 + -3 != (long *)puVar6) {
    plVar23 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = (int)*plVar23;
      *(int *)plVar23 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_a8 + -3);
    }
  }
  lVar9 = AchievementsManager::sharedManager();
  uVar16 = *(undefined8 *)(this + 0x88);
  plVar23 = *(long **)(this + 0x90);
  if (plVar23 != (long *)0x0) {
    plVar23[1] = plVar23[1] + 2;
  }
  plVar24 = *(long **)(lVar9 + 0xd0);
  *(undefined8 *)(lVar9 + 200) = uVar16;
  *(long **)(lVar9 + 0xd0) = plVar23;
  if ((plVar24 != (long *)0x0) && (lVar9 = plVar24[1], plVar24[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar9 = plVar24[2];
    plVar24[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  if ((plVar23 != (long *)0x0) && (lVar9 = plVar23[1], plVar23[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar9 = plVar23[2];
    plVar23[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  this_02 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::Setup(this_02);
  FUN_00666bb8(&local_a8,"sounds",&local_118);
  FUN_00666bb8(&local_b8,"sounds",&local_128);
  PathForResourceOfType((string *)&local_a8,(string *)&local_b8);
  if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_b8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_b8 + -0x18);
    }
  }
  if (local_a8 + -3 != (long *)puVar6) {
    plVar23 = local_a8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = (int)*plVar23;
      *(int *)plVar23 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_a8 + -3);
    }
  }
  Proto::SoundLibrary::SoundLibrary((SoundLibrary *)&local_a8);
  LoadProtobufMessageFromFile((MessageLite *)&local_a8,(string *)&local_d8);
  this_03 = (SoundLibrary *)SoundLibrary::sharedLibrary();
  pGVar12 = (GameOptions *)SoundLibrary::LoadFromProtobufMessage(this_03,(SoundLibrary *)&local_a8);
  GameOptions::defaultOptions(pGVar12);
  FUN_00666bb8(&local_100,"options",auStack_c0);
  FUN_00666bb8(&local_118,"gopt",asStack_f0);
  PathForResourceOfType((string *)&local_100,(string *)&local_118);
  GameOptions::LoadFromFile(local_e8,(string *)&local_b8);
  if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_b8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_b8 + -0x18);
    }
  }
  if (local_118 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_118 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_118 + -0x18);
    }
  }
  pGVar12 = local_100 + -0x18;
  if (pGVar12 != (GameOptions *)puVar6) {
    pGVar19 = local_100 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pGVar19;
      *(int *)pGVar19 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pGVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar19,0x10);
        if (bVar4) {
          *(int *)pGVar19 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(pGVar12);
      pGVar12 = extraout_x0;
    }
  }
  if ((local_e0 != (long *)0x0) && (lVar9 = local_e0[1], local_e0[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    pGVar12 = (GameOptions *)(**(code **)(*local_e0 + 0x10))(local_e0);
    lVar9 = local_e0[2];
    local_e0[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      pGVar12 = (GameOptions *)(**(code **)(*local_e0 + 0x18))(local_e0);
    }
  }
  GameOptions::sharedOptions(pGVar12);
  pGVar12 = local_100;
  FUN_00666bb8(&local_118,"options",asStack_f0);
  FUN_00666bb8(&local_128,"gopt",auStack_108);
  PathForResourceOfType((string *)&local_118,(string *)&local_128);
  GameOptions::LoadFromFile(pGVar12,(string *)&local_b8);
  if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_b8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_b8 + -0x18);
    }
  }
  if (local_128 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_128 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_128 + -0x18);
    }
  }
  this_04 = (Caver *)(local_118 + -0x18);
  if (this_04 != (Caver *)puVar6) {
    pPVar15 = local_118 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(this_04);
      this_04 = extraout_x0_00;
    }
  }
  pGVar12 = local_100;
  DocumentsDirectoryPath(this_04);
  psVar17 = asStack_f0;
  FUN_00666bb8(&local_128,"options.gopt");
  StringByAppendingPathComponent((Caver *)&local_118,(string *)&local_128,psVar17);
  GameOptions::LoadFromFile(pGVar12,(string *)&local_b8);
  if (local_b8 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_b8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_b8 + -0x18);
    }
  }
  if (local_128 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_128 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_128 + -0x18);
    }
  }
  if (local_118 + -0x18 != (PlayerProfile *)puVar6) {
    pPVar15 = local_118 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar21 = *(int *)pPVar15;
      *(int *)pPVar15 = iVar21 + -1;
    }
    else {
      do {
        iVar21 = *(int *)pPVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
        if (bVar4) {
          *(int *)pPVar15 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar21 < 1) {
      operator_delete(local_118 + -0x18);
    }
  }
  if (0 < (int)((ulong)(*(long *)(local_100 + 0x10) - *(long *)(local_100 + 8)) >> 4)) {
    lVar25 = 0;
    lVar9 = 0;
    do {
      lVar13 = AudioSystem::sharedSystem();
      this_05 = *(MusicPlayer **)(lVar13 + 0x68);
      local_b8 = *(PlayerProfile **)(*(long *)(local_100 + 8) + lVar25);
      local_b0 = (long *)((long *)(*(long *)(local_100 + 8) + lVar25))[1];
      if (local_b0 != (long *)0x0) {
        local_b0[1] = local_b0[1] + 1;
      }
      MusicPlayer::AddPlaylist(this_05,(shared_ptr *)&local_b8);
      plVar23 = local_b0;
      if ((local_b0 != (long *)0x0) &&
         (lVar13 = local_b0[1], local_b0[1] = lVar13 + -1, lVar13 + -1 == 0)) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        lVar13 = plVar23[2];
        plVar23[2] = lVar13 + -1;
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
      }
      lVar9 = lVar9 + 1;
      lVar25 = lVar25 + 0x10;
    } while (lVar9 < (int)((ulong)(*(long *)(local_100 + 0x10) - *(long *)(local_100 + 8)) >> 4));
  }
  GameOptions::ApplyAudioOptions(local_100);
  pGVar14 = operator_new(0x70);
  GUINavigationController::GUINavigationController(pGVar14);
  boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>
            ((shared_ptr<Caver::GUINavigationController> *)&local_b8,pGVar14);
  pPVar15 = *(PlayerProfile **)(this + 0x98);
  plVar23 = *(long **)(this + 0xa0);
  *(PlayerProfile **)(this + 0x98) = local_b8;
  *(long **)(this + 0xa0) = local_b0;
  if ((plVar23 != (long *)0x0) && (lVar9 = plVar23[1], plVar23[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    local_b8 = pPVar15;
    local_b0 = plVar23;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar9 = plVar23[2];
    plVar23[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  local_b8 = *(PlayerProfile **)(this + 0x98);
  pGVar10 = *(GUIWindow **)(this + 0x88);
  local_b0 = *(long **)(this + 0xa0);
  if (local_b0 != (long *)0x0) {
    local_b0[1] = local_b0[1] + 1;
  }
  GUIWindow::SetRootViewController(pGVar10,(shared_ptr *)&local_b8);
  plVar23 = local_b0;
  if ((local_b0 != (long *)0x0) && (lVar9 = local_b0[1], local_b0[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_b0 + 0x10))(local_b0);
    lVar9 = plVar23[2];
    plVar23[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  if (iVar8 == 0) {
    this_08 = operator_new(0x128);
    MainMenuViewController::MainMenuViewController(this_08);
    boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>
              ((shared_ptr<Caver::MainMenuViewController> *)&local_b8,this_08);
    pGVar14 = *(GUINavigationController **)(this + 0x98);
    local_118 = local_b8;
    local_110 = local_b0;
    if (local_b0 != (long *)0x0) {
      local_b0[1] = local_b0[1] + 1;
    }
    GUINavigationController::SetCurrentViewController(pGVar14,(shared_ptr *)&local_118);
    plVar23 = local_110;
    if ((local_110 != (long *)0x0) &&
       (lVar9 = local_110[1], local_110[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_110 + 0x10))(local_110);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    plVar23 = local_b0;
    if ((local_b0 != (long *)0x0) &&
       (lVar9 = local_b0[1], local_b0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
  }
  else {
    pPVar15 = operator_new(200);
    PlayerProfile::PlayerProfile(pPVar15);
    local_b8 = pPVar15;
    boost::detail::shared_count::shared_count<Caver::PlayerProfile>
              ((shared_count *)&local_b0,pPVar15);
    boost::detail::sp_enable_shared_from_this(&local_b8,pPVar15,pPVar15);
    pPVar15 = local_b8;
    FUN_00666bb8(&local_118,"testplayer",auStack_c0);
    PlayerProfile::InitWithIdentifier((string *)pPVar15);
    if (local_118 + -0x18 != (PlayerProfile *)puVar6) {
      pPVar15 = local_118 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pPVar15;
        *(int *)pPVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pPVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
          if (bVar4) {
            *(int *)pPVar15 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_118 + -0x18);
      }
    }
    pPVar15 = local_b8;
    FUN_00666bb8(&local_118,"player",auStack_c0);
    PlayerProfile::CreateProfile(pPVar15,(string *)&local_118);
    psVar17 = extraout_x1_01;
    if (local_118 + -0x18 != (PlayerProfile *)puVar6) {
      pPVar15 = local_118 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pPVar15;
        *(int *)pPVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pPVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
          if (bVar4) {
            *(int *)pPVar15 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_118 + -0x18);
        psVar17 = extraout_x1_08;
      }
    }
    lVar9 = *(long *)(local_b8 + 0x80);
    plVar23 = *(long **)(local_b8 + 0x88);
    if (plVar23 != (long *)0x0) {
      plVar23[1] = plVar23[1] + 1;
    }
    LastPathComponent((Caver *)&local_c8,psVar17);
    StringByRemovingPathExtension((Caver *)&local_128,extraout_x1_02);
    FUN_0066a6a8(lVar9 + 0x158,&local_118);
    if (local_118 + -0x18 != (PlayerProfile *)puVar6) {
      pPVar15 = local_118 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pPVar15;
        *(int *)pPVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pPVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
          if (bVar4) {
            *(int *)pPVar15 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_118 + -0x18);
      }
    }
    if (local_128 + -0x18 != (PlayerProfile *)puVar6) {
      pPVar15 = local_128 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pPVar15;
        *(int *)pPVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pPVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar15,0x10);
          if (bVar4) {
            *(int *)pPVar15 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_128 + -0x18);
      }
    }
    if ((plVar23 != (long *)0x0) && (lVar9 = plVar23[1], plVar23[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    local_b8[0xc0] = (PlayerProfile)0x1;
    this_06 = (ProfileManager *)ProfileManager::sharedManager();
    ProfileManager::AddProfile(this_06,(shared_ptr *)&local_b8);
    this_07 = operator_new(0x140);
    GameViewController::GameViewController(this_07);
    boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>
              ((shared_ptr<Caver::GameViewController> *)&local_118,this_07);
    if (local_b0 != (long *)0x0) {
      local_b0[1] = local_b0[1] + 1;
    }
    plVar23 = *(long **)(local_118 + 0x90);
    *(PlayerProfile **)(local_118 + 0x88) = local_b8;
    *(long **)(local_118 + 0x90) = local_b0;
    if ((plVar23 != (long *)0x0) && (lVar9 = plVar23[1], plVar23[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    plVar23 = *(long **)(this + 0x98);
    pcVar18 = *(code **)(*plVar23 + 0x58);
    local_128 = local_118;
    local_120 = local_110;
    if (local_110 != (long *)0x0) {
      local_110[1] = local_110[1] + 1;
    }
    (*pcVar18)(DAT_00683484,DAT_00683484,plVar23,&local_128,1);
    plVar23 = local_120;
    if ((local_120 != (long *)0x0) &&
       (lVar9 = local_120[1], local_120[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    plVar23 = local_110;
    if ((local_110 != (long *)0x0) &&
       (lVar9 = local_110[1], local_110[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_110 + 0x10))(local_110);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    plVar23 = local_b0;
    if ((local_b0 != (long *)0x0) &&
       (lVar9 = local_b0[1], local_b0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      lVar9 = plVar23[2];
      plVar23[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
  }
  if ((local_f8 != (long *)0x0) && (lVar9 = local_f8[1], local_f8[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_f8 + 0x10))(local_f8);
    lVar9 = local_f8[2];
    local_f8[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_f8 + 0x18))(local_f8);
    }
  }
  Proto::SoundLibrary::~SoundLibrary((SoundLibrary *)&local_a8);
  if ((undefined *)(local_d8 + -0x18) != puVar6) {
    piVar20 = (int *)(local_d8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar20;
      *piVar20 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_d8 + -0x18));
    }
  }
  if (local_c8 + -0x18 != puVar6) {
    piVar20 = (int *)(local_c8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar20;
      *piVar20 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_c8 + -0x18);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


