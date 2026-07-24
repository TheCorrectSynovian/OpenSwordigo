/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00387604
 * Function: Caver::MagicExplosionComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicExplosionComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicExplosionComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicExplosionComponent::ValueForBindedProperty(MagicExplosionComponent *this,int param_1)

{
  BindingValue *this_00;
  
  this_00 = (BindingValue *)(this + -0x10);
  if (param_1 == 3) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0xd4));
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xa0),(FloatColor *)0x1);
      return;
    }
    Component::ValueForBindedProperty((int)this_00);
    return;
  }
  BindingValue::ValueWithFloat(this_00,*(float *)(this + 0xd0));
  return;
}


