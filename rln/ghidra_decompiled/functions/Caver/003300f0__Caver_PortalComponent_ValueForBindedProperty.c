/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003300f0
 * Function: Caver::PortalComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(PortalComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::PortalComponent::ValueForBindedProperty(int) */

void __thiscall Caver::PortalComponent::ValueForBindedProperty(PortalComponent *this,int param_1)

{
  if (param_1 == 3) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x88],true);
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      BindingValue::ValueWithString((BindingValue *)(this + 0x78),(string *)0x1);
      return;
    }
    Component::ValueForBindedProperty((int)this + -0x10);
    return;
  }
  BindingValue::ValueWithString((BindingValue *)(this + 0x80),(string *)0x2);
  return;
}


