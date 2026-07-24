/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038326c
 * Function: Caver::HookshotTrailComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(HookshotTrailComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::HookshotTrailComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::HookshotTrailComponent::GetEnumValuesForBindedProperty
          (HookshotTrailComponent *this,int param_1,vector *param_2)

{
  GlowComponent::GetEnumValuesForBindedProperty((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


