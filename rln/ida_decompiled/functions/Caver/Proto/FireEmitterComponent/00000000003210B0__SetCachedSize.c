/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003210B0
 * Mangled: _ZNK5Caver5Proto20FireEmitterComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::FireEmitterComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000321078  Caver::Proto::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

