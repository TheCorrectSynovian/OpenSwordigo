/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200850
 * Mangled: .glBindBuffer
 * Demangled: .glBindBuffer
 *
 * Callers: 7
 *   0x000000000048D39C  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *   0x000000000048D4EC  Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *   0x000000000048D554  Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x000000000048D8B8  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *   0x000000000048DA10  Caver::VertexArrayObject::UnbindArrays(Caver::RenderingContext *)
 *   0x000000000048DA6C  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Callees: 1
 *   0x00000000006FEB68  glBindBuffer
 *
 * Referenced strings: 1
 *   insn=0x0000000000200858 string=0x000000000020085C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glBindBuffer()
{
  return glBindBuffer();
}

