/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB40
 * Mangled: ._ZN5Caver19TextBubbleComponentC2Ev
 * Demangled: Caver::TextBubbleComponent::TextBubbleComponent(void)
 *
 * Callers: 1
 *   0x0000000000250778  Caver::TextBubbleComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000023CCB0  Caver::TextBubbleComponent::TextBubbleComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB48 string=0x00000000001FAB4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextBubbleComponent::TextBubbleComponent(Caver::TextBubbleComponent *this)
{
  return _ZN5Caver19TextBubbleComponentC2Ev(this);
}

