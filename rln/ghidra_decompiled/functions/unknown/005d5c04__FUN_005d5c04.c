/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5c04
 * Function: FUN_005d5c04
 * Signature: undefined FUN_005d5c04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5c04(lua_State *param_1)

{
  ProgramState *this;
  float *pfVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar1 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
  Caver::ProgramState::PushFloat(this,*pfVar1);
  return 1;
}


