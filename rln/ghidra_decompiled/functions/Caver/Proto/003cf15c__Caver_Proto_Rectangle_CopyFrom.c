/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf15c
 * Function: Caver::Proto::Rectangle::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Rectangle * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::CopyFrom(Caver::Proto::Rectangle const&) */

void __thiscall Caver::Proto::Rectangle::CopyFrom(Rectangle *this,Rectangle *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


