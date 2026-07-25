/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA00
 * Mangled: ._ZNK5Caver11SceneObject8HasGroupEPNS_16SceneObjectGroupE
 * Demangled: Caver::SceneObject::HasGroup(Caver::SceneObjectGroup *)
 *
 * Callers: 1
 *   0x000000000047654C  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x00000000004722FC  Caver::SceneObject::HasGroup(Caver::SceneObjectGroup *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFA04 string=0x00000000004722FC "\t"
 *   insn=0x00000000001FFA08 string=0x00000000001FFA0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::HasGroup(Caver::SceneObject *this, Caver::SceneObjectGroup *a2)
{
  return _ZNK5Caver11SceneObject8HasGroupEPNS_16SceneObjectGroupE(this, a2);
}

