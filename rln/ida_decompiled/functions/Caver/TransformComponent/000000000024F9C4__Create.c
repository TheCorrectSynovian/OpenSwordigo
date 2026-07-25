/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F9C4
 * Mangled: _ZN5Caver18TransformComponent6CreateEv
 * Demangled: Caver::TransformComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F984  Caver::ObjectLinkControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202560  Caver::TransformComponent::TransformComponent(void)
 *   0x000000000024FA04  Caver::AnimationControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024F9D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F9F4 string=0x000000000024F9F8 "."
 *   insn=0x000000000024F9F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TransformComponent *__fastcall Caver::TransformComponent::Create(Caver::TransformComponent *this)
{
  Caver::TransformComponent *v1; // x19

  v1 = (Caver::TransformComponent *)operator new(0xB0u);
  Caver::TransformComponent::TransformComponent(v1);
  return v1;
}

