/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FE38
 * Mangled: _ZN5Caver24PhysicsPlatformComponent6CreateEv
 * Demangled: Caver::PhysicsPlatformComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FDF8  Caver::PhysicsObjectComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA850  Caver::PhysicsPlatformComponent::PhysicsPlatformComponent(void)
 *   0x000000000024FE78  Caver::BreakableObjectComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FE48 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FE50 string=0x00000000001FA850 "0'"
 *   insn=0x000000000024FE6C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::PhysicsPlatformComponent *__fastcall Caver::PhysicsPlatformComponent::Create(
        Caver::PhysicsPlatformComponent *this)
{
  Caver::PhysicsPlatformComponent *v1; // x19

  v1 = (Caver::PhysicsPlatformComponent *)operator new(0xA8u);
  Caver::PhysicsPlatformComponent::PhysicsPlatformComponent(v1);
  return v1;
}

