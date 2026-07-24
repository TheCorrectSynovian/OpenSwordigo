/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004980f0
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
  
                    /* try { // try from 004980f0 to 00598127 has its CatchHandler @ 004976d8 */
                    /* catch() { ... } // from try @ 004977f8 with catch @ 004980f4 */
                    /* catch() { ... } // from try @ 00497b7c with catch @ 00498100 */
  plVar2 = *(long **)(this + 0x50);
                    /* catch() { ... } // from try @ 00497b5c with catch @ 00498108 */
  *(undefined **)this = PTR_vtable_007e6740 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 00498128 to 0059817f has its CatchHandler @ 00498188 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 00497abc with catch @ 00498154 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  operator_delete(this);
  return;
}


