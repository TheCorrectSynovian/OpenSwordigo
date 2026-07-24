/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c177c
 * Function: Caver::ProgramState::Resume
 * Signature: undefined __thiscall Resume(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::Resume(int) */

void __thiscall Caver::ProgramState::Resume(ProgramState *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)(this + 0x48) = 0;
  iVar1 = lua_resume(*(lua_State **)this,param_1);
  if (iVar1 != 1) {
    this[0x53] = (ProgramState)0x1;
  }
  return;
}


