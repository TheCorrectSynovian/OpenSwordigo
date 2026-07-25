/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F36C0
 * Mangled: ._ZN5Caver23MagicExplosionComponent18ExplodeToDirectionERKNS_7Vector2Ef
 * Demangled: Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *
 * Callers: 2
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *
 * Callees: 1
 *   0x0000000000287E40  Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F36C8 string=0x00000000001F36CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicExplosionComponent::ExplodeToDirection(
        Caver::MagicExplosionComponent *this,
        const Caver::Vector2 *a2,
        float a3)
{
  return _ZN5Caver23MagicExplosionComponent18ExplodeToDirectionERKNS_7Vector2Ef(this, a2, a3);
}

