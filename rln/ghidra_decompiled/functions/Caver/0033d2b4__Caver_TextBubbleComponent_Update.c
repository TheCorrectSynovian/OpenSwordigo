/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d2b4
 * Function: Caver::TextBubbleComponent::Update
 * Signature: undefined __thiscall Update(TextBubbleComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::Update(float) */

void __thiscall Caver::TextBubbleComponent::Update(TextBubbleComponent *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_0068493c;
  fVar2 = param_1 * 5.0 + *(float *)(this + 0x70);
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  *(float *)(this + 0x70) = fVar2;
  if ((fVar1 < fVar2) && (*(GUITextBubble **)(this + 0x78) != (GUITextBubble *)0x0)) {
    GUITextBubble::Update(*(GUITextBubble **)(this + 0x78),param_1);
    return;
  }
  return;
}


