/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004355cc
 * Function: Caver::Proto::FireBreathComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(FireBreathComponent * this, FireBreathComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::CopyFrom(Caver::Proto::FireBreathComponent const&) */

void __thiscall
Caver::Proto::FireBreathComponent::CopyFrom(FireBreathComponent *this,FireBreathComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 004355e8 to 005355ef has its CatchHandler @ 0043567c */
                    /* try { // try from 004355f0 to 0053569f has its CatchHandler @ 004354e4 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


