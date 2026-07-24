/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ba20
 * Function: Caver::MagicSpellCastComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MagicSpellCastComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicSpellCastComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::MagicSpellCastComponent::SetValueForBindedProperty
          (MagicSpellCastComponent *this,int param_1,BindingValue *param_2)

{
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


