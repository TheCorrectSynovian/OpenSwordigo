/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fa94
 * Function: FUN_0037fa94
 * Signature: undefined FUN_0037fa94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037fa94(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  SceneObject *this_00;
  float fVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar1 == (undefined8 *)0x0) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar1;
    fVar3 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
    if ((this_00 != (SceneObject *)0x0) &&
       (lVar2 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e4ee0),
       lVar2 != 0)) {
      *(float *)(lVar2 + 0xe8) = fVar3 * DAT_0068796c;
    }
  }
  return 0;
}


