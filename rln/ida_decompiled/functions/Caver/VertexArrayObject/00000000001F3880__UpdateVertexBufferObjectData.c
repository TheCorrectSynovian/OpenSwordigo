/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3880
 * Mangled: ._ZN5Caver17VertexArrayObject28UpdateVertexBufferObjectDataEv
 * Demangled: Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *
 * Callers: 2
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D4EC  Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3888 string=0x00000000001F388C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::UpdateVertexBufferObjectData(Caver::VertexArrayObject *this)
{
  return _ZN5Caver17VertexArrayObject28UpdateVertexBufferObjectDataEv(this);
}

