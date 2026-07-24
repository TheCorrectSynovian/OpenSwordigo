/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f430
 * Function: Caver::Proto::TouchableComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(TouchableComponent * this, TouchableComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::CopyFrom(Caver::Proto::TouchableComponent const&) */

void __thiscall
Caver::Proto::TouchableComponent::CopyFrom(TouchableComponent *this,TouchableComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 0042f450 to 0052f477 has its CatchHandler @ 0042f52c */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 0042f478 to 0052f4ff has its CatchHandler @ 0042f3c8 */
  return;
}


