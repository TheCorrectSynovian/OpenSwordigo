/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b66f0
 * Function: Caver::RotatingBackgroundComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(RotatingBackgroundComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::RotatingBackgroundComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::RotatingBackgroundComponent::SetValueForBindedProperty
          (RotatingBackgroundComponent *this,int param_1,BindingValue *param_2)

{
  BackgroundComponent::SetValueForBindedProperty
            ((BackgroundComponent *)(this + -0x10),param_1,param_2);
  return;
}


