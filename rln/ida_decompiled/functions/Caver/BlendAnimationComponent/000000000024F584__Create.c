/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F584
 * Mangled: _ZN5Caver23BlendAnimationComponent6CreateEv
 * Demangled: Caver::BlendAnimationComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F544  Caver::KeyframeAnimationComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD2A0  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *   0x000000000024F5C4  Caver::GroundPolygonComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F594 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F598 string=0x000000000024F59C "A"
 *   insn=0x000000000024F59C string=0x00000000001FD2A0 "0'"
 *   insn=0x000000000024F5B4 string=0x000000000024F5B8 ">"
 *   insn=0x000000000024F5B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BlendAnimationComponent *__fastcall Caver::BlendAnimationComponent::Create(Caver::BlendAnimationComponent *this)
{
  Caver::BlendAnimationComponent *v1; // x19

  v1 = (Caver::BlendAnimationComponent *)operator new(0xA0u);
  Caver::BlendAnimationComponent::BlendAnimationComponent(v1);
  return v1;
}

