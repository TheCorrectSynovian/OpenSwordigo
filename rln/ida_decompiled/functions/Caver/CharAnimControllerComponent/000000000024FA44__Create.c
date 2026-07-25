/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FA44
 * Mangled: _ZN5Caver27CharAnimControllerComponent6CreateEv
 * Demangled: Caver::CharAnimControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FA04  Caver::AnimationControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200750  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *   0x000000000024FA84  Caver::BackgroundComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FA54 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FA58 string=0x000000000024FA5C "="
 *   insn=0x000000000024FA78 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::CharAnimControllerComponent *__fastcall Caver::CharAnimControllerComponent::Create(
        Caver::CharAnimControllerComponent *this)
{
  Caver::CharAnimControllerComponent *v1; // x19

  v1 = (Caver::CharAnimControllerComponent *)operator new(0x188u);
  Caver::CharAnimControllerComponent::CharAnimControllerComponent(v1);
  return v1;
}

