/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577764
 * Function: FUN_00577764
 * Signature: undefined FUN_00577764(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00577764(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  float fVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  fVar2 = 0.0;
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    fVar2 = *(float *)(*plVar1 + 0x80) * DAT_00684000;
  }
  Caver::ProgramState::PushFloat(this,fVar2);
                    /* try { // try from 005777ac to 006777d3 has its CatchHandler @ 0057c73c */
  return 1;
}


