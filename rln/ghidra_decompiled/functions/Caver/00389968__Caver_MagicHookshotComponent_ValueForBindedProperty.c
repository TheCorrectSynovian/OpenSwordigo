/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00389968
 * Function: Caver::MagicHookshotComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicHookshotComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicHookshotComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicHookshotComponent::ValueForBindedProperty(MagicHookshotComponent *this,int param_1)

{
  if (param_1 == 0x68) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0x118),(FloatColor *)0x68);
    return;
  }
  SpellComponent::ValueForBindedProperty((SpellComponent *)(this + -0x10),param_1);
  return;
}


