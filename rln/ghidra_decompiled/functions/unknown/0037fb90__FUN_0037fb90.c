/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fb90
 * Function: FUN_0037fb90
 * Signature: undefined FUN_0037fb90(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037fb90(lua_State *param_1)

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
  local_38 = 0;
  local_30 = 0;
  if ((this_00 != (SceneObject *)0x0) &&
     (lVar3 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e4ee0),
     lVar3 != 0)) {
    local_38 = *(undefined8 *)(lVar3 + 0x100);
    local_30 = *(undefined4 *)(lVar3 + 0x108);
  }
  Caver::ProgramState::PushVector3(this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


