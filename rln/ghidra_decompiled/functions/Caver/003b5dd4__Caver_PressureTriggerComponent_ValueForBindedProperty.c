/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b5dd4
 * Function: Caver::PressureTriggerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(PressureTriggerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::PressureTriggerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::PressureTriggerComponent::ValueForBindedProperty(PressureTriggerComponent *this,int param_1)

{
  Program *pPVar1;
  
  pPVar1 = (Program *)(ulong)(uint)param_1;
  switch(pPVar1) {
  case (Program *)0x0:
    BindingValue::ValueWithFloat((BindingValue *)(this + -0x10),*(float *)(this + 0x68));
    return;
  case (Program *)0x1:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[200],SUB41(param_1,0));
    return;
  case (Program *)0x2:
    BindingValue::ValueWithProgram((BindingValue *)(this + 0x78),pPVar1);
    return;
  case (Program *)0x3:
    BindingValue::ValueWithProgram((BindingValue *)(this + 0xa0),pPVar1);
    return;
  default:
    Component::ValueForBindedProperty((int)(BindingValue *)(this + -0x10));
    return;
  }
}


