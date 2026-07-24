/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7824
 * Function: Caver::GUIEffectView::~GUIEffectView
 * Signature: undefined __thiscall ~GUIEffectView(GUIEffectView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffectView::~GUIEffectView() */

void __thiscall Caver::GUIEffectView::~GUIEffectView(GUIEffectView *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 005a7840 to 006a7933 has its CatchHandler @ 005a77d4 */
  *(undefined **)this = PTR_vtable_007e4dd0 + 0x10;
  if (*(void **)(this + 0x158) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x158));
  }
  uVar2 = *(ulong *)(this + 0x108);
  if (uVar2 != 0) {
    if (((uVar2 & 1) == 0) && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(this + 0x110,this + 0x110,2);
    }
    *(undefined8 *)(this + 0x108) = 0;
  }
  plVar1 = *(long **)(this + 0x100);
  if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[2], plVar1[2] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  GUIView::~GUIView((GUIView *)this);
  operator_delete(this);
  return;
}


