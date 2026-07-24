/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a7c
 * Function: Caver::ProgramState::PushPointer
 * Signature: undefined __thiscall PushPointer(ProgramState * this, void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PushPointer(void*) */

void __thiscall Caver::ProgramState::PushPointer(ProgramState *this,void *param_1)

{
  lua_pushlightuserdata(*(lua_State **)this,param_1);
  return;
}


