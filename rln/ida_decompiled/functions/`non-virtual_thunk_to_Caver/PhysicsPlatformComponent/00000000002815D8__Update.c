/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002815D8
 * Mangled: _ZThn24_N5Caver24PhysicsPlatformComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::PhysicsPlatformComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203070  Caver::PhysicsPlatformComponent::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PhysicsPlatformComponent::Update(
        Caver::PhysicsPlatformComponent *this,
        float a2)
{
  return Caver::PhysicsPlatformComponent::Update((Caver::PhysicsPlatformComponent *)((char *)this - 24), a2);
}

