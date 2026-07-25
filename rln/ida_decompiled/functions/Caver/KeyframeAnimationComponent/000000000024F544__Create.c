/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F544
 * Mangled: _ZN5Caver26KeyframeAnimationComponent6CreateEv
 * Demangled: Caver::KeyframeAnimationComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F504  Caver::ModelComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201170  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x000000000024F584  Caver::BlendAnimationComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024F550 string=0x000000000024F554 "#"
 *   insn=0x000000000024F554 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F574 string=0x000000000024F578 "N"
 *   insn=0x000000000024F578 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::KeyframeAnimationComponent *__fastcall Caver::KeyframeAnimationComponent::Create(
        Caver::KeyframeAnimationComponent *this)
{
  Caver::KeyframeAnimationComponent *v1; // x19

  v1 = (Caver::KeyframeAnimationComponent *)operator new(0x98u);
  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(v1);
  return v1;
}

