/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00389954
 * Function: Caver::MagicHookshotComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicHookshotComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicHookshotComponent::ValueForBindedProperty(MagicHookshotComponent *this,int param_1)

{
  if (param_1 == 0x68) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0x128),(FloatColor *)0x68);
    return;
  }
  SpellComponent::ValueForBindedProperty((SpellComponent *)this,param_1);
  return;
}


