/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d50dc
 * Function: FUN_005d50dc
 * Signature: undefined FUN_005d50dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d50dc(lua_State *param_1)

{
  ProgramState *this;
  float *pfVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar1 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
  Caver::ProgramState::PushFloat(this,*pfVar1);
  return 1;
}


