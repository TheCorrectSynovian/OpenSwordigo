/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5cb4
 * Function: FUN_005d5cb4
 * Signature: undefined FUN_005d5cb4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5cb4(lua_State *param_1)

{
  ProgramState *this;
  long lVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  lVar1 = Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* try { // try from 005d5cd8 to 006d5cff has its CatchHandler @ 005d5dc0 */
  Caver::ProgramState::PushFloat(this,*(float *)(lVar1 + 4) + *(float *)(lVar1 + 0xc));
  return 1;
}


