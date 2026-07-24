/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c19c4
 * Function: Caver::ProgramState::IsFloatAtStackIndex
 * Signature: undefined __thiscall IsFloatAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::IsFloatAtStackIndex(int) */

bool __thiscall Caver::ProgramState::IsFloatAtStackIndex(ProgramState *this,int param_1)

{
  int iVar1;
  
  iVar1 = lua_isnumber(*(lua_State **)this,param_1);
  return iVar1 != 0;
}


