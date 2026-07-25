/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5390
 * Mangled: ._ZN5Caver17VertexArrayObject5ResetEv
 * Demangled: Caver::VertexArrayObject::Reset(void)
 *
 * Callers: 4
 *   0x00000000002C2838  Caver::WaterMeshComponent::CreateMesh(void)
 *   0x00000000002C2C38  Caver::WaterMeshComponent::UpdateBounds(void)
 *   0x0000000000453B50  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x000000000048D238  Caver::VertexArrayObject::~VertexArrayObject()
 *
 * Callees: 1
 *   0x000000000048D23C  Caver::VertexArrayObject::Reset(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5398 string=0x00000000001F539C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::Reset(Caver::VertexArrayObject *this)
{
  return _ZN5Caver17VertexArrayObject5ResetEv(this);
}

