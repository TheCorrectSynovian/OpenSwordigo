/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003231bc
 * Function: FUN_003231bc
 * Signature: undefined FUN_003231bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_003231bc(lua_State *param_1)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  long *local_50;
  long *plStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar4 != (undefined8 *)0x0) && ((SceneObject *)*puVar4 != (SceneObject *)0x0)) {
    local_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    local_40 = 0;
    Caver::SceneObject::GetComponentsWithInterface<Caver::LightComponent>
              ((SceneObject *)*puVar4,(vector *)&local_50);
    plVar6 = local_50;
    if (local_50 == plStack_48) {
      bVar9 = true;
    }
    else {
      do {
        plVar8 = plVar6 + 1;
        lVar7 = *plVar6;
        if (*(int *)(lVar7 + 0x70) == 4) {
          pfVar1 = (float *)(lVar7 + 0x74);
          if (*(char *)(lVar7 + 0x90) != '\0') {
            pfVar1 = (float *)(lVar7 + 0x88);
          }
          Caver::ProgramState::PushFloat(this,*pfVar1);
          bVar9 = false;
          plVar8 = local_50;
          plVar10 = plStack_48;
          plVar6 = plStack_48;
          if (local_50 != plStack_48) goto LAB_003232bc;
          goto joined_r0x003232f0;
        }
        plVar6 = plVar8;
      } while (plStack_48 != plVar8);
      bVar9 = true;
      plVar8 = local_50;
      plVar10 = plStack_48;
      plVar6 = plStack_48;
      if (local_50 != plStack_48) {
LAB_003232bc:
        do {
          plVar6 = (long *)*plVar8;
          if ((plVar6 != (long *)0x0) &&
             (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
            (**(code **)(*plVar6 + 8))();
          }
          plVar8 = plVar8 + 1;
          plVar6 = local_50;
        } while (plVar10 != plVar8);
      }
    }
joined_r0x003232f0:
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
    if (!bVar9) {
      uVar5 = 1;
      goto LAB_00323260;
    }
  }
  uVar5 = 0;
LAB_00323260:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


