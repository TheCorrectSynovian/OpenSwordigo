/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314D8C
 * Mangled: _ZNK5Caver5Proto23BushControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BushControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000314D44  Caver::Proto::BushControllerComponent::~BushControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BushControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

