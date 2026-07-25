/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200840
 * Mangled: ._ZN5Caver23MagicExplosionComponent17CreateStarPolygonEv
 * Demangled: Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *
 * Callers: 1
 *   0x000000000028777C  Caver::MagicExplosionComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000287944  Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200848 string=0x000000000020084C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicExplosionComponent::CreateStarPolygon(Caver::MagicExplosionComponent *this)
{
  return _ZN5Caver23MagicExplosionComponent17CreateStarPolygonEv(this);
}

