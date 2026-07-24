/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ba28
 * Function: Caver::Proto::SwingComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SwingComponent * this, SwingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::CopyFrom(Caver::Proto::SwingComponent const&) */

void __thiscall Caver::Proto::SwingComponent::CopyFrom(SwingComponent *this,SwingComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 0042ba10 with catch @ 0042ba48 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


