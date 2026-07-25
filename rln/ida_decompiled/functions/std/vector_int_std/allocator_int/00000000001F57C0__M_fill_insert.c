/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F57C0
 * Mangled: ._ZNSt6vectorIiSaIiEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPiS1_EEmRKi
 * Demangled: std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *
 * Callers: 3
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x0000000000446A58  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *   0x00000000004C2DDC  Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *
 * Callees: 1
 *   0x0000000000447CA4  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F57C8 string=0x00000000001F57CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<int>::_M_fill_insert(int a1, void *a2)
{
  return _ZNSt6vectorIiSaIiEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPiS1_EEmRKi(a1, a2);
}

