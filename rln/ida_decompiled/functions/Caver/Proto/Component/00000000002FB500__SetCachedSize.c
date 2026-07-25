/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB500
 * Mangled: _ZNK5Caver5Proto9Component13SetCachedSizeEi
 * Demangled: Caver::Proto::Component::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002FB4C8  Caver::Proto::Component::~Component()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}

