/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F7C4
 * Mangled: _ZN5Caver23CharControllerComponent6CreateEv
 * Demangled: Caver::CharControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F784  Caver::EntityActionComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201330  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000024F804  Caver::HeroEntityComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024F7D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F7F8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024F7FC string=0x000000000024F800 "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::CharControllerComponent *__fastcall Caver::CharControllerComponent::Create(Caver::CharControllerComponent *this)
{
  Caver::CharControllerComponent *v1; // x19

  v1 = (Caver::CharControllerComponent *)operator new(0x308u);
  Caver::CharControllerComponent::CharControllerComponent(v1);
  return v1;
}

