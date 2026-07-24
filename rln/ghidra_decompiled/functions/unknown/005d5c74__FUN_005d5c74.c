/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5c74
 * Function: FUN_005d5c74
 * Signature: undefined FUN_005d5c74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5c74(lua_State *param_1)

{
  ProgramState *this;
  float *pfVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar1 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* try { // try from 005d5c90 to 006d5cb7 has its CatchHandler @ 005d5dd0 */
  Caver::ProgramState::PushFloat(this,*pfVar1 + pfVar1[2]);
  return 1;
}


