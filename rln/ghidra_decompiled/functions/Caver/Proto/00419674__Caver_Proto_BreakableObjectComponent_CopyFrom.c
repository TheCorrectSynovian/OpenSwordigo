/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419674
 * Function: Caver::Proto::BreakableObjectComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BreakableObjectComponent * this, BreakableObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::CopyFrom(Caver::Proto::BreakableObjectComponent const&)
    */

void __thiscall
Caver::Proto::BreakableObjectComponent::CopyFrom
          (BreakableObjectComponent *this,BreakableObjectComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


