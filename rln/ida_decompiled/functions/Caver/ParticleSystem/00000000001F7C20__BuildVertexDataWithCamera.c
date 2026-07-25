/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7C20
 * Mangled: ._ZN5Caver14ParticleSystem25BuildVertexDataWithCameraERKNS_7Vector3ES3_
 * Demangled: Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000454268  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7C28 string=0x00000000001F7C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleSystem::BuildVertexDataWithCamera(
        Caver::ParticleSystem *this,
        const Caver::Vector3 *a2,
        const Caver::Vector3 *a3)
{
  return _ZN5Caver14ParticleSystem25BuildVertexDataWithCameraERKNS_7Vector3ES3_(this, a2, a3);
}

