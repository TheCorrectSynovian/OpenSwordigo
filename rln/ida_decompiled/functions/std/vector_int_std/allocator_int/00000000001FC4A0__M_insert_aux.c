/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC4A0
 * Mangled: ._ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi
 * Demangled: std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *
 * Callers: 5
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002BAADC  Caver::MeshBuilder::AddFace(int,int,int)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x00000000004C2DDC  Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *
 * Callees: 1
 *   0x00000000002AC31C  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC4A8 string=0x00000000001FC4AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<int>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi(a1, a2);
}

