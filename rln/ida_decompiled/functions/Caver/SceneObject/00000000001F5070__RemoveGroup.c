/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5070
 * Mangled: ._ZN5Caver11SceneObject11RemoveGroupEPNS_16SceneObjectGroupE
 * Demangled: Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *
 * Callers: 3
 *   0x0000000000474EF0  Caver::SceneObjectGroup::~SceneObjectGroup()
 *   0x00000000004765DC  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *   0x00000000004766AC  Caver::SceneObjectGroup::RemoveObjectAtIndex(int)
 *
 * Callees: 1
 *   0x0000000000473214  Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5078 string=0x00000000001F507C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RemoveGroup(Caver::SceneObject *this, Caver::SceneObjectGroup *a2)
{
  return _ZN5Caver11SceneObject11RemoveGroupEPNS_16SceneObjectGroupE(this, a2);
}

