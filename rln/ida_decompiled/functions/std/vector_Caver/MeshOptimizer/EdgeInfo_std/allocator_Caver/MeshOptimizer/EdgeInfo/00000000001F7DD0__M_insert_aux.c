/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7DD0
 * Mangled: ._ZNSt6vectorIN5Caver13MeshOptimizer8EdgeInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshOptimizer::EdgeInfo*,std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>>,Caver::MeshOptimizer::EdgeInfo const&)
 *
 * Callers: 1
 *   0x0000000000449DF8  Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(void)
 *
 * Callees: 1
 *   0x0000000000449DF8  Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7DD8 string=0x00000000001F7DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::MeshOptimizer::EdgeInfo>::_M_insert_aux()
{
  JUMPOUT(0x44A21C);
}

