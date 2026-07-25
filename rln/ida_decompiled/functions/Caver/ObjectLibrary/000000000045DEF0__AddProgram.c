/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DEF0
 * Mangled: _ZN5Caver13ObjectLibrary10AddProgramERKN5boost10shared_ptrINS_7ProgramEEE
 * Demangled: Caver::ObjectLibrary::AddProgram(boost::shared_ptr<Caver::Program> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4690  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *
 * Referenced strings: 10
 *   insn=0x000000000045DEFC string=0x000000000045DF00 "*"
 *   insn=0x000000000045DF00 string=0x000000000045DF04 "\n"
 *   insn=0x000000000045DF04 string=0x000000000045DF08 ")"
 *   insn=0x000000000045DF08 string=0x000000000045DF0C "\t"
 *   insn=0x000000000045DF10 string=0x000000000045DF14 "*"
 *   insn=0x000000000045DF10 string=0x000000000045DF20 "A"
 *   insn=0x000000000045DF14 string=0x000000000045DF18 "J"
 *   insn=0x000000000045DF18 string=0x000000000045DF1C "*"
 *   insn=0x000000000045DF20 string=0x000000000045DF24 "8"
 *   insn=0x000000000045DF38 string=0x00000000001F4690 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::AddProgram(__int64 result, _QWORD *a2)
{
  _QWORD *v2; // x8
  __int64 v3; // x9

  v2 = *(_QWORD **)(result + 112);
  if ( v2 == *(_QWORD **)(result + 120) )
    return std::vector<boost::shared_ptr<Caver::Program>>::_M_insert_aux();
  *v2 = *a2;
  v3 = a2[1];
  v2[1] = v3;
  if ( v3 )
    ++*(_QWORD *)(v3 + 8);
  *(_QWORD *)(result + 112) = v2 + 2;
  return result;
}

