/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004104d0
 * Function: Caver::Proto::LightComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(LightComponent * this, LightComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::CopyFrom(Caver::Proto::LightComponent const&) */

void __thiscall Caver::Proto::LightComponent::CopyFrom(LightComponent *this,LightComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 0040ea50 with catch @ 004104f4 */
                    /* catch() { ... } // from try @ 0040e9c0 with catch @ 004104f8 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


