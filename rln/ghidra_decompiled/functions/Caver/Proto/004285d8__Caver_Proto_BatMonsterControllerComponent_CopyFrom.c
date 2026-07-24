/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004285d8
 * Function: Caver::Proto::BatMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BatMonsterControllerComponent * this, BatMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::CopyFrom(Caver::Proto::BatMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::CopyFrom
          (BatMonsterControllerComponent *this,BatMonsterControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 004285f8 to 005285fb has its CatchHandler @ 00428644 */
                    /* try { // try from 004285fc to 00528657 has its CatchHandler @ 00428598 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


