/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033cd04
 * Function: Caver::TextBubbleComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(TextBubbleComponent * this, TextBubbleComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::InitWithComponent(Caver::TextBubbleComponent const*) */

void __thiscall
Caver::TextBubbleComponent::InitWithComponent
          (TextBubbleComponent *this,TextBubbleComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


