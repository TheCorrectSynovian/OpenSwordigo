/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c19e4
 * Function: Caver::ProgramState::FloatAtStackIndex
 * Signature: undefined __thiscall FloatAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::FloatAtStackIndex(int) */

float __thiscall Caver::ProgramState::FloatAtStackIndex(ProgramState *this,int param_1)

{
  double dVar1;
  
  dVar1 = (double)lua_tonumber(*(lua_State **)this,param_1);
  return (float)dVar1;
}


