/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F36E0
 * Mangled: ._ZN5Caver14ParticleSystem28BuildVertexDataWithTransformERKNS_7Matrix4E
 * Demangled: Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *
 * Callers: 3
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003E1638  Caver::OverlayMenuButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000045491C  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F36E8 string=0x00000000001F36EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleSystem::BuildVertexDataWithTransform(
        Caver::ParticleSystem *this,
        const Caver::Matrix4 *a2)
{
  return _ZN5Caver14ParticleSystem28BuildVertexDataWithTransformERKNS_7Matrix4E(this, a2);
}

