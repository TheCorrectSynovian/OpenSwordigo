/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D10
 * Mangled: ._ZN5Caver24PhysicsPlatformComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000281334  `non-virtual thunk to'Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002812E4  Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203D14 string=0x00000000002812E4 "?"
 *   insn=0x0000000000203D18 string=0x0000000000203D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsPlatformComponent::ValueForBindedProperty(
        Caver::PhysicsPlatformComponent *this,
        int a2)
{
  return _ZN5Caver24PhysicsPlatformComponent22ValueForBindedPropertyEi(this, a2);
}

