/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6940
 * Mangled: ._ZNSt6vectorIPN5Caver16ProgramComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent **,std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>>,Caver::ProgramComponent * const&)
 *
 * Callers: 1
 *   0x0000000000414AE4  Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Callees: 1
 *   0x0000000000415200  std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent **,std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>>,Caver::ProgramComponent * const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6948 string=0x00000000001F694C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<Caver::ProgramComponent *>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIPN5Caver16ProgramComponentESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_(
           a1,
           a2);
}

