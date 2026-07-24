/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d62a8
 * Function: FUN_005d62a8
 * Signature: undefined FUN_005d62a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d62a8(lua_State *param_1)

{
  ProgramState *this;
  float fVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  fVar1 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
  Caver::ProgramState::PushFloat(this,ABS(fVar1));
  return 1;
}


