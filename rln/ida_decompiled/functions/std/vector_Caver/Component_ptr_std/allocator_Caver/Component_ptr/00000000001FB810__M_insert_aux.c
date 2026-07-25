/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB810
 * Mangled: ._ZNSt6vectorIPN5Caver9ComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::Component *,std::allocator<Caver::Component *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Component **,std::vector<Caver::Component *,std::allocator<Caver::Component *>>>,Caver::Component * const&)
 *
 * Callers: 1
 *   0x0000000000474690  Caver::SceneObject::GetComponentsWithInterface(long,std::vector<Caver::Component *,std::allocator<Caver::Component *>> *)
 *
 * Callees: 1
 *   0x0000000000474D6C  std::vector<Caver::Component *,std::allocator<Caver::Component *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Component **,std::vector<Caver::Component *,std::allocator<Caver::Component *>>>,Caver::Component * const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB818 string=0x00000000001FB81C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<Caver::Component *>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIPN5Caver9ComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_(a1, a2);
}

