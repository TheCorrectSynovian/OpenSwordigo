/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004295f0
 * Function: Caver::Proto::GenericMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GenericMonsterControllerComponent * this, GenericMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::CopyFrom(Caver::Proto::GenericMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::CopyFrom
          (GenericMonsterControllerComponent *this,GenericMonsterControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* catch() { ... } // from try @ 00429268 with catch @ 00429624 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


