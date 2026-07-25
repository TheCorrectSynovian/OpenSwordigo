/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FE78
 * Mangled: _ZN5Caver24BreakableObjectComponent6CreateEv
 * Demangled: Caver::BreakableObjectComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FE38  Caver::PhysicsPlatformComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6650  Caver::BreakableObjectComponent::BreakableObjectComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024FEB8  Caver::ShatterComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FE88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FE90 string=0x00000000001F6650 "0'"
 *   insn=0x000000000024FEAC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BreakableObjectComponent *__fastcall Caver::BreakableObjectComponent::Create(
        Caver::BreakableObjectComponent *this)
{
  Caver::BreakableObjectComponent *v1; // x19

  v1 = (Caver::BreakableObjectComponent *)operator new(0xB0u);
  Caver::BreakableObjectComponent::BreakableObjectComponent(v1);
  return v1;
}

