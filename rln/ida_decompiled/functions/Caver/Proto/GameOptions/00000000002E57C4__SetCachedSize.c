/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E57C4
 * Mangled: _ZNK5Caver5Proto11GameOptions13SetCachedSizeEi
 * Demangled: Caver::Proto::GameOptions::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002E578C  Caver::Proto::GameOptions::~GameOptions()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

