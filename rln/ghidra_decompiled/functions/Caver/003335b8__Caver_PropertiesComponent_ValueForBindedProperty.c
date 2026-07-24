/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003335b8
 * Function: Caver::PropertiesComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(PropertiesComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::PropertiesComponent::ValueForBindedProperty(PropertiesComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithProgram((BindingValue *)(this + 0x78),(Program *)0x0);
  return;
}


