/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032ddc0
 * Function: Caver::OverlayTextComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(OverlayTextComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::OverlayTextComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::OverlayTextComponent::GetEnumValuesForBindedProperty
          (OverlayTextComponent *this,int param_1,vector *param_2)

{
  OverlayComponent::GetEnumValuesForBindedProperty((int)this + -0x10,(vector *)(ulong)(uint)param_1)
  ;
  return;
}


