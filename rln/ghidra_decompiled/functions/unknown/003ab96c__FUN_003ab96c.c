/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ab96c
 * Function: FUN_003ab96c
 * Signature: undefined FUN_003ab96c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003ab96c(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) {
    Caver::SceneObject::ComponentWithInterface((SceneObject *)*puVar1,(long)PTR_Interface_007e5968);
  }
  return 0;
}


