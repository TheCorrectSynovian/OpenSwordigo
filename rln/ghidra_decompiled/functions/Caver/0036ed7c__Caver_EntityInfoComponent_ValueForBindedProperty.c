/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036ed7c
 * Function: Caver::EntityInfoComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(EntityInfoComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::EntityInfoComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::EntityInfoComponent::ValueForBindedProperty(EntityInfoComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this + -0x10);
    return;
  }
  BindingValue::ValueWithString((BindingValue *)(this + 0x68),(string *)0x0);
  return;
}


