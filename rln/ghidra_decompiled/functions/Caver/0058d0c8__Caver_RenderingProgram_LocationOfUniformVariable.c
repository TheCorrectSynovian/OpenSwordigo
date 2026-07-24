/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d0c8
 * Function: Caver::RenderingProgram::LocationOfUniformVariable
 * Signature: undefined __thiscall LocationOfUniformVariable(RenderingProgram * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgram::LocationOfUniformVariable(int) */

undefined4 __thiscall
Caver::RenderingProgram::LocationOfUniformVariable(RenderingProgram *this,int param_1)

{
  return *(undefined4 *)(this + (long)param_1 * 4 + 0x38);
}


