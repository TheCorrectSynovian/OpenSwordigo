/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF8B0
 * Mangled: ._ZN5Caver17VertexArrayObjectC2Ev
 * Demangled: Caver::VertexArrayObject::VertexArrayObject(void)
 *
 * Callers: 5
 *   0x00000000002C1D0C  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x0000000000453994  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x0000000000459F04  Caver::LightOverlay::LightOverlay(void)
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *
 * Callees: 1
 *   0x000000000048D218  Caver::VertexArrayObject::VertexArrayObject(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF8B8 string=0x00000000001FF8BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::VertexArrayObject(Caver::VertexArrayObject *this)
{
  return _ZN5Caver17VertexArrayObjectC2Ev(this);
}

