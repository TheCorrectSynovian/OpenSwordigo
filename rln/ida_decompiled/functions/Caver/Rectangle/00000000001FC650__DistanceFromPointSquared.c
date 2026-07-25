/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC650
 * Mangled: ._ZNK5Caver9Rectangle24DistanceFromPointSquaredERKNS_7Vector2E
 * Demangled: Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *
 * Callees: 1
 *   0x00000000004B1724  Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC654 string=0x00000000004B1724 " "
 *   insn=0x00000000001FC658 string=0x00000000001FC65C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::DistanceFromPointSquared(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver9Rectangle24DistanceFromPointSquaredERKNS_7Vector2E(this, a2);
}

