/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031a85c
 * Function: Caver::CollisionShapeComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(CollisionShapeComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::CollisionShapeComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::CollisionShapeComponent::SetValueForBindedProperty
          (CollisionShapeComponent *this,int param_1,BindingValue *param_2)

{
  SetValueForBindedProperty(this + -0x10,param_1,param_2);
  return;
}


