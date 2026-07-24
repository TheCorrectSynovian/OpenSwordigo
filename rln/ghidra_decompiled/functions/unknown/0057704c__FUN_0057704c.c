/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057704c
 * Function: FUN_0057704c
 * Signature: undefined FUN_0057704c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0057704c(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  SceneObject *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::BoolAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar2;
    bVar1 = Caver::ProgramState::BoolAtStackIndex(this,2);
    if (this_00 != (SceneObject *)0x0) {
      Caver::SceneObject::SetAlwaysActive(this_00,(bool)(bVar1 & 1));
    }
  }
  return 0;
}


