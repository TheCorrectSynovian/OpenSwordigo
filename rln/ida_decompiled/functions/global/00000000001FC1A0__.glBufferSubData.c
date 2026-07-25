/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC1A0
 * Mangled: .glBufferSubData
 * Demangled: .glBufferSubData
 *
 * Callers: 2
 *   0x000000000048D4EC  Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *   0x000000000048D554  Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *
 * Callees: 1
 *   0x00000000006FE970  glBufferSubData
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC1A8 string=0x00000000001FC1AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glBufferSubData()
{
  return glBufferSubData();
}

