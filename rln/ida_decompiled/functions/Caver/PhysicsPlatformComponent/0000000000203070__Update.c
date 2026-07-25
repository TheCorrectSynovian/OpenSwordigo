/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203070
 * Mangled: ._ZN5Caver24PhysicsPlatformComponent6UpdateEf
 * Demangled: Caver::PhysicsPlatformComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002815D8  `non-virtual thunk to'Caver::PhysicsPlatformComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000281440  Caver::PhysicsPlatformComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203078 string=0x000000000020307C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsPlatformComponent::Update(Caver::PhysicsPlatformComponent *this, float a2)
{
  return _ZN5Caver24PhysicsPlatformComponent6UpdateEf(this, a2);
}

