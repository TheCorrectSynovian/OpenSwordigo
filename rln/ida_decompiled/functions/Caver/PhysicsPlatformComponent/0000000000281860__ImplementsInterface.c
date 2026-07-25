/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281860
 * Mangled: _ZN5Caver24PhysicsPlatformComponent19ImplementsInterfaceEl
 * Demangled: Caver::PhysicsPlatformComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002818B0  Caver::PhysicsPlatformComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000281860 string=0x0000000000281864 ""
 *   insn=0x0000000000281864 string=0x0000000000281868 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::PhysicsPlatformComponent::ImplementsInterface(
        Caver::PhysicsPlatformComponent *this,
        _QWORD (*a2)(Caver::PhysicsPlatformComponent *__hidden this))
{
  return a2 == Caver::PhysicsPlatformComponent::Interface;
}

