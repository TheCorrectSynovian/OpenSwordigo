/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba1a0
 * Function: Caver::GUITextFieldImpl::ResignFirstResponder
 * Signature: undefined __thiscall ResignFirstResponder(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::ResignFirstResponder() */

undefined8 __thiscall Caver::GUITextFieldImpl::ResignFirstResponder(GUITextFieldImpl *this)

{
  undefined8 *puVar1;
  
  if (this[0x198] != (GUITextFieldImpl)0x0) {
    StopTextInputWithDelegate((ITextInputDelegate *)(this + 0x140));
    puVar1 = *(undefined8 **)(this + 0x138);
    *(undefined2 *)(this + 0x198) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,this);
    }
  }
  GUIView::ResignFirstResponder((GUIView *)this);
  return 1;
}


