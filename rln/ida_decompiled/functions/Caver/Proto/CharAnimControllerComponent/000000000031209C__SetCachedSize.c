/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031209C
 * Mangled: _ZNK5Caver5Proto27CharAnimControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::CharAnimControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000312054  Caver::Proto::CharAnimControllerComponent::~CharAnimControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharAnimControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

