/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c198c
 * Function: Caver::ProgramState::IsIntAtStackIndex
 * Signature: undefined __thiscall IsIntAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::IsIntAtStackIndex(int) */

bool __thiscall Caver::ProgramState::IsIntAtStackIndex(ProgramState *this,int param_1)

{
  int iVar1;
  
  iVar1 = lua_isnumber(*(lua_State **)this,param_1);
  return iVar1 != 0;
}


