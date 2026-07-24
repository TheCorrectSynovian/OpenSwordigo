/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045eb00
 * Function: FUN_0045eb00
 * Signature: undefined FUN_0045eb00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045eb00(lua_State *param_1)

{
  GameState *this;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  GameViewController *this_00;
  long *plVar6;
  NotificationView *this_01;
  long lVar7;
  int *piVar8;
  int iVar9;
  long local_98;
  long local_90;
  long *local_88;
  NotificationView *local_80;
  long *local_78;
  long local_70;
  long local_68;
  long *local_60;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar5 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_68,"gameController",local_58);
  this_00 = (GameViewController *)
            Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar5 + 0x28),(string *)&local_68);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68 + -8);
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
      operator_delete((undefined *)(local_68 + -0x18));
      this = *(GameState **)(this_00 + 0xa8);
      plVar6 = *(long **)(this_00 + 0xb0);
      goto joined_r0x0045ee0c;
    }
  }
  this = *(GameState **)(this_00 + 0xa8);
  plVar6 = *(long **)(this_00 + 0xb0);
joined_r0x0045ee0c:
  if ((plVar6 != (long *)0x0) && (plVar6[1] == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar7 = plVar6[2];
    plVar6[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)lVar5);
  if ((*(long *)(local_58[0] + -0x18) != 0) &&
     (lVar5 = Caver::GameState::StateForQuestWithName(this,(string *)local_58), lVar5 == 0)) {
    Caver::GameState::AddStateForQuestWithName(this,(string *)local_58);
    Caver::GameData::QuestForName(*(string **)this);
    if (local_68 != 0) {
      FUN_0066a528(&local_70,local_68 + 0x10);
      plVar6 = (long *)(local_70 + -0x18);
      lVar5 = *plVar6;
      if (plVar6 != (long *)puVar4) {
        piVar8 = (int *)(local_70 + -8);
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
          operator_delete(plVar6);
        }
      }
      if (lVar5 != 0) {
        this_01 = operator_new(0x1a8);
        Caver::NotificationView::NotificationView(this_01);
        boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>
                  ((shared_ptr<Caver::NotificationView> *)&local_80,this_01);
        local_88 = (long *)0x0;
        FUN_0066a528(&local_98,local_68 + 0x10);
        FUN_0035a030(&local_90,"Quest Added: ",&local_98);
        Caver::NotificationView::Init(local_80,(intrusive_ptr *)&local_88,(string *)&local_90);
        if ((undefined *)(local_90 + -0x18) != puVar4) {
          piVar8 = (int *)(local_90 + -8);
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
            operator_delete((undefined *)(local_90 + -0x18));
          }
        }
        if ((undefined *)(local_98 + -0x18) != puVar4) {
          piVar8 = (int *)(local_98 + -8);
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
            operator_delete((undefined *)(local_98 + -0x18));
          }
        }
        if ((local_88 != (long *)0x0) &&
           (iVar9 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar9, iVar9 == 0)) {
          (**(code **)(*local_88 + 8))();
        }
        if (*(GameSceneView **)(this_00 + 0xd8) != (GameSceneView *)0x0) {
          Caver::GameSceneView::ShowNotification
                    (*(GameSceneView **)(this_00 + 0xd8),(shared_ptr *)&local_80);
        }
        if ((local_78 != (long *)0x0) &&
           (lVar5 = local_78[1], local_78[1] = lVar5 + -1, lVar5 + -1 == 0)) {
          (**(code **)(*local_78 + 0x10))(local_78);
          lVar5 = local_78[2];
          local_78[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*local_78 + 0x18))(local_78);
          }
        }
      }
    }
    Caver::GameViewController::ScheduleGuideTargetUpdate(this_00);
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = local_60[2];
      local_60[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
  }
  if ((undefined *)(local_58[0] + -0x18) != puVar4) {
    piVar8 = (int *)(local_58[0] + -8);
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
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


