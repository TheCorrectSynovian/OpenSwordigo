/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5250
 * Mangled: ._ZN5Caver24ParticleEmitterComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_
 * Demangled: Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5258 string=0x00000000001F525C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::Draw(
        Caver::ParticleEmitterComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        const Caver::Vector3 *a4,
        const Caver::Vector3 *a5)
{
  return _ZN5Caver24ParticleEmitterComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_(
           this,
           a2,
           a3,
           a4,
           a5);
}

