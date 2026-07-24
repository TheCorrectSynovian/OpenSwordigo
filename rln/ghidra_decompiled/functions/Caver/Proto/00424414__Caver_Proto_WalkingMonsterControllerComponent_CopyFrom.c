/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424414
 * Function: Caver::Proto::WalkingMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(WalkingMonsterControllerComponent * this, WalkingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::CopyFrom(Caver::Proto::WalkingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::CopyFrom
          (WalkingMonsterControllerComponent *this,WalkingMonsterControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


