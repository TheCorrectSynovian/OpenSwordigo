/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FDB8
 * Mangled: _ZN5Caver14LightComponent6CreateEv
 * Demangled: Caver::LightComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FD78  Caver::WeaponGlowComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002008B0  Caver::LightComponent::LightComponent(void)
 *   0x000000000024FDF8  Caver::PhysicsObjectComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FDC8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FDE8 string=0x000000000024FDEC "1"
 *   insn=0x000000000024FDEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::LightComponent *__fastcall Caver::LightComponent::Create(Caver::LightComponent *this)
{
  Caver::LightComponent *v1; // x19

  v1 = (Caver::LightComponent *)operator new(0xB0u);
  Caver::LightComponent::LightComponent(v1);
  return v1;
}

