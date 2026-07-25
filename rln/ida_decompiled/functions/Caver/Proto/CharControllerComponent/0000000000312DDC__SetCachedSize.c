/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312DDC
 * Mangled: _ZNK5Caver5Proto23CharControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::CharControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000312D78  Caver::Proto::CharControllerComponent::~CharControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

