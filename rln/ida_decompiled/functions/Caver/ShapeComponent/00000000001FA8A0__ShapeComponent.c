/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA8A0
 * Mangled: ._ZN5Caver14ShapeComponentC2Ev
 * Demangled: Caver::ShapeComponent::ShapeComponent(void)
 *
 * Callers: 4
 *   0x000000000021779C  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *   0x000000000021BA74  Caver::CollisionShapeComponent::Clone(void)
 *   0x000000000024FB04  Caver::UtilityShapeComponent::Create(void)
 *   0x0000000000250B34  Caver::UtilityShapeComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000236D0C  Caver::ShapeComponent::ShapeComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA8A8 string=0x00000000001FA8AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShapeComponent::ShapeComponent(Caver::ShapeComponent *this)
{
  return _ZN5Caver14ShapeComponentC2Ev(this);
}

