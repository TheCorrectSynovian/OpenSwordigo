/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D238
 * Mangled: _ZN5Caver17VertexArrayObjectD2Ev
 * Demangled: Caver::VertexArrayObject::~VertexArrayObject()
 *
 * Callers: 1
 *   0x0000000000200560  Caver::VertexArrayObject::~VertexArrayObject()
 *
 * Callees: 1
 *   0x00000000001F5390  Caver::VertexArrayObject::Reset(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000048D238 string=0x00000000001F5390 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::VertexArrayObject::~VertexArrayObject(Caver::VertexArrayObject *this)
{
  Caver::VertexArrayObject::Reset(this);
}

