/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba1f4
 * Function: Caver::GUITextFieldImpl::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUITextFieldImpl * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUITextFieldImpl::TouchEnded(GUITextFieldImpl *this,FWTouch *param_1)

{
  if (0 < *(int *)(param_1 + 0x20)) {
    *(undefined2 *)(this + 0x198) = 0x101;
    *(undefined4 *)(this + 0x19c) = 0;
    StartTextInputWithDelegate((ITextInputDelegate *)(this + 0x140),(string *)(this + 0x188));
    return;
  }
  return;
}


