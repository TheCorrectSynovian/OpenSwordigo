/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8DA0
 * Mangled: ._ZN5Caver14ParticleSystem4DrawEPNS_16RenderingContextE
 * Demangled: Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *
 * Callers: 3
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003E1638  Caver::OverlayMenuButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8DA8 string=0x00000000001F8DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleSystem::Draw(Caver::ParticleSystem *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver14ParticleSystem4DrawEPNS_16RenderingContextE(this, a2);
}

