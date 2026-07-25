/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7220
 * Mangled: ._ZN5Caver15DamageComponent23ResolvePotentialImpactsEb
 * Demangled: Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Callers: 7
 *   0x0000000000266444  Caver::DamageComponent::Update(float)
 *   0x0000000000266458  `non-virtual thunk to'Caver::DamageComponent::Update(float)
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028CC3C  Caver::ProjectileControllerComponent::Update(float)
 *   0x000000000028CCE8  `non-virtual thunk to'Caver::ProjectileControllerComponent::Update(float)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000266170  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7228 string=0x00000000001F722C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DamageComponent::ResolvePotentialImpacts(Caver::DamageComponent *this, bool a2)
{
  return _ZN5Caver15DamageComponent23ResolvePotentialImpactsEb(this, a2);
}

