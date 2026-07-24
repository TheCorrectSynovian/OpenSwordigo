/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576fbc
 * Function: FUN_00576fbc
 * Signature: undefined FUN_00576fbc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576fbc(lua_State *param_1)

{
  bool bVar1;
  ProgramState *this;
  long *plVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar2 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((plVar2 == (long *)0x0) || (lVar3 = *plVar2, lVar3 == 0)) || (*(long *)(lVar3 + 0x20) == 0))
  {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(lVar3 + 0xe8) == '\0';
  }
  Caver::ProgramState::PushBool(this,bVar1);
  return 1;
}


