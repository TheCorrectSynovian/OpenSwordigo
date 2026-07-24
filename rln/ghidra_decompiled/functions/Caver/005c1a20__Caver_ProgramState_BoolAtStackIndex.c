/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a20
 * Function: Caver::ProgramState::BoolAtStackIndex
 * Signature: undefined __thiscall BoolAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::BoolAtStackIndex(int) */

bool __thiscall Caver::ProgramState::BoolAtStackIndex(ProgramState *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = lua_type(*(lua_State **)this,param_1);
  if (iVar2 == 1) {
    iVar2 = lua_toboolean(*(lua_State **)this,param_1);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


