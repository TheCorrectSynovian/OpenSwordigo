/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390424
 * Function: FUN_00390424
 * Signature: undefined FUN_00390424(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00390424(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar6 = 0;
  if (((puVar3 != (undefined8 *)0x0) && (uVar6 = 0, (SceneObject *)*puVar3 != (SceneObject *)0x0))
     && (lVar4 = Caver::SceneObject::ComponentWithInterface
                           ((SceneObject *)*puVar3,(long)PTR_Interface_007e6868), uVar6 = 0,
        lVar4 != 0)) {
    plVar5 = *(long **)(lVar4 + 0x70);
    if (plVar5 != (long *)0x0) {
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    }
    local_38 = CONCAT44((float)((ulong)plVar5[0xe] >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x78) >> 0x20),
                        (float)plVar5[0xe] - (float)*(undefined8 *)(lVar4 + 0x78));
    local_30 = *(float *)(plVar5 + 0xf) - *(float *)(lVar4 + 0x80);
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    Caver::ProgramState::PushVector3(this,(Vector3 *)&local_38);
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


