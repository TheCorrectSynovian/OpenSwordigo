/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00452b64
 * Function: Caver::GameViewController::LoadView
 * Signature: undefined __thiscall LoadView(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::LoadView() */

void __thiscall Caver::GameViewController::LoadView(GameViewController *this)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ProfileManager *this_00;
  ModelLibrary *this_01;
  TextureLibrary *this_02;
  long lVar9;
  int *piVar10;
  long *plVar11;
  MusicPlayer *this_03;
  size_t *psVar12;
  void *local_80;
  void *local_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (this[0xe8] == (GameViewController)0x0) {
    this[0xe8] = (GameViewController)0x1;
    this_00 = (ProfileManager *)ProfileManager::sharedManager();
    ProfileManager::AddDelegate(this_00,(IProfileManagerDelegate *)(this + 0x70));
    GameEvent::ClearEvents();
    GameEvent::ClearEvents();
    GameEvent::SetEventsEnabled(true);
    lVar9 = *(long *)(this + 0xa8);
    if (lVar9 == 0) {
      LoadGameState(this);
      lVar1 = *(long *)(*(long *)(this + 0xa8) + 0x170);
      plVar11 = *(long **)(*(long *)(this + 0xa8) + 0x178);
    }
    else {
      lVar1 = *(long *)(lVar9 + 0x170);
      plVar11 = *(long **)(lVar9 + 0x178);
    }
    if ((plVar11 != (long *)0x0) && (plVar11[1] == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if (lVar1 != 0) {
      lVar9 = AudioSystem::sharedSystem();
      this_03 = *(MusicPlayer **)(lVar9 + 0x68);
      lVar9 = *(long *)(this_03 + 0x30);
      plVar11 = *(long **)(this_03 + 0x38);
      if (plVar11 != (long *)0x0) {
        plVar11[1] = plVar11[1] + 1;
      }
      if (lVar9 == 0) {
        bVar7 = false;
      }
      else {
        if (plVar11 != (long *)0x0) {
          plVar11[1] = plVar11[1] + 1;
        }
        FUN_0066a528(local_78);
        plVar2 = *(long **)(*(long *)(this + 0xa8) + 0x178);
        if (plVar2 != (long *)0x0) {
          plVar2[1] = plVar2[1] + 1;
        }
        MapNode::MusicName();
        psVar12 = (size_t *)((long)local_80 + -0x18);
        if (*(size_t *)((long)local_78[0] + -0x18) == *psVar12) {
          iVar8 = memcmp(local_78[0],local_80,*(size_t *)((long)local_78[0] + -0x18));
          bVar7 = iVar8 != 0;
        }
        else {
          bVar7 = true;
        }
        puVar6 = PTR_DAT_007e5de8;
        if (psVar12 != (size_t *)PTR_DAT_007e5de8) {
          piVar10 = (int *)((long)local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *piVar10;
            *piVar10 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *piVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar4) {
                *piVar10 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(psVar12);
          }
        }
        if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0))
        {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar9 = plVar2[2];
          plVar2[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
        if ((undefined *)((long)local_78[0] + -0x18) != puVar6) {
          piVar10 = (int *)((long)local_78[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *piVar10;
            *piVar10 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *piVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar4) {
                *piVar10 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete((undefined *)((long)local_78[0] + -0x18));
          }
        }
        if ((plVar11 != (long *)0x0) &&
           (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar9 = plVar11[2];
          plVar11[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
      }
      if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        lVar9 = plVar11[2];
        plVar11[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      if (bVar7) {
        MusicPlayer::FadeOut(this_03,1.5);
      }
    }
    plVar11 = *(long **)(this + 0xd0);
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    this_01 = (ModelLibrary *)ModelLibrary::sharedLibrary();
    ModelLibrary::Clear(this_01);
    this_02 = (TextureLibrary *)TextureLibrary::sharedLibrary();
    TextureLibrary::RefreshUnusedTexturesList(this_02);
    BackgroundLoad(this);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


