/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF660
 * Mangled: ._ZN5Caver11SceneObject24LocalPointFromWorldPointERKNS_7Vector2E
 * Demangled: Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000238BD4  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Callees: 1
 *   0x0000000000473C50  Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF668 string=0x00000000001FF66C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::LocalPointFromWorldPoint(Caver::SceneObject *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver11SceneObject24LocalPointFromWorldPointERKNS_7Vector2E(this, a2);
}

