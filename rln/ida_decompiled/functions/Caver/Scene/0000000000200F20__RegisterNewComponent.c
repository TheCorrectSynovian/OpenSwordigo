/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F20
 * Mangled: ._ZN5Caver5Scene20RegisterNewComponentERKN5boost13intrusive_ptrINS_9ComponentEEE
 * Demangled: Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 1
 *   0x0000000000473FB0  Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callees: 1
 *   0x00000000004657C0  Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F28 string=0x0000000000200F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::RegisterNewComponent()
{
  return _ZN5Caver5Scene20RegisterNewComponentERKN5boost13intrusive_ptrINS_9ComponentEEE();
}

