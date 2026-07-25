/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D4888
 * Mangled: _ZNK5Caver5Proto4Font13SetCachedSizeEi
 * Demangled: Caver::Proto::Font::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D4850  Caver::Proto::Font::~Font()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

