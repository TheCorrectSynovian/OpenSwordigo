/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF080
 * Mangled: ._ZNSt6vectorIN5boost13intrusive_ptrIN5Caver14ObjectTemplateEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *
 * Callees: 1
 *   0x000000000045FA58  std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF088 string=0x00000000001FF08C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver14ObjectTemplateEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

