/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a00
 * Function: Caver::ProgramState::IsBoolAtStackIndex
 * Signature: undefined __thiscall IsBoolAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::IsBoolAtStackIndex(int) */

bool __thiscall Caver::ProgramState::IsBoolAtStackIndex(ProgramState *this,int param_1)

{
  int iVar1;
  
  iVar1 = lua_type(*(lua_State **)this,param_1);
  return iVar1 == 1;
}


