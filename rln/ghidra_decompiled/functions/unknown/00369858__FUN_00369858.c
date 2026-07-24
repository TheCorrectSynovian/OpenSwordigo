/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00369858
 * Function: FUN_00369858
 * Signature: undefined FUN_00369858(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00369858(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  SceneObject *this_00;
  long lVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  this_00 = (SceneObject *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    this_00 = (SceneObject *)*puVar2;
  }
  local_38 = 0x7f7fffff7f7fffff;
  local_30 = 0x7f7fffff;
  if ((this_00 != (SceneObject *)0x0) &&
     (lVar3 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6c60),
     lVar3 != 0)) {
    local_38 = *(undefined8 *)(lVar3 + 0x108);
    local_30 = *(undefined4 *)(lVar3 + 0x110);
  }
  Caver::ProgramState::PushVector3(this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


