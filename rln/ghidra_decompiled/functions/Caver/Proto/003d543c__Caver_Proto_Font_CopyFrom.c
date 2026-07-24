/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d543c
 * Function: Caver::Proto::Font::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Font * this, Font * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::CopyFrom(Caver::Proto::Font const&) */

void __thiscall Caver::Proto::Font::CopyFrom(Font *this,Font *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


