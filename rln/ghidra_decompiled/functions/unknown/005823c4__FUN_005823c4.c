/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005823c4
 * Function: FUN_005823c4
 * Signature: undefined FUN_005823c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005823c4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  ProgramState *this;
  MusicPlayer *this_00;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"musicPlayer",auStack_50);
  this_00 = (MusicPlayer *)
            Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  bVar5 = Caver::ProgramState::BoolAtStackIndex(this,2);
  Caver::MusicPlayer::PlayMusicWithName(this_00,(string *)local_48,(bool)(bVar5 & 1));
  uVar6 = Caver::ProgramState::IsBoolAtStackIndex(this,3);
  if ((uVar6 & 1) == 0) {
    plVar7 = *(long **)(this_00 + 0x10);
    this_00[8] = (MusicPlayer)0x1;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x48))(plVar7,1);
    }
  }
  else {
    bVar5 = Caver::ProgramState::BoolAtStackIndex(this,3);
    this_00[8] = (MusicPlayer)(bVar5 & 1);
    if (*(long **)(this_00 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this_00 + 0x10) + 0x48))();
    }
  }
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar8 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


