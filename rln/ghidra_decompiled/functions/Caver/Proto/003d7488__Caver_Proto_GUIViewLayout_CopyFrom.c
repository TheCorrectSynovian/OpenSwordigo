/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7488
 * Function: Caver::Proto::GUIViewLayout::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GUIViewLayout * this, GUIViewLayout * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::CopyFrom(Caver::Proto::GUIViewLayout const&) */

void __thiscall Caver::Proto::GUIViewLayout::CopyFrom(GUIViewLayout *this,GUIViewLayout *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


