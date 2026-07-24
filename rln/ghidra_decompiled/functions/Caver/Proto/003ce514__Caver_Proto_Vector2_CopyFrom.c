/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce514
 * Function: Caver::Proto::Vector2::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Vector2 * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::CopyFrom(Caver::Proto::Vector2 const&) */

void __thiscall Caver::Proto::Vector2::CopyFrom(Vector2 *this,Vector2 *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


