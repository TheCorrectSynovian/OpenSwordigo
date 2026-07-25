/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4690
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver7ProgramEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *
 * Callers: 2
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045DEF0  Caver::ObjectLibrary::AddProgram(boost::shared_ptr<Caver::Program> const&)
 *
 * Callees: 1
 *   0x000000000045EE38  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4698 string=0x00000000001F469C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::Program>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver7ProgramEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

