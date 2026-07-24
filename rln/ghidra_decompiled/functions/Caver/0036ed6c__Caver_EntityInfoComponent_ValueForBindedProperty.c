/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036ed6c
 * Function: Caver::EntityInfoComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(EntityInfoComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::EntityInfoComponent::ValueForBindedProperty(EntityInfoComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithString((BindingValue *)(this + 0x78),(string *)0x0);
  return;
}


