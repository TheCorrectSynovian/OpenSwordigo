/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE890
 * Mangled: ._ZNSt6vectorIPN5Caver19EntityInfoComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent **,std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>>,Caver::EntityInfoComponent * const&)
 *
 * Callers: 1
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *
 * Callees: 1
 *   0x000000000026F86C  std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent **,std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>>,Caver::EntityInfoComponent * const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE898 string=0x00000000001FE89C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<Caver::EntityInfoComponent *>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIPN5Caver19EntityInfoComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_(
           a1,
           a2);
}

