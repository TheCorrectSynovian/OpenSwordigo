/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1984
 * Function: Caver::ProgramState::PointerAtStackIndex
 * Signature: undefined __thiscall PointerAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PointerAtStackIndex(int) */

void __thiscall Caver::ProgramState::PointerAtStackIndex(ProgramState *this,int param_1)

{
  lua_touserdata(*(lua_State **)this,param_1);
  return;
}


