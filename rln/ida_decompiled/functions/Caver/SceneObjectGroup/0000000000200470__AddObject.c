/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200470
 * Mangled: ._ZN5Caver16SceneObjectGroup9AddObjectEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *
 * Callers: 4
 *   0x00000000002819C0  Caver::DimensionObjectComponent::Prepare(void)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000473374  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x000000000047654C  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200478 string=0x000000000020047C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::AddObject(Caver::SceneObjectGroup *this, Caver::SceneObject *a2)
{
  return _ZN5Caver16SceneObjectGroup9AddObjectEPNS_11SceneObjectE(this, a2);
}

