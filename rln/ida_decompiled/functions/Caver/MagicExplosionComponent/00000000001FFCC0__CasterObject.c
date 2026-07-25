/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFCC0
 * Mangled: ._ZN5Caver23MagicExplosionComponent12CasterObjectEv
 * Demangled: Caver::MagicExplosionComponent::CasterObject(void)
 *
 * Callers: 1
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Callees: 1
 *   0x0000000000287B18  Caver::MagicExplosionComponent::CasterObject(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFCC4 string=0x0000000000287B18 "\t"
 *   insn=0x00000000001FFCC8 string=0x00000000001FFCCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicExplosionComponent::CasterObject(Caver::MagicExplosionComponent *this)
{
  return _ZN5Caver23MagicExplosionComponent12CasterObjectEv(this);
}

