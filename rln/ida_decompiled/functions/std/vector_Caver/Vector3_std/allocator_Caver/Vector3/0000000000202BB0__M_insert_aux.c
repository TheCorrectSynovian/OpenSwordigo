/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202BB0
 * Mangled: ._ZNSt6vectorIN5Caver7Vector3ESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector3*,std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>>,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x000000000046DA64  Caver::SceneGridLayer::CreateVertexData(void)
 *
 * Callees: 1
 *   0x000000000046E980  std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector3*,std::vector<Caver::Vector3,std::allocator<Caver::Vector3>>>,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202BB8 string=0x0000000000202BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::Vector3>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver7Vector3ESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_();
}

