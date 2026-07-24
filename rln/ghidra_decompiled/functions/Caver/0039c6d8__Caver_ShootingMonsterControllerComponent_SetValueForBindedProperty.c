/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c6d8
 * Function: Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ShootingMonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty
          (ShootingMonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  MonsterControllerComponent::SetValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1,param_2);
  return;
}


