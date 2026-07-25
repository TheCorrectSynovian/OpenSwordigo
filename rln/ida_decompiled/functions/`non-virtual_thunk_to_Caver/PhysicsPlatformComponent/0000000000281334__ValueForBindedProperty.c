/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281334
 * Mangled: _ZThn16_N5Caver24PhysicsPlatformComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203D10  Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281334 string=0x0000000000281338 "v\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PhysicsPlatformComponent::ValueForBindedProperty(
        Caver::PhysicsPlatformComponent *this,
        int a2)
{
  return Caver::PhysicsPlatformComponent::ValueForBindedProperty(
           (Caver::PhysicsPlatformComponent *)((char *)this - 16),
           a2);
}

