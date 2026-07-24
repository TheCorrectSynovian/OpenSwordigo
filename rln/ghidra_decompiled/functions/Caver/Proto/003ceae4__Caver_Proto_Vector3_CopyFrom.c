/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ceae4
 * Function: Caver::Proto::Vector3::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Vector3 * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::CopyFrom(Caver::Proto::Vector3 const&) */

void __thiscall Caver::Proto::Vector3::CopyFrom(Vector3 *this,Vector3 *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


