/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC580
 * Mangled: ._ZNSt6vectorIjSaIjEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPjS1_EERKj
 * Demangled: std::vector<uint,std::allocator<uint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<uint *,std::vector<uint,std::allocator<uint>>>,uint const&)
 *
 * Callers: 1
 *   0x000000000048CE18  Caver::RenderingProgram::~RenderingProgram()
 *
 * Callees: 1
 *   0x000000000048D0D4  std::vector<uint,std::allocator<uint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<uint *,std::vector<uint,std::allocator<uint>>>,uint const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC588 string=0x00000000001FC58C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<unsigned int>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIjSaIjEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPjS1_EERKj(a1, a2);
}

