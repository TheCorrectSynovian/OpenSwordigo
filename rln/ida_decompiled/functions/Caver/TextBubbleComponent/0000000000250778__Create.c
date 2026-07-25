/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250778
 * Mangled: _ZN5Caver19TextBubbleComponent6CreateEv
 * Demangled: Caver::TextBubbleComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250738  Caver::OverlayTextComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAB40  Caver::TextBubbleComponent::TextBubbleComponent(void)
 *   0x00000000002507B8  Caver::TransformControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250788 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250790 string=0x00000000001FAB40 "0'"
 *   insn=0x00000000002507AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002507B0 string=0x00000000002507B4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TextBubbleComponent *__fastcall Caver::TextBubbleComponent::Create(Caver::TextBubbleComponent *this)
{
  Caver::TextBubbleComponent *v1; // x19

  v1 = (Caver::TextBubbleComponent *)operator new(0x88u);
  Caver::TextBubbleComponent::TextBubbleComponent(v1);
  return v1;
}

