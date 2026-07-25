/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5520
 * Mangled: ._ZNSt6vectorIN5Caver7PolygonESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Callers: 1
 *   0x00000000002BFFA8  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *
 * Callees: 1
 *   0x00000000002C0F30  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5528 string=0x00000000001F552C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::Polygon>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver7PolygonESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_();
}

