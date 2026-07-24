/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca05c
 * Function: Caver::SwingComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SwingComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::ValueForBindedProperty(int) */

void __thiscall Caver::SwingComponent::ValueForBindedProperty(SwingComponent *this,int param_1)

{
  switch(param_1) {
  case 1:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x90],SUB41(param_1,0));
    return;
  case 2:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x91],SUB41(param_1,0));
    return;
  case 3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x88));
    return;
  case 4:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x8c));
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


