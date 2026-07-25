/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC18C
 * Mangled: _ZNK5Caver5Proto15StateProperties13SetCachedSizeEi
 * Demangled: Caver::Proto::StateProperties::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002EC154  Caver::Proto::StateProperties::~StateProperties()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

