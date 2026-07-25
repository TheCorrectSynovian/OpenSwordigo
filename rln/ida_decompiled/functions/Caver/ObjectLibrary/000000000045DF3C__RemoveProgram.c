/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DF3C
 * Mangled: _ZN5Caver13ObjectLibrary13RemoveProgramEPNS_7ProgramE
 * Demangled: Caver::ObjectLibrary::RemoveProgram(Caver::Program *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5640  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_erase(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>)
 *
 * Referenced strings: 8
 *   insn=0x000000000045DF3C string=0x000000000045DF40 "\t"
 *   insn=0x000000000045DF40 string=0x000000000045DF44 "?"
 *   insn=0x000000000045DF48 string=0x000000000045DF5C "\n"
 *   insn=0x000000000045DF50 string=0x000000000045DF54 "?"
 *   insn=0x000000000045DF5C string=0x000000000045DF60 "_"
 *   insn=0x000000000045DF60 string=0x000000000045DF64 "a"
 *   insn=0x000000000045DF64 string=0x000000000045DF50 "A"
 *   insn=0x000000000045DF6C string=0x00000000001F5640 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLibrary::RemoveProgram(Caver::ObjectLibrary *this, Caver::Program *a2)
{
  Caver::Program **v2; // x8
  Caver::Program **v3; // x9

  v2 = (Caver::Program **)*((_QWORD *)this + 13);
  v3 = (Caver::Program **)*((_QWORD *)this + 14);
  if ( v3 != v2 )
  {
    while ( *v2 != a2 )
    {
      v2 += 2;
      if ( v3 == v2 )
        return;
    }
    std::vector<boost::shared_ptr<Caver::Program>>::_M_erase();
  }
}

