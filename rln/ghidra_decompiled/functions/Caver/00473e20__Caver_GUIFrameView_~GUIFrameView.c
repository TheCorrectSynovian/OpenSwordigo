/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00473e20
 * Function: Caver::GUIFrameView::~GUIFrameView
 * Signature: undefined __thiscall ~GUIFrameView(GUIFrameView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIFrameView::~GUIFrameView() */

void __thiscall Caver::GUIFrameView::~GUIFrameView(GUIFrameView *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x100);
  *(undefined **)this = PTR_vtable_007e73b0 + 0x10;
                    /* catch() { ... } // from try @ 00473d2c with catch @ 00473e4c */
                    /* catch() { ... } // from try @ 00474018 with catch @ 00473e50
                       catch() { ... } // from try @ 004740f4 with catch @ 00473e50 */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0xf8);
  if (plVar2 != (long *)0x0) {
    if ((void *)plVar2[0x11] != (void *)0x0) {
      operator_delete__((void *)plVar2[0x11]);
    }
    if ((void *)plVar2[0xe] != (void *)0x0) {
      operator_delete__((void *)plVar2[0xe]);
    }
    plVar3 = (long *)plVar2[10];
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = (long *)*plVar2;
                    /* try { // try from 00473eb8 to 00574017 has its CatchHandler @ 004740c8 */
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(plVar2);
  }
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(plVar2);
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


