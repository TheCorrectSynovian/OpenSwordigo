/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B15C
 * Mangled: _ZN5Caver16RenderingContext5ClearEbbb
 * Demangled: Caver::RenderingContext::Clear(bool,bool,bool)
 *
 * Callers: 1
 *   0x00000000001F3F30  Caver::RenderingContext::Clear(bool,bool,bool)
 *
 * Callees: 1
 *   0x00000000001F5BD0  .glClear
 *
 * Referenced strings: 7
 *   insn=0x000000000048B160 string=0x000000000048B164 ""
 *   insn=0x000000000048B164 string=0x000000000048B168 "_"
 *   insn=0x000000000048B168 string=0x000000000048B16C "\t"
 *   insn=0x000000000048B16C string=0x000000000048B170 "("
 *   insn=0x000000000048B170 string=0x000000000048B174 "\t"
 *   insn=0x000000000048B178 string=0x000000000048B17C " "
 *   insn=0x000000000048B180 string=0x00000000001F5BD0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::Clear(Caver::RenderingContext *this)
{
  return glClear();
}

