/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a74f4
 * Function: Caver::GUIEffectView::GUIEffectView
 * Signature: undefined __thiscall GUIEffectView(GUIEffectView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffectView::GUIEffectView() */

void __thiscall Caver::GUIEffectView::GUIEffectView(GUIEffectView *this)

{
  long *plVar1;
  
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e4dd0 + 0x10;
  GUIEffect::GUIEffect((GUIEffect *)(this + 0xf0));
  this[0x160] = (GUIEffectView)0x0;
                    /* catch() { ... } // from try @ 005a73c4 with catch @ 005a7528 */
  if (*(int *)(this + 0x70) != 0x12) {
    plVar1 = *(long **)(this + 0x58);
    *(undefined4 *)(this + 0x70) = 0x12;
    if ((plVar1 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar1 + 0x8c))) {
      (**(code **)(*plVar1 + 0x58))();
    }
  }
  return;
}


