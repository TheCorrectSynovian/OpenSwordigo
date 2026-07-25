/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7460
 * Mangled: ._ZN5Caver5Scene8AddGroupERKN5boost13intrusive_ptrINS_16SceneObjectGroupEEE
 * Demangled: Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callers: 2
 *   0x00000000002819C0  Caver::DimensionObjectComponent::Prepare(void)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004640C0  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7468 string=0x00000000001F746C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::AddGroup()
{
  return _ZN5Caver5Scene8AddGroupERKN5boost13intrusive_ptrINS_16SceneObjectGroupEEE();
}

