/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423f78
 * Function: Caver::Proto::MonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MonsterControllerComponent * this, MonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::CopyFrom(Caver::Proto::MonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::MonsterControllerComponent::CopyFrom
          (MonsterControllerComponent *this,MonsterControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


