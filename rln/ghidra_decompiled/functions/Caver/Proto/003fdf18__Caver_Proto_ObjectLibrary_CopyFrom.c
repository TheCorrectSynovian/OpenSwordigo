/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fdf18
 * Function: Caver::Proto::ObjectLibrary::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::CopyFrom(Caver::Proto::ObjectLibrary const&) */

void __thiscall Caver::Proto::ObjectLibrary::CopyFrom(ObjectLibrary *this,ObjectLibrary *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


