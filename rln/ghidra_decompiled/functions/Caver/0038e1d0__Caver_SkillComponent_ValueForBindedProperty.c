/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038e1d0
 * Function: Caver::SkillComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SkillComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::ValueForBindedProperty(int) */

void __thiscall Caver::SkillComponent::ValueForBindedProperty(SkillComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithVector2((BindingValue *)(this + 0x88),(Vector2 *)0x2);
    return;
  }
  if (param_1 == 1) {
    BindingValue::ValueWithString((BindingValue *)(this + 0xa0),(string *)0x1);
    return;
  }
  Component::ValueForBindedProperty((int)this);
  return;
}


