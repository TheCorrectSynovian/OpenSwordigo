/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B0DC
 * Mangled: _ZN5Caver16RenderingContext23FinishBackgroundLoadingEv
 * Demangled: Caver::RenderingContext::FinishBackgroundLoading(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9A20  Caver::UnbindBackgroundGLContext(void)
 *   0x0000000000200740  .glFlush
 *
 * Referenced strings: 2
 *   insn=0x000000000048B0E8 string=0x000000000048B0EC "M"
 *   insn=0x000000000048B0EC string=0x00000000001F9A20 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::FinishBackgroundLoading(Caver::RenderingContext *this)
{
  Caver *v1; // x0

  v1 = (Caver *)glFlush();
  return Caver::UnbindBackgroundGLContext(v1);
}

