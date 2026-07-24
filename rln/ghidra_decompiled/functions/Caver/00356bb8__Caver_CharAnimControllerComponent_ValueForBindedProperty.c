/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356bb8
 * Function: Caver::CharAnimControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(CharAnimControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::CharAnimControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::CharAnimControllerComponent::ValueForBindedProperty
          (CharAnimControllerComponent *this,int param_1)

{
  AnimationControllerComponent::ValueForBindedProperty
            ((AnimationControllerComponent *)(this + -0x10),param_1);
  return;
}


