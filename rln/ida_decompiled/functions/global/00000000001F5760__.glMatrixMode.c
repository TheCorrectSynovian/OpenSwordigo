/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5760
 * Mangled: .glMatrixMode
 * Demangled: .glMatrixMode
 *
 * Callers: 2
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048B184  Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000006FE670  glMatrixMode
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5768 string=0x00000000001F576C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glMatrixMode()
{
  return glMatrixMode();
}

