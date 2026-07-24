/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032bae8
 * Function: Caver::OverlayTargetArrowComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(OverlayTargetArrowComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::OverlayTargetArrowComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::OverlayTargetArrowComponent::SetValueForBindedProperty
          (OverlayTargetArrowComponent *this,int param_1,BindingValue *param_2)

{
  OverlayComponent::SetValueForBindedProperty
            ((int)this + -0x10,(BindingValue *)(ulong)(uint)param_1);
  return;
}


