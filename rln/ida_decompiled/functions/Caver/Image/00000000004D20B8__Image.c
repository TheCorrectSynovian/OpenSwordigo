/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D20B8
 * Mangled: _ZN5Caver5ImageC2Ev
 * Demangled: Caver::Image::Image(void)
 *
 * Callers: 1
 *   0x00000000001F3970  Caver::Image::Image(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Image::Image(__int64 this)
{
  *(_BYTE *)this = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

