/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0930
 * Function: Caver::StaticMonsterControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(StaticMonsterControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::StaticMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::StaticMonsterControllerComponent::GetBindings
          (StaticMonsterControllerComponent *this,vector *param_1)

{
  MonsterControllerComponent::GetBindings((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


