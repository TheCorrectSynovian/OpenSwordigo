/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F92C0
 * Mangled: ._ZN5Caver17VertexArrayObject17CreateIndexBufferENS_8DataTypeEi
 * Demangled: Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *
 * Callers: 4
 *   0x00000000002C2838  Caver::WaterMeshComponent::CreateMesh(void)
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x0000000000453B50  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *
 * Callees: 1
 *   0x000000000048D358  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F92C8 string=0x00000000001F92CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::VertexArrayObject::CreateIndexBuffer()
{
  return _ZN5Caver17VertexArrayObject17CreateIndexBufferENS_8DataTypeEi();
}

