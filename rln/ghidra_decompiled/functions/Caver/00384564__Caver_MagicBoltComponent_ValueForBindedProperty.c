/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00384564
 * Function: Caver::MagicBoltComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicBoltComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicBoltComponent::ValueForBindedProperty(MagicBoltComponent *this,int param_1)

{
  if (param_1 == 0x68) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x118));
    return;
  }
  if (param_1 == 0x67) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0x108),(FloatColor *)0x67);
    return;
  }
  SpellComponent::ValueForBindedProperty((SpellComponent *)this,param_1);
  return;
}


