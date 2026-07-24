/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005779b0
 * Function: FUN_005779b0
 * Signature: undefined FUN_005779b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005779b0(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  SceneObject *this_00;
  float fVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar1 == (undefined8 *)0x0) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar1;
                    /* try { // try from 005779dc to 00677a03 has its CatchHandler @ 0057cb40 */
    fVar2 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
    if (this_00 != (SceneObject *)0x0) {
      Caver::SceneObject::SetInstanceScaling(this_00,fVar2);
    }
  }
  return 0;
}


