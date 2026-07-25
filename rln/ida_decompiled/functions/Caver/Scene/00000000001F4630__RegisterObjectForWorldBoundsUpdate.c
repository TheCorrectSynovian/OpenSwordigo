/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4630
 * Mangled: ._ZN5Caver5Scene34RegisterObjectForWorldBoundsUpdateERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 5
 *   0x000000000046F1E4  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x000000000046F83C  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x0000000000473948  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *   0x0000000000473B08  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Callees: 1
 *   0x0000000000465804  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4634 string=0x0000000000465804 ""
 *   insn=0x00000000001F4638 string=0x00000000001F463C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::RegisterObjectForWorldBoundsUpdate()
{
  return _ZN5Caver5Scene34RegisterObjectForWorldBoundsUpdateERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

