/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FDF8
 * Mangled: _ZN5Caver22PhysicsObjectComponent6CreateEv
 * Demangled: Caver::PhysicsObjectComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FDB8  Caver::LightComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202A70  Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *   0x000000000024FE38  Caver::PhysicsPlatformComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FE08 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FE28 string=0x000000000024FE2C "!"
 *   insn=0x000000000024FE2C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::PhysicsObjectComponent *__fastcall Caver::PhysicsObjectComponent::Create(Caver::PhysicsObjectComponent *this)
{
  Caver::PhysicsObjectComponent *v1; // x19

  v1 = (Caver::PhysicsObjectComponent *)operator new(0x118u);
  Caver::PhysicsObjectComponent::PhysicsObjectComponent(v1);
  return v1;
}

