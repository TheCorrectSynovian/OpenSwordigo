/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c2c0
 * Function: Caver::RenderingContext::SetUniformVariable
 * Signature: undefined __cdecl SetUniformVariable(int param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetUniformVariable(int, Caver::Matrix4 const&) */

void Caver::RenderingContext::SetUniformVariable(int param_1,Matrix4 *param_2)

{
  RenderingProgram::LocationOfUniformVariable
            (*(RenderingProgram **)((ulong)(uint)param_1 + 0x38),(int)param_2);
  return;
}


