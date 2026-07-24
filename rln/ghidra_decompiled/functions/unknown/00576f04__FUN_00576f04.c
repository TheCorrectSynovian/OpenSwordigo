/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576f04
 * Function: FUN_00576f04
 * Signature: undefined FUN_00576f04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576f04(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  bVar1 = 0;
  if ((puVar2 != (undefined8 *)0x0) && (bVar1 = 0, (SceneObject *)*puVar2 != (SceneObject *)0x0)) {
    bVar1 = Caver::SceneObject::isHidden((SceneObject *)*puVar2);
  }
  Caver::ProgramState::PushBool(this,(bool)(bVar1 & 1));
  return 1;
}


