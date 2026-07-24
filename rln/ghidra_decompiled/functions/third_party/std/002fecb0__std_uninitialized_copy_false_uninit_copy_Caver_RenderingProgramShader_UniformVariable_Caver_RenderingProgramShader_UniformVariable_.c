/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fecb0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>
 * Signature: UniformVariable * __cdecl __uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>(UniformVariable * param_1, UniformVariable * param_2, UniformVariable * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


UniformVariable *
std::__uninitialized_copy<false>::
__uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>
          (UniformVariable *param_1,UniformVariable *param_2,UniformVariable *param_3)

{
  UniformVariable *pUVar1;
  
  pUVar1 = (UniformVariable *)
           (*(code *)
             PTR___uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>_007e1e88
           )();
  return pUVar1;
}


