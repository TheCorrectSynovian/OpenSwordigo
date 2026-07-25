/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5430
 * Mangled: ._ZN5Caver11SceneObject12setLocalAABBERKNS_9RectangleE
 * Demangled: Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *
 * Callers: 2
 *   0x00000000004737D8  Caver::SceneObject::UpdateBounds(void)
 *   0x0000000000473948  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x0000000000473948  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5438 string=0x00000000001F543C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::setLocalAABB(Caver::SceneObject *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver11SceneObject12setLocalAABBERKNS_9RectangleE(this, a2);
}

