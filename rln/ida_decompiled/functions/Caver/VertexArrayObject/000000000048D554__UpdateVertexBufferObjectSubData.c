/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D554
 * Mangled: _ZN5Caver17VertexArrayObject31UpdateVertexBufferObjectSubDataEii
 * Demangled: Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *
 * Callers: 1
 *   0x00000000001F3850  Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *
 * Callees: 2
 *   0x00000000001FC1A0  .glBufferSubData
 *   0x0000000000200850  .glBindBuffer
 *
 * Referenced strings: 6
 *   insn=0x000000000048D574 string=0x000000000048D578 "+"
 *   insn=0x000000000048D57C string=0x000000000048D580 "@"
 *   insn=0x000000000048D594 string=0x000000000048D598 "b~@"
 *   insn=0x000000000048D598 string=0x000000000048D59C "@"
 *   insn=0x000000000048D5A0 string=0x00000000001FC1A0 "0'"
 *   insn=0x000000000048D5A8 string=0x000000000048D5AC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(__int64 this)
{
  if ( *(int *)(this + 32) >= 1 )
  {
    glBindBuffer();
    glBufferSubData();
    return glBindBuffer();
  }
  return this;
}

