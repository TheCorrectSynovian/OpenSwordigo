/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1DA8
 * Mangled: _ZNK5Caver5Proto10LevelState13SetCachedSizeEi
 * Demangled: Caver::Proto::LevelState::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002F1D70  Caver::Proto::LevelState::~LevelState()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

