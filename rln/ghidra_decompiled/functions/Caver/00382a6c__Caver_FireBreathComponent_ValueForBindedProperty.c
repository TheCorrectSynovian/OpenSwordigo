/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382a6c
 * Function: Caver::FireBreathComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(FireBreathComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::FireBreathComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::FireBreathComponent::ValueForBindedProperty(FireBreathComponent *this,int param_1)

{
  if (param_1 == 0x66) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xe0),(FloatColor *)0x66);
    return;
  }
  SpellComponent::ValueForBindedProperty((SpellComponent *)(this + -0x10),param_1);
  return;
}


