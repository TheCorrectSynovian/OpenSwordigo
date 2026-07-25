/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002017B0
 * Mangled: ._ZN5Caver23MagicExplosionComponent9SetDamageENS_10DamageTypeENS_17SpecialDamageTypeEif
 * Demangled: Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Callers: 1
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *
 * Callees: 1
 *   0x0000000000287B34  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002017B8 string=0x00000000002017BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MagicExplosionComponent::SetDamage()
{
  return _ZN5Caver23MagicExplosionComponent9SetDamageENS_10DamageTypeENS_17SpecialDamageTypeEif();
}

