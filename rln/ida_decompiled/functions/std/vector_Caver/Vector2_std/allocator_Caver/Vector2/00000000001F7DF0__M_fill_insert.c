/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7DF0
 * Mangled: ._ZNSt6vectorIN5Caver7Vector2ESaIS1_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS1_S3_EEmRKS1_
 * Demangled: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x00000000004B02F8  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *   0x00000000004B03D4  Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *
 * Callees: 1
 *   0x00000000004B08D8  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7DF8 string=0x00000000001F7DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::Vector2>::_M_fill_insert()
{
  return _ZNSt6vectorIN5Caver7Vector2ESaIS1_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS1_S3_EEmRKS1_();
}

