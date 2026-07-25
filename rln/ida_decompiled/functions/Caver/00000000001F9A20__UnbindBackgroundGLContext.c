/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A20
 * Mangled: ._ZN5Caver25UnbindBackgroundGLContextEv
 * Demangled: Caver::UnbindBackgroundGLContext(void)
 *
 * Callers: 1
 *   0x000000000048B0DC  Caver::RenderingContext::FinishBackgroundLoading(void)
 *
 * Callees: 1
 *   0x00000000004B2D54  Caver::UnbindBackgroundGLContext(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A28 string=0x00000000001F9A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::UnbindBackgroundGLContext(Caver *this)
{
  return _ZN5Caver25UnbindBackgroundGLContextEv(this);
}

