/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F67A0
 * Mangled: ._ZN5Caver23MagicExplosionComponent22UpdateStarPolygonColorEv
 * Demangled: Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)
 *
 * Callers: 2
 *   0x0000000000287944  Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000288848  Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F67A8 string=0x00000000001F67AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicExplosionComponent::UpdateStarPolygonColor(Caver::MagicExplosionComponent *this)
{
  return _ZN5Caver23MagicExplosionComponent22UpdateStarPolygonColorEv(this);
}

