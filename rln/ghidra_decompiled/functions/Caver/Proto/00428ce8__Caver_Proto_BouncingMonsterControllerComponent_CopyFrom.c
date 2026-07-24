/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428ce8
 * Function: Caver::Proto::BouncingMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BouncingMonsterControllerComponent * this, BouncingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::CopyFrom(Caver::Proto::BouncingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::CopyFrom
          (BouncingMonsterControllerComponent *this,BouncingMonsterControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00428d18 to 00528d3b has its CatchHandler @ 00428ee4 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


