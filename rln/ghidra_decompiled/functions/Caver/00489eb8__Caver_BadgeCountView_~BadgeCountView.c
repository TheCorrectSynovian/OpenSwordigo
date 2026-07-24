/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00489eb8
 * Function: Caver::BadgeCountView::~BadgeCountView
 * Signature: undefined __thiscall ~BadgeCountView(BadgeCountView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BadgeCountView::~BadgeCountView() */

void __thiscall Caver::BadgeCountView::~BadgeCountView(BadgeCountView *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x108);
                    /* try { // try from 00489ed8 to 00589edf has its CatchHandler @ 00489f4c */
  *(undefined **)this = PTR_vtable_007e4a00 + 0x10;
                    /* try { // try from 00489ee0 to 00589f87 has its CatchHandler @ 00489c5c */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0xf8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 00489ed8 with catch @ 00489f4c */
    lVar1 = plVar2[2];
                    /* catch() { ... } // from try @ 00489e74 with catch @ 00489f50 */
                    /* catch() { ... } // from try @ 00489d60 with catch @ 00489f54 */
    plVar2[2] = lVar1 + -1;
                    /* catch() { ... } // from try @ 00489da0 with catch @ 00489f58 */
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 00489d0c with catch @ 00489f5c */
                    /* catch() { ... } // from try @ 00489dbc with catch @ 00489f60 */
                    /* catch() { ... } // from try @ 00489d30 with catch @ 00489f64 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


