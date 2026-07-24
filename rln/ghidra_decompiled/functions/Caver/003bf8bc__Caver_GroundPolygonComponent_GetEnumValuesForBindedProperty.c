/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bf8bc
 * Function: Caver::GroundPolygonComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(GroundPolygonComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GroundPolygonComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::GroundPolygonComponent::GetEnumValuesForBindedProperty
          (GroundPolygonComponent *this,int param_1,vector *param_2)

{
  Component::GetEnumValuesForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


