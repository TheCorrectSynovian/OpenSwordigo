/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f2b8
 * Function: Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(BlendAnimationComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty
          (BlendAnimationComponent *this,int param_1,vector *param_2)

{
  if ((uint)param_1 < 2) {
    Component::GetEnumValuesForBindedOutlet((Component *)this,(long)PTR_Interface_007e4c50,param_2);
    return;
  }
  return;
}


