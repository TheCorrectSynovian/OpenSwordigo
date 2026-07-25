/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD050
 * Mangled: ._ZN5Caver18TransformComponent11WorldMatrixEv
 * Demangled: Caver::TransformComponent::WorldMatrix(void)
 *
 * Callers: 5
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x000000000024040C  Caver::TransformComponent::WorldMatrix(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD058 string=0x00000000001FD05C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TransformComponent::WorldMatrix(Caver::TransformComponent *this)
{
  return _ZN5Caver18TransformComponent11WorldMatrixEv(this);
}

