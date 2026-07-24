/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cce24
 * Function: Caver::WeaponTrailComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(WeaponTrailComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::WeaponTrailComponent::ValueForBindedProperty(WeaponTrailComponent *this,int param_1)

{
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xb0),(FloatColor *)0x0);
  return;
}


