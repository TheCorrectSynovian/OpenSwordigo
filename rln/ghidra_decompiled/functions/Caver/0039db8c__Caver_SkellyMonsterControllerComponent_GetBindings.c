/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039db8c
 * Function: Caver::SkellyMonsterControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(SkellyMonsterControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::SkellyMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::SkellyMonsterControllerComponent::GetBindings
          (SkellyMonsterControllerComponent *this,vector *param_1)

{
  MonsterControllerComponent::GetBindings((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


