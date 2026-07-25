/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBDA0
 * Mangled: .glLoadMatrixf
 * Demangled: .glLoadMatrixf
 *
 * Callers: 3
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048B184  Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *   0x000000000048B290  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000006FE940  glLoadMatrixf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBDA8 string=0x00000000001FBDAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glLoadMatrixf()
{
  return glLoadMatrixf();
}

