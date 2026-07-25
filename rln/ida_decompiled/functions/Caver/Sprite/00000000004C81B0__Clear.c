/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C81B0
 * Mangled: _ZN5Caver6Sprite5ClearEv
 * Demangled: Caver::Sprite::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::Clear(__int64 this)
{
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 28) = 0;
  return this;
}

