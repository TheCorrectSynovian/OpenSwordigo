/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576f4c
 * Function: FUN_00576f4c
 * Signature: undefined FUN_00576f4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576f4c(lua_State *param_1)

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
    if (((this_00 != (SceneObject *)0x0) &&
        (this_00[0xf4] = (SceneObject)(bVar1 & 1), (bVar1 & 1) == 0)) &&
       (this_00[0xf0] == (SceneObject)0x0)) {
      Caver::SceneObject::Activate(this_00);
    }
  }
  return 0;
}


