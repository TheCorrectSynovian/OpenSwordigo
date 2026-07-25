/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002006F0
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7PolygonES4_EET0_T_S6_S5_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *
 * Callers: 1
 *   0x00000000002C0F30  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Callees: 1
 *   0x00000000002C1554  std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002006F8 string=0x00000000002006FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>()
{
  return _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7PolygonES4_EET0_T_S6_S5_();
}

