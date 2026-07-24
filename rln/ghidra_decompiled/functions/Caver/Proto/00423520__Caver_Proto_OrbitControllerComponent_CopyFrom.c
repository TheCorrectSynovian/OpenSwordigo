/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423520
 * Function: Caver::Proto::OrbitControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(OrbitControllerComponent * this, OrbitControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::CopyFrom(Caver::Proto::OrbitControllerComponent const&)
    */

void __thiscall
Caver::Proto::OrbitControllerComponent::CopyFrom
          (OrbitControllerComponent *this,OrbitControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* catch() { ... } // from try @ 004233cc with catch @ 0042354c */
                    /* catch() { ... } // from try @ 00423410 with catch @ 00423550 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


