/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002016C0
 * Mangled: ._ZNK5Caver9Rectangle15ScaledRectangleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *
 * Callers: 3
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *   0x00000000002999FC  Caver::MonsterControllerComponent::Prepare(void)
 *   0x0000000000299AA0  Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *
 * Callees: 1
 *   0x00000000004B20A0  Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002016C4 string=0x00000000004B20A0 " "
 *   insn=0x00000000002016C8 string=0x00000000002016CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::ScaledRectangle(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver9Rectangle15ScaledRectangleERKNS_7Vector2E(this, a2);
}

