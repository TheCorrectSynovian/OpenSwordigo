/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e5014
 * Function: Caver::Proto::GuideTarget::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GuideTarget * this, GuideTarget * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::CopyFrom(Caver::Proto::GuideTarget const&) */

void __thiscall Caver::Proto::GuideTarget::CopyFrom(GuideTarget *this,GuideTarget *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


