/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3920
 * Mangled: ._ZN5Caver14ShapeComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *
 * Callers: 2
 *   0x00000000002178A0  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *   0x0000000000250B34  Caver::UtilityShapeComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000236D68  Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3928 string=0x00000000001F392C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShapeComponent::InitWithComponent(
        Caver::ShapeComponent *this,
        const Caver::ShapeComponent *a2)
{
  return _ZN5Caver14ShapeComponent17InitWithComponentEPKS0_(this, a2);
}

