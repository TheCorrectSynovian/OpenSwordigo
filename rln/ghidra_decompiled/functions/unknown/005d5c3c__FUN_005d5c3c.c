/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5c3c
 * Function: FUN_005d5c3c
 * Signature: undefined FUN_005d5c3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5c3c(lua_State *param_1)

{
  ProgramState *this;
  long lVar1;
  
                    /* try { // try from 005d5c48 to 006d5c6f has its CatchHandler @ 005d5de0 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  lVar1 = Caver::ProgramState::PointerAtStackIndex(this,1);
  Caver::ProgramState::PushFloat(this,*(float *)(lVar1 + 4));
  return 1;
}


