/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6614
 * Function: Caver::Proto::GUIMargins::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GUIMargins * this, GUIMargins * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::CopyFrom(Caver::Proto::GUIMargins const&) */

void __thiscall Caver::Proto::GUIMargins::CopyFrom(GUIMargins *this,GUIMargins *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


