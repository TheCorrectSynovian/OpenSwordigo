/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003db278
 * Function: Caver::Proto::EditorViewState::CopyFrom
 * Signature: undefined __thiscall CopyFrom(EditorViewState * this, EditorViewState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::CopyFrom(Caver::Proto::EditorViewState const&) */

void __thiscall
Caver::Proto::EditorViewState::CopyFrom(EditorViewState *this,EditorViewState *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


