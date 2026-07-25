/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F844
 * Mangled: _ZN5Caver23BushControllerComponent6CreateEv
 * Demangled: Caver::BushControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F804  Caver::HeroEntityComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200860  Caver::BushControllerComponent::BushControllerComponent(void)
 *   0x000000000024F884  Caver::ElevatorControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024F850 string=0x000000000024F854 "c"
 *   insn=0x000000000024F854 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F878 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BushControllerComponent *__fastcall Caver::BushControllerComponent::Create(Caver::BushControllerComponent *this)
{
  Caver::BushControllerComponent *v1; // x19

  v1 = (Caver::BushControllerComponent *)operator new(0xC0u);
  Caver::BushControllerComponent::BushControllerComponent(v1);
  return v1;
}

