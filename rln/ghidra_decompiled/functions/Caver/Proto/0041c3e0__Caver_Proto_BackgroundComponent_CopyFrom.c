/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c3e0
 * Function: Caver::Proto::BackgroundComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BackgroundComponent * this, BackgroundComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::CopyFrom(Caver::Proto::BackgroundComponent const&) */

void __thiscall
Caver::Proto::BackgroundComponent::CopyFrom(BackgroundComponent *this,BackgroundComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 0041c21c with catch @ 0041c400 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 0041c424 to 0051c4ab has its CatchHandler @ 0041c4b4 */
  return;
}


