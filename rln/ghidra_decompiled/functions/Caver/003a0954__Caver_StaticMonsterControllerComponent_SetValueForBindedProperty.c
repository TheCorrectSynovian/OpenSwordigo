/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0954
 * Function: Caver::StaticMonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(StaticMonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::StaticMonsterControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::StaticMonsterControllerComponent::SetValueForBindedProperty
          (StaticMonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  MonsterControllerComponent::SetValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1,param_2);
  return;
}


