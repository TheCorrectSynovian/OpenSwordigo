/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202AA0
 * Mangled: .glColorPointer
 * Demangled: .glColorPointer
 *
 * Callers: 3
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x000000000048D83C  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *   0x000000000048D8B8  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000006FEC50  glColorPointer
 *
 * Referenced strings: 1
 *   insn=0x0000000000202AA8 string=0x0000000000202AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glColorPointer()
{
  return glColorPointer();
}

