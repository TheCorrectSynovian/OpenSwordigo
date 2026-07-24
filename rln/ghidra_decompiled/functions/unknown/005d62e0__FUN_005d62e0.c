/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d62e0
 * Function: FUN_005d62e0
 * Signature: undefined FUN_005d62e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d62e0(lua_State *param_1)

{
  ProgramState *this;
  float fVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  fVar1 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
  fVar1 = sinf(fVar1);
  Caver::ProgramState::PushFloat(this,fVar1);
  return 1;
}


