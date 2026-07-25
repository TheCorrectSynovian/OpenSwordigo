/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5640
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver7ProgramEEESaIS4_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS4_S6_EE
 * Demangled: std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_erase(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>)
 *
 * Callers: 1
 *   0x000000000045DF3C  Caver::ObjectLibrary::RemoveProgram(Caver::Program *)
 *
 * Callees: 1
 *   0x000000000045FA58  std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5648 string=0x00000000001F564C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::Program>>::_M_erase()
{
  JUMPOUT(0x460048);
}

