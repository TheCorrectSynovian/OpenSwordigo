/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B0F8
 * Mangled: _ZN5Caver16RenderingContext11SetViewportERKNS_9RectangleE
 * Demangled: Caver::RenderingContext::SetViewport(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F6EC0  Caver::RenderingContext::SetViewport(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x0000000000201F40  .glViewport
 *
 * Referenced strings: 3
 *   insn=0x000000000048B108 string=0x000000000048B10C "!"
 *   insn=0x000000000048B10C string=0x000000000048B110 "B"
 *   insn=0x000000000048B110 string=0x000000000048B114 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetViewport(Caver::RenderingContext *this, const Caver::Rectangle *a2)
{
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)a2;
  return glViewport();
}

