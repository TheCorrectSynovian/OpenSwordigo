/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426bbc
 * Function: Caver::Proto::LeapingMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(LeapingMonsterControllerComponent * this, LeapingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::CopyFrom(Caver::Proto::LeapingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::CopyFrom
          (LeapingMonsterControllerComponent *this,LeapingMonsterControllerComponent *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00426ab8 with catch @ 00426bc8
                        */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00426bf4 to 00526bff has its CatchHandler @ 00426c08 */
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 00426c00 to 00526c0b has its CatchHandler @ 00426a04 */
  return;
}


