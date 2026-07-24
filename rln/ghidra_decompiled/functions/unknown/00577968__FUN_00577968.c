/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577968
 * Function: FUN_00577968
 * Signature: undefined FUN_00577968(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00577968(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  float fVar2;
  
                    /* try { // try from 00577974 to 0067799b has its CatchHandler @ 0057c688 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  fVar2 = 1.0;
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    fVar2 = *(float *)(*plVar1 + 0x88);
  }
  Caver::ProgramState::PushFloat(this,fVar2);
  return 1;
}


