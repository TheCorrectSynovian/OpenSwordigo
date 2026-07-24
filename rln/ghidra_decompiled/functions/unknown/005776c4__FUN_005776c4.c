/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005776c4
 * Function: FUN_005776c4
 * Signature: undefined FUN_005776c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005776c4(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  float fVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  fVar2 = 0.0;
                    /* try { // try from 005776ec to 006776f7 has its CatchHandler @ 0057c77c */
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    fVar2 = *(float *)(*plVar1 + 0x78);
  }
  Caver::ProgramState::PushFloat(this,fVar2);
  return 1;
}


