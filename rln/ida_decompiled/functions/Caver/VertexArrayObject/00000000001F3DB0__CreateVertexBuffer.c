/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3DB0
 * Mangled: ._ZN5Caver17VertexArrayObject18CreateVertexBufferEi
 * Demangled: Caver::VertexArrayObject::CreateVertexBuffer(int)
 *
 * Callers: 4
 *   0x00000000002C2838  Caver::WaterMeshComponent::CreateMesh(void)
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x0000000000453B50  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *
 * Callees: 1
 *   0x000000000048D324  Caver::VertexArrayObject::CreateVertexBuffer(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3DB8 string=0x00000000001F3DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::CreateVertexBuffer(Caver::VertexArrayObject *this, int a2)
{
  return _ZN5Caver17VertexArrayObject18CreateVertexBufferEi(this, a2);
}

