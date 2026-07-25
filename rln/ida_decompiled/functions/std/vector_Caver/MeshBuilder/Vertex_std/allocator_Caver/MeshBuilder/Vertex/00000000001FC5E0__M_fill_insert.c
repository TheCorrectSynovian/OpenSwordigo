/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC5E0
 * Mangled: ._ZNSt6vectorIN5Caver11MeshBuilder6VertexESaIS2_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS2_S4_EEmRKS2_
 * Demangled: std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *
 * Callers: 2
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x0000000000446A58  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *
 * Callees: 1
 *   0x00000000004477DC  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC5E8 string=0x00000000001FC5EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::MeshBuilder::Vertex>::_M_fill_insert()
{
  return _ZNSt6vectorIN5Caver11MeshBuilder6VertexESaIS2_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS2_S4_EEmRKS2_();
}

