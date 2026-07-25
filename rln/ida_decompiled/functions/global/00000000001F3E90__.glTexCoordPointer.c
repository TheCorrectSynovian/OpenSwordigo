/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E90
 * Mangled: .glTexCoordPointer
 * Demangled: .glTexCoordPointer
 *
 * Callers: 3
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x000000000048D83C  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *   0x000000000048D8B8  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000006FE5C8  glTexCoordPointer
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E98 string=0x00000000001F3E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glTexCoordPointer()
{
  return glTexCoordPointer();
}

