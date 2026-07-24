/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412738
 * Function: Caver::Proto::CharAnimControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(CharAnimControllerComponent * this, CharAnimControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::CopyFrom(Caver::Proto::CharAnimControllerComponent
   const&) */

void __thiscall
Caver::Proto::CharAnimControllerComponent::CopyFrom
          (CharAnimControllerComponent *this,CharAnimControllerComponent *param_1)

{
                    /* try { // try from 00412750 to 00512753 has its CatchHandler @ 004127b0 */
  if (param_1 != this) {
                    /* try { // try from 00412754 to 005127cf has its CatchHandler @ 004126e4 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


