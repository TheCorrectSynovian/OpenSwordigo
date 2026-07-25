/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF50
 * Mangled: ._ZN5Caver10FastVectorIPNS_16SceneObjectGroupEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *
 * Callers: 3
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000473198  Caver::SceneObject::AddGroup(Caver::SceneObjectGroup *)
 *   0x0000000000473214  Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *
 * Callees: 1
 *   0x0000000000474B24  Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF58 string=0x00000000001FEF5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::SceneObjectGroup *>::Resize()
{
  return _ZN5Caver10FastVectorIPNS_16SceneObjectGroupEE6ResizeEi();
}

