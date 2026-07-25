/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045C22C
 * Mangled: _ZN5Caver13ObjectLibrary21RemoveImportedLibraryEPS0_
 * Demangled: Caver::ObjectLibrary::RemoveImportedLibrary(Caver::ObjectLibrary*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5A70  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_erase(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>)
 *
 * Referenced strings: 8
 *   insn=0x000000000045C22C string=0x000000000045C230 "\t"
 *   insn=0x000000000045C230 string=0x000000000045C234 "?"
 *   insn=0x000000000045C238 string=0x000000000045C24C "\n"
 *   insn=0x000000000045C240 string=0x000000000045C244 "?"
 *   insn=0x000000000045C24C string=0x000000000045C250 "_"
 *   insn=0x000000000045C250 string=0x000000000045C254 "a"
 *   insn=0x000000000045C254 string=0x000000000045C240 "A"
 *   insn=0x000000000045C25C string=0x00000000001F5A70 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLibrary::RemoveImportedLibrary(Caver::ObjectLibrary *this, Caver::ObjectLibrary *a2)
{
  Caver::ObjectLibrary **v2; // x8
  Caver::ObjectLibrary **v3; // x9

  v2 = (Caver::ObjectLibrary **)*((_QWORD *)this + 7);
  v3 = (Caver::ObjectLibrary **)*((_QWORD *)this + 8);
  if ( v3 != v2 )
  {
    while ( *v2 != a2 )
    {
      v2 += 2;
      if ( v3 == v2 )
        return;
    }
    std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_erase();
  }
}

