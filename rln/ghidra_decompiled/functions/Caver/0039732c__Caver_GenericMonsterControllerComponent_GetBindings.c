/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039732c
 * Function: Caver::GenericMonsterControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(GenericMonsterControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::GenericMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::GenericMonsterControllerComponent::GetBindings
          (GenericMonsterControllerComponent *this,vector *param_1)

{
  MonsterControllerComponent::GetBindings((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


