/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6EC0
 * Mangled: ._ZN5Caver16RenderingContext11SetViewportERKNS_9RectangleE
 * Demangled: Caver::RenderingContext::SetViewport(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000478CE8  Java_com_touchfoo_swordigo_Native_drawApplication
 *
 * Callees: 1
 *   0x000000000048B0F8  Caver::RenderingContext::SetViewport(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6EC4 string=0x000000000048B0F8 " "
 *   insn=0x00000000001F6EC8 string=0x00000000001F6ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetViewport(Caver::RenderingContext *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver16RenderingContext11SetViewportERKNS_9RectangleE(this, a2);
}

