/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416228
 * Function: Caver::Proto::PressureTriggerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PressureTriggerComponent * this, PressureTriggerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::CopyFrom(Caver::Proto::PressureTriggerComponent const&)
    */

void __thiscall
Caver::Proto::PressureTriggerComponent::CopyFrom
          (PressureTriggerComponent *this,PressureTriggerComponent *param_1)

{
                    /* try { // try from 0041622c to 005162af has its CatchHandler @ 0041658c */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


