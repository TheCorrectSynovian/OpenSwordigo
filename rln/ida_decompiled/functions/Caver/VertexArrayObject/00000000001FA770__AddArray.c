/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA770
 * Mangled: ._ZN5Caver17VertexArrayObject8AddArrayEjiNS_8DataTypeEiPv
 * Demangled: Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *
 * Callers: 4
 *   0x00000000002C2838  Caver::WaterMeshComponent::CreateMesh(void)
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D620  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA774 string=0x000000000048D620 "@"
 *   insn=0x00000000001FA778 string=0x00000000001FA77C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::VertexArrayObject::AddArray()
{
  return _ZN5Caver17VertexArrayObject8AddArrayEjiNS_8DataTypeEiPv();
}

