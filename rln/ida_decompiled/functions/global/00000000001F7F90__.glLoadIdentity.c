/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F90
 * Mangled: .glLoadIdentity
 * Demangled: .glLoadIdentity
 *
 * Callers: 2
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048B36C  Caver::RenderingContext::SetIdentityMatrix(void)
 *
 * Callees: 1
 *   0x00000000006FE7D0  glLoadIdentity
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F98 string=0x00000000001F7F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glLoadIdentity()
{
  return glLoadIdentity();
}

