/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA10
 * Mangled: ._ZN5Caver7Vector216RotateWithSinCosEff
 * Demangled: Caver::Vector2::RotateWithSinCos(float,float)
 *
 * Callers: 4
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x0000000000454268  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000004545B4  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Matrix4 const&)
 *   0x000000000045491C  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004B282C  Caver::Vector2::RotateWithSinCos(float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBA18 string=0x00000000001FBA1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::RotateWithSinCos(Caver::Vector2 *this, float a2, float a3)
{
  return _ZN5Caver7Vector216RotateWithSinCosEff(this, a2, a3);
}

