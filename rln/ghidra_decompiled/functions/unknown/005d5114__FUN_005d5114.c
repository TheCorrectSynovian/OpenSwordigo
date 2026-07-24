/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5114
 * Function: FUN_005d5114
 * Signature: undefined FUN_005d5114(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5114(lua_State *param_1)

{
  ProgramState *this;
  long lVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 005d5124 to 006d5137 has its CatchHandler @ 005d55bc */
  lVar1 = Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* try { // try from 005d5138 to 006d5193 has its CatchHandler @ 005d56a0 */
  Caver::ProgramState::PushFloat(this,*(float *)(lVar1 + 4));
  return 1;
}


