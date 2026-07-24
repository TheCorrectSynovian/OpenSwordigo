/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1418
 * Function: Caver::GUIViewController::~GUIViewController
 * Signature: undefined __thiscall ~GUIViewController(GUIViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::~GUIViewController() */

void __thiscall Caver::GUIViewController::~GUIViewController(GUIViewController *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x38);
  *(undefined **)this = PTR_vtable_007e7040 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 005a1468 to 006a146b has its CatchHandler @ 005a14c8 */
                    /* try { // try from 005a146c to 006a14e7 has its CatchHandler @ 005a13fc */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 005a1468 with catch @ 005a14c8 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[2], plVar2[2] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x005a1508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
                    /* try { // try from 005a14e8 to 006a150f has its CatchHandler @ 005a1518 */
  return;
}


