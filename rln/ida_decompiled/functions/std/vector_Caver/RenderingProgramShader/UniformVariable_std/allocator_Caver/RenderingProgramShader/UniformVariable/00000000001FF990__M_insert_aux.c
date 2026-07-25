/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF990
 * Mangled: ._ZNSt6vectorIN5Caver22RenderingProgramShader15UniformVariableESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *
 * Callers: 1
 *   0x00000000004D32DC  Caver::RenderingProgramShader::AddUniformVariable(int,std::string const&)
 *
 * Callees: 1
 *   0x00000000004D3458  std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF998 string=0x00000000001FF99C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::RenderingProgramShader::UniformVariable>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver22RenderingProgramShader15UniformVariableESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_();
}

