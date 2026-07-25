/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB390
 * Mangled: ._ZN5Caver23BindBackgroundGLContextEv
 * Demangled: Caver::BindBackgroundGLContext(void)
 *
 * Callers: 1
 *   0x000000000048AFB0  Caver::RenderingContext::RenderingContext(Caver::RenderingAPI)
 *
 * Callees: 1
 *   0x00000000004B2D50  Caver::BindBackgroundGLContext(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB398 string=0x00000000001FB39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindBackgroundGLContext(Caver *this)
{
  return _ZN5Caver23BindBackgroundGLContextEv(this);
}

