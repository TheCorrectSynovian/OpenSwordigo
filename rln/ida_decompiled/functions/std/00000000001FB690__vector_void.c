/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB690
 * Mangled: ._ZNSt6vectorIPFvvESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<void (*)(void),std::allocator<void (*)(void)>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void (**)(void),std::vector<void (*)(void),std::allocator<void (*)(void)>>>,void (* const&)(void))
 *
 * Callers: 1
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *
 * Callees: 1
 *   0x00000000004D7FEC  std::vector<void (*)(void),std::allocator<void (*)(void)>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void (**)(void),std::vector<void (*)(void),std::allocator<void (*)(void)>>>,void (* const&)(void))
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB698 string=0x00000000001FB69C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<void (*)(void)>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIPFvvESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_(a1, a2);
}

