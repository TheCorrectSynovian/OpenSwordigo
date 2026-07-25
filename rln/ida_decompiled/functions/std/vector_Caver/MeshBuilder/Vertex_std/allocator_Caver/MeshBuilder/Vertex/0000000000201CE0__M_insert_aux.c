/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201CE0
 * Mangled: ._ZNSt6vectorIN5Caver11MeshBuilder6VertexESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,Caver::MeshBuilder::Vertex const&)
 *
 * Callers: 1
 *   0x00000000002BA388  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *
 * Callees: 1
 *   0x00000000002BB87C  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,Caver::MeshBuilder::Vertex const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201CE8 string=0x0000000000201CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::MeshBuilder::Vertex>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver11MeshBuilder6VertexESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_();
}

