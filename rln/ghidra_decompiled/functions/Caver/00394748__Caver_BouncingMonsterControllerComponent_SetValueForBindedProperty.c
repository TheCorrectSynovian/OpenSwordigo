/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394748
 * Function: Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(BouncingMonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty
          (BouncingMonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 0x67) {
    *(undefined4 *)(this + 0xfc) = **(undefined4 **)(param_2 + 8);
    return;
  }
  if (param_1 == 0x66) {
    *(float *)(this + 0xf8) = **(float **)(param_2 + 8) * DAT_00684004;
    return;
  }
  MonsterControllerComponent::SetValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1,param_2);
  return;
}


