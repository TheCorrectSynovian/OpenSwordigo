/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410d48
 * Function: Caver::Proto::ShadowComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ShadowComponent * this, ShadowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::CopyFrom(Caver::Proto::ShadowComponent const&) */

void __thiscall
Caver::Proto::ShadowComponent::CopyFrom(ShadowComponent *this,ShadowComponent *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00410bfc with catch @ 00410d60
                        */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00410d84 to 00510dab has its CatchHandler @ 00410db4 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


