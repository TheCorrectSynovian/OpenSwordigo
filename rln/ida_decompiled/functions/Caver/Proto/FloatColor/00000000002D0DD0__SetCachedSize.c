/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0DD0
 * Mangled: _ZNK5Caver5Proto10FloatColor13SetCachedSizeEi
 * Demangled: Caver::Proto::FloatColor::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D0D88  Caver::Proto::FloatColor::~FloatColor()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

