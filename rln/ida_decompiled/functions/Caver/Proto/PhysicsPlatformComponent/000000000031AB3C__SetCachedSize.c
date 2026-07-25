/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AB3C
 * Mangled: _ZNK5Caver5Proto24PhysicsPlatformComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::PhysicsPlatformComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031AAF4  Caver::Proto::PhysicsPlatformComponent::~PhysicsPlatformComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsPlatformComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

