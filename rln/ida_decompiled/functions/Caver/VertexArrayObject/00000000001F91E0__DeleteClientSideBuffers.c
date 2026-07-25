/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F91E0
 * Mangled: ._ZN5Caver17VertexArrayObject23DeleteClientSideBuffersEv
 * Demangled: Caver::VertexArrayObject::DeleteClientSideBuffers(void)
 *
 * Callers: 1
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D5CC  Caver::VertexArrayObject::DeleteClientSideBuffers(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F91E8 string=0x00000000001F91EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::DeleteClientSideBuffers(Caver::VertexArrayObject *this)
{
  return _ZN5Caver17VertexArrayObject23DeleteClientSideBuffersEv(this);
}

