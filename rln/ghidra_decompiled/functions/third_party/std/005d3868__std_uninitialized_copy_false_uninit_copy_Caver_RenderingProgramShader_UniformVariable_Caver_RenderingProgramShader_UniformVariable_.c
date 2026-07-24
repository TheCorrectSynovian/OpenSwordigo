/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3868
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>
 * Signature: UniformVariable * __cdecl __uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>(UniformVariable * param_1, UniformVariable * param_2, UniformVariable * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgramShader::UniformVariable*
   std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable*,
   Caver::RenderingProgramShader::UniformVariable*>(Caver::RenderingProgramShader::UniformVariable*,
   Caver::RenderingProgramShader::UniformVariable*, Caver::RenderingProgramShader::UniformVariable*)
    */

UniformVariable *
std::__uninitialized_copy<false>::
__uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>
          (UniformVariable *param_1,UniformVariable *param_2,UniformVariable *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    FUN_0066a528(param_3 + 8,param_1 + 8);
    param_3 = param_3 + 0x10;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


