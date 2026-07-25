/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003230F8
 * Mangled: _ZNK5Caver5Proto24OrbitControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::OrbitControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000323070  Caver::Proto::OrbitControllerComponent::~OrbitControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

