/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0aa8
 * Function: Caver::Proto::Polygon::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Polygon * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::CopyFrom(Caver::Proto::Polygon const&) */

void __thiscall Caver::Proto::Polygon::CopyFrom(Polygon *this,Polygon *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


