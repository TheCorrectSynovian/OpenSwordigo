/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005987e8
 * Function: Caver::GUILoadingView::GUILoadingView
 * Signature: undefined __thiscall GUILoadingView(GUILoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILoadingView::GUILoadingView() */

void __thiscall Caver::GUILoadingView::GUILoadingView(GUILoadingView *this)

{
  undefined *puVar1;
  long *plVar2;
  
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e4d68;
  *(undefined4 *)(this + 0xe9) = 0xff000000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0xf0) = 0x3ecccccd3ecccccd;
  if (*(int *)(this + 0x70) != 0x12) {
                    /* try { // try from 00598830 to 0069883b has its CatchHandler @ 0059a25c */
    plVar2 = *(long **)(this + 0x58);
    *(undefined4 *)(this + 0x70) = 0x12;
    if ((plVar2 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar2 + 0x8c))) {
                    /* try { // try from 0059885c to 00698883 has its CatchHandler @ 00599d38 */
      (**(code **)(*plVar2 + 0x58))();
    }
  }
  this[0xe5] = (GUILoadingView)0x0;
  return;
}


