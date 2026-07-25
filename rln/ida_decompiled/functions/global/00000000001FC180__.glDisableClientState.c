/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC180
 * Mangled: .glDisableClientState
 * Demangled: .glDisableClientState
 *
 * Callers: 2
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048D820  Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Callees: 1
 *   0x00000000006FE968  glDisableClientState
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC188 string=0x00000000001FC18C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glDisableClientState()
{
  return glDisableClientState();
}

