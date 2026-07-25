/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F47D0
 * Mangled: ._ZNK5Caver11SceneObject16GetAllComponentsEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::SceneObject::GetAllComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 1
 *   0x0000000000460DFC  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000047474C  Caver::SceneObject::GetAllComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F47D8 string=0x00000000001F47DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetAllComponents()
{
  return _ZNK5Caver11SceneObject16GetAllComponentsEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE();
}

