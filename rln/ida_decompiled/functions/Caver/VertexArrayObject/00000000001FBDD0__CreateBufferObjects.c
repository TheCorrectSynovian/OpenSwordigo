/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBDD0
 * Mangled: ._ZN5Caver17VertexArrayObject19CreateBufferObjectsEb
 * Demangled: Caver::VertexArrayObject::CreateBufferObjects(bool)
 *
 * Callers: 3
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D39C  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBDD8 string=0x00000000001FBDDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::CreateBufferObjects(Caver::VertexArrayObject *this, bool a2)
{
  return _ZN5Caver17VertexArrayObject19CreateBufferObjectsEb(this, a2);
}

