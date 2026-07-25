/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FECB0
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver22RenderingProgramShader15UniformVariableES5_EET0_T_S7_S6_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callers: 1
 *   0x00000000004D3458  std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *
 * Callees: 1
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FECB8 string=0x00000000001FECBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>()
{
  return _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver22RenderingProgramShader15UniformVariableES5_EET0_T_S7_S6_();
}

