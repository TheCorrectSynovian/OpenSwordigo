/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b980
 * Function: FUN_0031b980
 * Signature: undefined FUN_0031b980(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0031b980(lua_State *param_1)

{
  long *plVar1;
  long lVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long *local_40;
  long *plStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar3 != (undefined8 *)0x0) && ((SceneObject *)*puVar3 != (SceneObject *)0x0)) {
    local_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    local_30 = 0;
    Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>
              ((SceneObject *)*puVar3,(vector *)&local_40);
    for (plVar1 = local_40; plVar1 != plStack_38; plVar1 = plVar1 + 1) {
      if (*(char *)(*plVar1 + 0x178) != '\0') {
        *(undefined1 *)(*plVar1 + 0x178) = 0;
      }
    }
    if (local_40 != (long *)0x0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


