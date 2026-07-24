/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba15c
 * Function: Caver::GUITextFieldImpl::BecomeFirstResponder
 * Signature: undefined __thiscall BecomeFirstResponder(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::BecomeFirstResponder() */

undefined8 __thiscall Caver::GUITextFieldImpl::BecomeFirstResponder(GUITextFieldImpl *this)

{
  GUIView::BecomeFirstResponder((GUIView *)this);
  if (this[0x198] == (GUITextFieldImpl)0x0) {
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined2 *)(this + 0x198) = 0x101;
    StartTextInputWithDelegate((ITextInputDelegate *)(this + 0x140),(string *)(this + 0x188));
  }
  return 1;
}


