/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d4bc
 * Function: Caver::TextBubbleComponent::SetHandleTouches
 * Signature: undefined __thiscall SetHandleTouches(TextBubbleComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::SetHandleTouches(bool) */

void __thiscall Caver::TextBubbleComponent::SetHandleTouches(TextBubbleComponent *this,bool param_1)

{
  TouchableComponent *this_00;
  
  this_00 = (TouchableComponent *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e62f8);
  this[0x74] = (TextBubbleComponent)param_1;
  GUITextBubble::SetShowsIndicatorWhenFinished(*(GUITextBubble **)(this + 0x78),param_1);
  if (param_1) {
    if (this_00 == (TouchableComponent *)0x0) {
      this_00 = operator_new(0xa8);
      TouchableComponent::TouchableComponent(this_00);
      SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_00);
    }
    *(undefined4 *)(this_00 + 0x70) = 0x447a0000;
  }
  else if (this_00 != (TouchableComponent *)0x0) {
    SceneObject::RemoveComponentWithIdentifier
              (*(SceneObject **)(this + 0x28),*(int *)(this_00 + 0x20));
    return;
  }
  return;
}


