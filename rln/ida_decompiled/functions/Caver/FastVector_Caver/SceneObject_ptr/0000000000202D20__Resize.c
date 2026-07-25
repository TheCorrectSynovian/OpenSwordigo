/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D20
 * Mangled: ._ZN5Caver10FastVectorIPNS_11SceneObjectEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *
 * Callers: 2
 *   0x000000000047654C  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *   0x00000000004765DC  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x0000000000476720  Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D28 string=0x0000000000202D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::SceneObject *>::Resize()
{
  return _ZN5Caver10FastVectorIPNS_11SceneObjectEE6ResizeEi();
}

