/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038fe90
 * Function: Caver::SpellComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SpellComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::ValueForBindedProperty(int) */

void __thiscall Caver::SpellComponent::ValueForBindedProperty(SpellComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithProgram((BindingValue *)(this + 0x90),(Program *)0x0);
  return;
}


