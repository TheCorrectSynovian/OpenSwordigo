/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F99D0
 * Mangled: ._ZN5Caver16SceneObjectGroup8SetSceneEPNS_5SceneE
 * Demangled: Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *
 * Callers: 3
 *   0x00000000004640C0  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x000000000046888C  Caver::Scene::RemoveGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x0000000000473374  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x0000000000476710  Caver::SceneObjectGroup::SetScene(Caver::Scene *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F99D8 string=0x00000000001F99DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::SetScene(Caver::SceneObjectGroup *this, Caver::Scene *a2)
{
  return _ZN5Caver16SceneObjectGroup8SetSceneEPNS_5SceneE(this, a2);
}

