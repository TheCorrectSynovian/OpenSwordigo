/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003add40
 * Function: Caver::PortalEffectComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(PortalEffectComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::PortalEffectComponent::ValueForBindedProperty(PortalEffectComponent *this,int param_1)

{
  if (param_1 == 0x67) {
    BindingValue::ValueWithVector3((BindingValue *)(this + 200),(Vector3 *)0x67);
    return;
  }
  if (param_1 == 0x66) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xb8),(FloatColor *)0x66);
    return;
  }
  GlowComponent::ValueForBindedProperty((int)this);
  return;
}


