/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F804
 * Mangled: _ZN5Caver19HeroEntityComponent6CreateEv
 * Demangled: Caver::HeroEntityComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F7C4  Caver::CharControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8220  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x000000000024F844  Caver::BushControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F810 string=0x000000000024F814 "s"
 *   insn=0x000000000024F814 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F81C string=0x00000000001F8220 "0'"
 *   insn=0x000000000024F838 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024F83C string=0x000000000024F840 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::HeroEntityComponent *__fastcall Caver::HeroEntityComponent::Create(Caver::HeroEntityComponent *this)
{
  Caver::HeroEntityComponent *v1; // x19

  v1 = (Caver::HeroEntityComponent *)operator new(0x1D0u);
  Caver::HeroEntityComponent::HeroEntityComponent(v1);
  return v1;
}

