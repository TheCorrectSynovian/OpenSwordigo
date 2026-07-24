/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a15e0
 * Function: Caver::GUIViewController::DismissModalViewController
 * Signature: undefined __thiscall DismissModalViewController(GUIViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::DismissModalViewController() */

void __thiscall Caver::GUIViewController::DismissModalViewController(GUIViewController *this)

{
  GUIView *pGVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  GUIView *this_00;
  
                    /* try { // try from 005a15f4 to 006a1677 has its CatchHandler @ 005a1680 */
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x40))();
    this_00 = *(GUIView **)(this + 0x18);
    if (this_00 == (GUIView *)0x0) {
      (**(code **)(*(long *)this + 0x18))(this);
      this_00 = *(GUIView **)(this + 0x18);
    }
    plVar3 = *(long **)(this + 0x20);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
    plVar4 = *(long **)(this + 0x30);
    pGVar1 = (GUIView *)plVar4[3];
    if (pGVar1 == (GUIView *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      pGVar1 = (GUIView *)plVar4[3];
    }
    plVar4 = (long *)plVar4[4];
    if (plVar4 != (long *)0x0) {
      plVar4[1] = plVar4[1] + 1;
    }
    GUIView::DismissModalView(this_00,pGVar1);
                    /* try { // try from 005a1678 to 006a1683 has its CatchHandler @ 005a1538 */
                    /* catch() { ... } // from try @ 005a15f4 with catch @ 005a1680 */
                    /* try { // try from 005a1684 to 006a16d7 has its CatchHandler @ 005a1684
                       catch() { ... } // from try @ 005a1684 with catch @ 005a1684
                       catch() { ... } // from try @ 005a16dc with catch @ 005a1684
                       catch() { ... } // from try @ 005a1778 with catch @ 005a1684
                       catch() { ... } // from try @ 005a17d0 with catch @ 005a1684
                       catch() { ... } // from try @ 005a1978 with catch @ 005a1684
                       catch() { ... } // from try @ 005a1efc with catch @ 005a1684
                       catch() { ... } // from try @ 005a21a8 with catch @ 005a1684
                       catch() { ... } // from try @ 005a2284 with catch @ 005a1684 */
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 005a16d8 to 006a16db has its CatchHandler @ 005a21ac */
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 005a16dc to 006a176b has its CatchHandler @ 005a1684 */
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    *(undefined8 *)(*(long *)(this + 0x30) + 0x28) = 0;
    plVar3 = *(long **)(this + 0x38);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005a1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  return;
}


