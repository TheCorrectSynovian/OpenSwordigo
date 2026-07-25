/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201850
 * Mangled: .glVertexPointer
 * Demangled: .glVertexPointer
 *
 * Callers: 4
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x000000000048D83C  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *   0x000000000048D8B8  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000006FEBE8  glVertexPointer
 *
 * Referenced strings: 1
 *   insn=0x0000000000201858 string=0x000000000020185C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glVertexPointer()
{
  return glVertexPointer();
}

