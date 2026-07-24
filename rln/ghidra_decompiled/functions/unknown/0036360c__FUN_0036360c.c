/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036360c
 * Function: FUN_0036360c
 * Signature: undefined FUN_0036360c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0036360c(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  ProgramState *this;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  string *psVar11;
  long local_58;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar6 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar8 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = 0;
    if ((SceneObject *)*puVar6 != (SceneObject *)0x0) {
      lVar7 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar6,(long)PTR_Interface_007e57a8);
      uVar8 = 0;
      if (lVar7 != 0) {
        psVar11 = (string *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x20) + 0x10);
        FUN_0066a528(&local_58,lVar7 + 0x78);
        Caver::GameData::ItemForName(psVar11);
        puVar5 = PTR_DAT_007e5de8;
        plVar4 = local_48;
        if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
          piVar9 = (int *)(local_58 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar10 = *piVar9;
            *piVar9 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar9;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar2) {
                *piVar9 = iVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar10 < 1) {
            operator_delete((undefined *)(local_58 + -0x18));
            plVar4 = local_48;
          }
        }
        if (local_50 == 0) {
          if ((plVar4 != (long *)0x0) &&
             (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            lVar7 = plVar4[2];
            plVar4[2] = lVar7 + -1;
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
          }
          uVar8 = 0;
        }
        else {
          local_48 = plVar4;
          FUN_0066a528(&local_58,local_50 + 0x10);
          Caver::ProgramState::PushString(this,(string *)&local_58);
          plVar4 = local_48;
          if ((undefined *)(local_58 + -0x18) != puVar5) {
            piVar9 = (int *)(local_58 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar10 = *piVar9;
              *piVar9 = iVar10 + -1;
            }
            else {
              do {
                iVar10 = *piVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar2) {
                  *piVar9 = iVar10 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar10 < 1) {
              operator_delete((undefined *)(local_58 + -0x18));
              plVar4 = local_48;
            }
          }
          if ((plVar4 != (long *)0x0) &&
             (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            lVar7 = plVar4[2];
            plVar4[2] = lVar7 + -1;
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
          }
          uVar8 = 1;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


