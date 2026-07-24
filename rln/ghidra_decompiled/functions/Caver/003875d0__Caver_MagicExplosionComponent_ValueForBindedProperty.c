/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003875d0
 * Function: Caver::MagicExplosionComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicExplosionComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicExplosionComponent::ValueForBindedProperty(MagicExplosionComponent *this,int param_1)

{
  if (param_1 == 3) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xe4));
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xb0),(FloatColor *)0x1);
      return;
    }
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xe0));
  return;
}


