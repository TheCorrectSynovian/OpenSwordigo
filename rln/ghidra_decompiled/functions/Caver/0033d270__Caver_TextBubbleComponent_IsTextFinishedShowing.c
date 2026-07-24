/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d270
 * Function: Caver::TextBubbleComponent::IsTextFinishedShowing
 * Signature: undefined __thiscall IsTextFinishedShowing(TextBubbleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::IsTextFinishedShowing() */

bool __thiscall Caver::TextBubbleComponent::IsTextFinishedShowing(TextBubbleComponent *this)

{
  if (*(ulong *)(*(long *)(this + 0x78) + 0x80) <
      *(long *)(*(long *)(*(long *)(this + 0x78) + 0x28) + -0x18) - 1U) {
    return false;
  }
  if (this[0x74] != (TextBubbleComponent)0x0) {
    return this[0x75] == (TextBubbleComponent)0x0;
  }
  return true;
}


