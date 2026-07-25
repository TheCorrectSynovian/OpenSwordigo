/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F54C0
 * Mangled: ._ZNK5Caver14LightComponent9DirectionEv
 * Demangled: Caver::LightComponent::Direction(void)
 *
 * Callers: 2
 *   0x0000000000236664  Caver::ShadowVolumeComponent::UpdateVolume(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000222E68  Caver::LightComponent::Direction(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F54C8 string=0x00000000001F54CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightComponent::Direction(Caver::LightComponent *this)
{
  return _ZNK5Caver14LightComponent9DirectionEv(this);
}

