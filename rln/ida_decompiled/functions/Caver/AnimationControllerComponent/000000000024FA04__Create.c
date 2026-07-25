/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FA04
 * Mangled: _ZN5Caver28AnimationControllerComponent6CreateEv
 * Demangled: Caver::AnimationControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F9C4  Caver::TransformComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002037D0  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *   0x000000000024FA44  Caver::CharAnimControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FA14 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FA18 string=0x000000000024FA1C "m"
 *   insn=0x000000000024FA38 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AnimationControllerComponent *__fastcall Caver::AnimationControllerComponent::Create(
        Caver::AnimationControllerComponent *this)
{
  Caver::AnimationControllerComponent *v1; // x19

  v1 = (Caver::AnimationControllerComponent *)operator new(0xB8u);
  Caver::AnimationControllerComponent::AnimationControllerComponent(v1);
  return v1;
}

