/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBF84
 * Mangled: _ZNK5Caver5Proto14ObjectTemplate13SetCachedSizeEi
 * Demangled: Caver::Proto::ObjectTemplate::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002FBEFC  Caver::Proto::ObjectTemplate::~ObjectTemplate()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

