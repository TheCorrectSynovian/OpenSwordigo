/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1304
 * Function: Caver::WalkingMonsterControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(WalkingMonsterControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::WalkingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::WalkingMonsterControllerComponent::GetBindings
          (WalkingMonsterControllerComponent *this,vector *param_1)

{
  MonsterControllerComponent::GetBindings((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


