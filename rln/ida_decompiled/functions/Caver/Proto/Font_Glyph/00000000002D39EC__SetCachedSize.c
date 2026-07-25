/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D39EC
 * Mangled: _ZNK5Caver5Proto10Font_Glyph13SetCachedSizeEi
 * Demangled: Caver::Proto::Font_Glyph::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D3950  Caver::Proto::Font_Glyph::~Font_Glyph()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

