/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A70
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver13ObjectLibraryEEESaIS4_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS4_S6_EE
 * Demangled: std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_erase(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>)
 *
 * Callers: 1
 *   0x000000000045C22C  Caver::ObjectLibrary::RemoveImportedLibrary(Caver::ObjectLibrary*)
 *
 * Callees: 1
 *   0x000000000045E850  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A78 string=0x00000000001F5A7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_erase()
{
  JUMPOUT(0x45EC2C);
}

