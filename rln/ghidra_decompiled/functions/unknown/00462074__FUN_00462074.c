/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00462074
 * Function: FUN_00462074
 * Signature: undefined FUN_00462074(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00462074(lua_State *param_1)

{
  GameState *this;
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  ProgramState *this_00;
  long lVar11;
  long lVar12;
  int *piVar13;
  SceneObject *this_01;
  undefined1 auStack_78 [8];
  long local_70;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  this_00 = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 004620a4 to 005627ef has its CatchHandler @ 00461c68 */
  FUN_00666bb8(&local_68,"gameController",auStack_60);
  lVar11 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this_00 + 0x28),(string *)&local_68);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar13 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar13;
      *piVar13 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  bVar7 = Caver::ProgramState::BoolAtStackIndex(this_00,1);
  bVar8 = Caver::ProgramState::BoolAtStackIndex(this_00,2);
  if ((bVar7 & 1) == 0) {
    bVar9 = 0;
  }
  else {
    lVar12 = *(long *)(lVar11 + 0xa8);
    plVar1 = *(long **)(lVar11 + 0xb0);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    FUN_0066a528(&local_68,lVar12 + 0x158);
    iVar10 = FUN_006689e0(&local_68,"town_herohouse");
    if (iVar10 == 0) {
      this = *(GameState **)(lVar11 + 0xa8);
      plVar2 = *(long **)(lVar11 + 0xb0);
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      lVar12 = Caver::GameState::CurrentLevelState(this,true);
      FUN_00666bb8(&local_70,&DAT_0068eedb,auStack_78);
      bVar9 = Caver::StateProperties::HasFlag
                        ((StateProperties *)(lVar12 + 0x10),(string *)&local_70);
      bVar9 = bVar9 ^ 1;
      if ((undefined *)(local_70 + -0x18) != puVar6) {
        piVar13 = (int *)(local_70 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar13;
          *piVar13 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined *)(local_70 + -0x18));
        }
      }
      if ((plVar2 != (long *)0x0) && (lVar12 = plVar2[1], plVar2[1] = lVar12 + -1, lVar12 + -1 == 0)
         ) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar12 = plVar2[2];
        plVar2[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
    }
    else {
      bVar9 = 0;
    }
    if ((undefined *)(local_68 + -0x18) != puVar6) {
      piVar13 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar13;
        *piVar13 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_68 + -0x18));
      }
    }
    if ((plVar1 != (long *)0x0) && (lVar12 = plVar1[1], plVar1[1] = lVar12 + -1, lVar12 + -1 == 0))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar12 = plVar1[2];
      plVar1[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  Caver::GameSceneView::SetCinematicModeEnabled
            (*(GameSceneView **)(lVar11 + 0xd8),(bool)(bVar7 & 1),(bool)(bVar8 & 1),
             (bool)(bVar9 & 1));
  this_01 = *(SceneObject **)(lVar11 + 0x128);
  if (this_01 == (SceneObject *)0x0) goto LAB_0046221c;
  if (*(int *)(this_01 + 8) == 0) {
    (**(code **)(*(long *)this_01 + 8))(this_01);
    this_01 = *(SceneObject **)(lVar11 + 0x128);
    if (this_01 != (SceneObject *)0x0) goto LAB_004621d4;
  }
  else {
LAB_004621d4:
    *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
  }
  this_01[0xf4] = (SceneObject)(bVar7 & 1);
  if (((bVar7 & 1) == 0) && (this_01[0xf0] == (SceneObject)0x0)) {
    Caver::SceneObject::Activate(this_01);
  }
  iVar10 = *(int *)(this_01 + 8);
  *(int *)(this_01 + 8) = iVar10 + -1;
  if (iVar10 + -1 == 0) {
    (**(code **)(*(long *)this_01 + 8))(this_01);
  }
LAB_0046221c:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


