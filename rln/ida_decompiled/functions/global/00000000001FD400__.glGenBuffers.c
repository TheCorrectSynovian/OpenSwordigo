/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD400
 * Mangled: .glGenBuffers
 * Demangled: .glGenBuffers
 *
 * Callers: 1
 *   0x000000000048D39C  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *
 * Callees: 1
 *   0x00000000006FE9F0  glGenBuffers
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD408 string=0x00000000001FD40C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glGenBuffers()
{
  return glGenBuffers();
}

