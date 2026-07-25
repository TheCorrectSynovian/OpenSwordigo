/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5280
 * Mangled: ._ZNSt6vectorIN5Caver7Vector2ESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000004B05D8  Caver::Polygon::SplitEdgesToMaxLength(float)
 *
 * Callees: 1
 *   0x00000000002C0BE8  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5288 string=0x00000000001F528C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::Vector2>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver7Vector2ESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_();
}

