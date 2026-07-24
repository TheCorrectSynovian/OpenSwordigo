/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d514c
 * Function: FUN_005d514c
 * Signature: undefined FUN_005d514c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d514c(lua_State *param_1)

{
  ProgramState *this;
  long lVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  lVar1 = Caver::ProgramState::PointerAtStackIndex(this,1);
  Caver::ProgramState::PushFloat(this,*(float *)(lVar1 + 8));
  return 1;
}


