/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200210
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver13ObjectLibraryEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Callers: 3
 *   0x000000000045C0C8  Caver::ObjectLibrary::ImportLibrary(boost::shared_ptr<Caver::ObjectLibrary> const&)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *
 * Callees: 1
 *   0x000000000045E850  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200218 string=0x000000000020021C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::ObjectLibrary>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver13ObjectLibraryEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

