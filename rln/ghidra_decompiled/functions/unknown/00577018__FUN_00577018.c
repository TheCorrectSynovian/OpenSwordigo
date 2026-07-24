/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577018
 * Function: FUN_00577018
 * Signature: undefined FUN_00577018(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00577018(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    *(undefined1 *)(*plVar1 + 0xe8) = 1;
  }
  return 0;
}


