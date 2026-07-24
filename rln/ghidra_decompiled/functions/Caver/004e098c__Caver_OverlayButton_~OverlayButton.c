/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e098c
 * Function: Caver::OverlayButton::~OverlayButton
 * Signature: undefined __thiscall ~OverlayButton(OverlayButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayButton::~OverlayButton() */

void __thiscall Caver::OverlayButton::~OverlayButton(OverlayButton *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x1e8);
                    /* catch() { ... } // from try @ 004e09dc with catch @ 004e09ac */
  *(undefined **)this = PTR_vtable_007e65b0 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 004e09c8 to 005e09db has its CatchHandler @ 004e0a00 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 004e09dc to 005e0a03 has its CatchHandler @ 004e09ac */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIButton::~GUIButton((GUIButton *)this);
                    /* catch() { ... } // from try @ 004e09c8 with catch @ 004e0a00 */
  operator_delete(this);
  return;
}


