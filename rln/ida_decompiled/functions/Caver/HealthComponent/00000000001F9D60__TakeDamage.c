/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D60
 * Mangled: ._ZN5Caver15HealthComponent10TakeDamageEi
 * Demangled: Caver::HealthComponent::TakeDamage(int)
 *
 * Callers: 1
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Callees: 1
 *   0x0000000000270874  Caver::HealthComponent::RegisterLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9D64 string=0x00000000002709B4 "?"
 *   insn=0x00000000001F9D68 string=0x00000000001F9D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HealthComponent::TakeDamage(Caver::HealthComponent *this)
{
  JUMPOUT(0x2709B4);
}

