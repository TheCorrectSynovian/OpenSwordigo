/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425500
 * Function: Caver::Proto::SnappingMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SnappingMonsterControllerComponent * this, SnappingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::CopyFrom(Caver::Proto::SnappingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::SnappingMonsterControllerComponent::CopyFrom
          (SnappingMonsterControllerComponent *this,SnappingMonsterControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 00424e24 with catch @ 00425520 */
                    /* catch() { ... } // from try @ 00424dc8 with catch @ 00425524 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


