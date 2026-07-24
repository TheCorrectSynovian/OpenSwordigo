/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422854
 * Function: Caver::Proto::SimpleGlowComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SimpleGlowComponent * this, SimpleGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::CopyFrom(Caver::Proto::SimpleGlowComponent const&) */

void __thiscall
Caver::Proto::SimpleGlowComponent::CopyFrom(SimpleGlowComponent *this,SimpleGlowComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 00421f64 with catch @ 00422870 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


