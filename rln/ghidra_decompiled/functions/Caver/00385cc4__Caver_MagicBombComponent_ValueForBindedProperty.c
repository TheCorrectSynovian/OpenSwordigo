/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385cc4
 * Function: Caver::MagicBombComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicBombComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicBombComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicBombComponent::ValueForBindedProperty(MagicBombComponent *this,int param_1)

{
  if (param_1 == 100) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xc0),(FloatColor *)0x64);
    return;
  }
  SpellComponent::ValueForBindedProperty((SpellComponent *)(this + -0x10),param_1);
  return;
}


