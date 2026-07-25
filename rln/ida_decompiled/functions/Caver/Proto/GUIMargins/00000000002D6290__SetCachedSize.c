/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6290
 * Mangled: _ZNK5Caver5Proto10GUIMargins13SetCachedSizeEi
 * Demangled: Caver::Proto::GUIMargins::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D6248  Caver::Proto::GUIMargins::~GUIMargins()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIMargins::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

