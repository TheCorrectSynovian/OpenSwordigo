/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003934b4
 * Function: Caver::BatMonsterControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(BatMonsterControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::BatMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::BatMonsterControllerComponent::GetBindings
          (BatMonsterControllerComponent *this,vector *param_1)

{
  MonsterControllerComponent::GetBindings((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


