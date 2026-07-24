/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003999b8
 * Function: Caver::MonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::MonsterControllerComponent::SetValueForBindedProperty
          (MonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 3) {
    *(undefined4 *)(this + 200) = **(undefined4 **)(param_2 + 8);
    return;
  }
  Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  return;
}


