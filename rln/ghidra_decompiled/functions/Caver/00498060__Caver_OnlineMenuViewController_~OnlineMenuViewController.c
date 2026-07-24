/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00498060
 * Function: Caver::OnlineMenuViewController::~OnlineMenuViewController
 * Signature: undefined __thiscall ~OnlineMenuViewController(OnlineMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuViewController::~OnlineMenuViewController() */

void __thiscall
Caver::OnlineMenuViewController::~OnlineMenuViewController(OnlineMenuViewController *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x50);
  *(undefined **)this = PTR_vtable_007e6740 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00497d08 with catch @ 0049809c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 004980bc to 005980ef has its CatchHandler @ 00498188 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 004977a8 with catch @ 004980c8 */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


