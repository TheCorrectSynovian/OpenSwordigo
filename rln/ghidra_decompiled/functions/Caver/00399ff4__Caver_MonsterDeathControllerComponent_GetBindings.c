/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399ff4
 * Function: Caver::MonsterDeathControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(MonsterDeathControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::MonsterDeathControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::MonsterDeathControllerComponent::GetBindings
          (MonsterDeathControllerComponent *this,vector *param_1)

{
  Component::GetBindings((Component *)(this + -0x10),param_1);
  return;
}


