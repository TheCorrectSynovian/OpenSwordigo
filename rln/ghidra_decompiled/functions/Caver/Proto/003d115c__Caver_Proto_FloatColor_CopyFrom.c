/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d115c
 * Function: Caver::Proto::FloatColor::CopyFrom
 * Signature: undefined __thiscall CopyFrom(FloatColor * this, FloatColor * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FloatColor::CopyFrom(Caver::Proto::FloatColor const&) */

void __thiscall Caver::Proto::FloatColor::CopyFrom(FloatColor *this,FloatColor *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


