/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7450
 * Mangled: ._ZN5Caver19TextBubbleComponent16SetHandleTouchesEb
 * Demangled: Caver::TextBubbleComponent::SetHandleTouches(bool)
 *
 * Callers: 1
 *   0x000000000023DA20  sub_23DA20
 *
 * Callees: 1
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7458 string=0x00000000001F745C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextBubbleComponent::SetHandleTouches(Caver::TextBubbleComponent *this, bool a2)
{
  return _ZN5Caver19TextBubbleComponent16SetHandleTouchesEb(this, a2);
}

