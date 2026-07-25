/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A80
 * Mangled: ._ZNSt6vectorIPKN5Caver8MeshDataESaIS3_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS3_S5_EERKS3_
 * Demangled: std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *
 * Callers: 2
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 1
 *   0x0000000000445F04  std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A88 string=0x00000000001F6A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<Caver::MeshData const*>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIPKN5Caver8MeshDataESaIS3_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS3_S5_EERKS3_(a1, a2);
}

