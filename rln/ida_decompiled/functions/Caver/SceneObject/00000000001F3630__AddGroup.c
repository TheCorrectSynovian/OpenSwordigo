/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3630
 * Mangled: ._ZN5Caver11SceneObject8AddGroupEPNS_16SceneObjectGroupE
 * Demangled: Caver::SceneObject::AddGroup(Caver::SceneObjectGroup *)
 *
 * Callers: 1
 *   0x000000000047654C  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x0000000000473198  Caver::SceneObject::AddGroup(Caver::SceneObjectGroup *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3638 string=0x00000000001F363C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::AddGroup(Caver::SceneObject *this, Caver::SceneObjectGroup *a2)
{
  return _ZN5Caver11SceneObject8AddGroupEPNS_16SceneObjectGroupE(this, a2);
}

