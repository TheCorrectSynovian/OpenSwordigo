/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF3E0
 * Mangled: ._ZN5Caver14ShapeComponent21SetDefaultShapeOfTypeENS_5Shape4TypeE
 * Demangled: Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Callers: 1
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Callees: 1
 *   0x0000000000238BD4  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF3E8 string=0x00000000001FF3EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ShapeComponent::SetDefaultShapeOfType()
{
  return _ZN5Caver14ShapeComponent21SetDefaultShapeOfTypeENS_5Shape4TypeE();
}

