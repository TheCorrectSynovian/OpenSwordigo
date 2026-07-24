/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fc00
 * Function: Caver::GUIView::FindAndSetSuperviewFirstResponder
 * Signature: undefined __thiscall FindAndSetSuperviewFirstResponder(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::FindAndSetSuperviewFirstResponder() */

undefined8 __thiscall Caver::GUIView::FindAndSetSuperviewFirstResponder(GUIView *this)

{
  ulong uVar1;
  
  do {
    uVar1 = (**(code **)(*(long *)this + 0xc0))(this);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*(long *)this + 200))(this);
      return 1;
    }
    this = *(GUIView **)(this + 0x58);
  } while (this != (GUIView *)0x0);
  return 0;
}


