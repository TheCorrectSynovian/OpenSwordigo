/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D10
 * Mangled: ._ZN5boost10shared_ptrIN5Caver5Proto14ObjectTemplateEEC2IS3_EEPT_
 * Demangled: boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>(Caver::Proto::ObjectTemplate *)
 *
 * Callers: 2
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x000000000045EE38  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D18 string=0x00000000001F8D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>()
{
  JUMPOUT(0x45F214);
}

