/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D22B0
 * Mangled: _ZN5Caver5Image5ClearEv
 * Demangled: Caver::Image::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 2
 *   insn=0x00000000004D22BC string=0x00000000004D22C0 "`"
 *   insn=0x00000000004D22C0 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Image::Clear(void **this)
{
  return memset(this[3], 0, *((int *)this + 5));
}

