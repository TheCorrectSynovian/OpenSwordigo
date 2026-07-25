/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D40
 * Mangled: .glEnableClientState
 * Demangled: .glEnableClientState
 *
 * Callers: 3
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x000000000048D820  Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Callees: 1
 *   0x00000000006FE640  glEnableClientState
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D48 string=0x00000000001F4D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glEnableClientState()
{
  return glEnableClientState();
}

