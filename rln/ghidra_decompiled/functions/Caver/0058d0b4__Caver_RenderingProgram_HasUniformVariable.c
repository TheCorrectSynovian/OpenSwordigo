/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d0b4
 * Function: Caver::RenderingProgram::HasUniformVariable
 * Signature: undefined __thiscall HasUniformVariable(RenderingProgram * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgram::HasUniformVariable(int) */

uint __thiscall Caver::RenderingProgram::HasUniformVariable(RenderingProgram *this,int param_1)

{
  return *(uint *)(this + (long)param_1 * 4 + 0x38) >> 0x1f ^ 1;
}


