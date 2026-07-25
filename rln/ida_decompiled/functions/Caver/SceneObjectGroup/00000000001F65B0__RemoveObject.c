/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F65B0
 * Mangled: ._ZN5Caver16SceneObjectGroup12RemoveObjectEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *
 * Callers: 4
 *   0x000000000046F1E4  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000473374  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Callees: 1
 *   0x00000000004765DC  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F65B8 string=0x00000000001F65BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::RemoveObject(Caver::SceneObjectGroup *this, Caver::SceneObject *a2)
{
  return _ZN5Caver16SceneObjectGroup12RemoveObjectEPNS_11SceneObjectE(this, a2);
}

