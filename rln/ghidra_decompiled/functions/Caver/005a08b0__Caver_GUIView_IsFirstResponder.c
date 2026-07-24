/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a08b0
 * Function: Caver::GUIView::IsFirstResponder
 * Signature: undefined __thiscall IsFirstResponder(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::IsFirstResponder() */

undefined8 __thiscall Caver::GUIView::IsFirstResponder(GUIView *this)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 005a08bc to 006a08e3 has its CatchHandler @ 005a0cc8 */
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if ((lVar1 == 0) || (*(GUIView **)(lVar1 + 0x110) != this)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


