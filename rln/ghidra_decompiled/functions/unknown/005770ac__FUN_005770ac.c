/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005770ac
 * Function: FUN_005770ac
 * Signature: undefined FUN_005770ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005770ac(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) {
    Caver::SceneObject::Activate((SceneObject *)*puVar1);
  }
  return 0;
}


