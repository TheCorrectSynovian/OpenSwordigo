/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B11C
 * Mangled: _ZN5Caver16RenderingContext13SetClearColorERKNS_5ColorE
 * Demangled: Caver::RenderingContext::SetClearColor(Caver::Color const&)
 *
 * Callers: 1
 *   0x00000000001F79A0  Caver::RenderingContext::SetClearColor(Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000001F8080  .glClearColor
 *
 * Referenced strings: 10
 *   insn=0x000000000048B120 string=0x000000000048B124 "!"
 *   insn=0x000000000048B124 string=0x000000000048B128 ""@=#"
 *   insn=0x000000000048B128 string=0x000000000048B12C "#"
 *   insn=0x000000000048B134 string=0x000000000048B138 "!"
 *   insn=0x000000000048B138 string=0x000000000048B13C "B"
 *   insn=0x000000000048B13C string=0x000000000048B140 "c"
 *   insn=0x000000000048B144 string=0x000000000048B148 "!"
 *   insn=0x000000000048B148 string=0x000000000048B14C "B"
 *   insn=0x000000000048B14C string=0x000000000048B150 "c"
 *   insn=0x000000000048B154 string=0x00000000001F8080 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetClearColor(Caver::RenderingContext *this, const Caver::Color *a2)
{
  return glClearColor();
}

