/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424c14
 * Function: Caver::Proto::ChargingMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ChargingMonsterControllerComponent * this, ChargingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::CopyFrom(Caver::Proto::ChargingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::CopyFrom
          (ChargingMonsterControllerComponent *this,ChargingMonsterControllerComponent *param_1)

{
                    /* try { // try from 00424c18 to 00524c2b has its CatchHandler @ 004256e8 */
  if (param_1 != this) {
                    /* try { // try from 00424c3c to 00524c47 has its CatchHandler @ 004256b0 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


