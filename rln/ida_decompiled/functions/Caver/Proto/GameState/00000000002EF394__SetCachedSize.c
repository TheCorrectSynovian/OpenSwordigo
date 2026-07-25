/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EF394
 * Mangled: _ZNK5Caver5Proto9GameState13SetCachedSizeEi
 * Demangled: Caver::Proto::GameState::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002EF35C  Caver::Proto::GameState::~GameState()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameState::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

