/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B50
 * Mangled: ._ZN5Caver15DamageComponentC2Ev
 * Demangled: Caver::DamageComponent::DamageComponent(void)
 *
 * Callers: 3
 *   0x000000000024FBF8  Caver::DamageComponent::Create(void)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000287B34  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Callees: 1
 *   0x0000000000263DD0  Caver::DamageComponent::DamageComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203B58 string=0x0000000000203B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DamageComponent::DamageComponent(Caver::DamageComponent *this)
{
  return _ZN5Caver15DamageComponentC2Ev(this);
}

