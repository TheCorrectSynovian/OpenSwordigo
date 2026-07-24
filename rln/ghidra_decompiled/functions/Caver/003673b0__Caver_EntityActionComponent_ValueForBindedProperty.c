/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003673b0
 * Function: Caver::EntityActionComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(EntityActionComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::EntityActionComponent::ValueForBindedProperty(EntityActionComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithProgram((BindingValue *)(this + 0x70),(Program *)0x0);
  return;
}


