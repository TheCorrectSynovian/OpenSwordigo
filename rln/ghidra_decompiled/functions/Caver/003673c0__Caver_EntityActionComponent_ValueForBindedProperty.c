/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003673c0
 * Function: Caver::EntityActionComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(EntityActionComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::EntityActionComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::EntityActionComponent::ValueForBindedProperty(EntityActionComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this + -0x10);
    return;
  }
  BindingValue::ValueWithProgram((BindingValue *)(this + 0x60),(Program *)0x0);
  return;
}


