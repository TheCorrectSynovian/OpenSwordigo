/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028175C
 * Mangled: _ZN5Caver24PhysicsPlatformComponentD0Ev
 * Demangled: Caver::PhysicsPlatformComponent::~PhysicsPlatformComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000281794  Caver::PhysicsPlatformComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000281768 string=0x000000000028176C "Y"
 *   insn=0x000000000028176C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028177C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028178C string=0x0000000000281790 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsPlatformComponent::~PhysicsPlatformComponent(Caver::PhysicsPlatformComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

