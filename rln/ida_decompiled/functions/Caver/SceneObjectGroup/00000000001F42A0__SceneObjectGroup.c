/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F42A0
 * Mangled: ._ZN5Caver16SceneObjectGroupC2Ev
 * Demangled: Caver::SceneObjectGroup::SceneObjectGroup(void)
 *
 * Callers: 4
 *   0x00000000002819C0  Caver::DimensionObjectComponent::Prepare(void)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x0000000000473374  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x0000000000474EB4  Caver::SceneObjectGroup::SceneObjectGroup(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F42A8 string=0x00000000001F42AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::SceneObjectGroup(Caver::SceneObjectGroup *this)
{
  return _ZN5Caver16SceneObjectGroupC2Ev(this);
}

