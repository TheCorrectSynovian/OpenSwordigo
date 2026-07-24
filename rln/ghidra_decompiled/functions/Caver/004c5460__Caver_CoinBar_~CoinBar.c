/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c5460
 * Function: Caver::CoinBar::~CoinBar
 * Signature: undefined __thiscall ~CoinBar(CoinBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CoinBar::~CoinBar() */

void __thiscall Caver::CoinBar::~CoinBar(CoinBar *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x170);
  *(undefined **)this = PTR_vtable_007e5b10 + 0x10;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x158);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(void **)(this + 0x130) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x130));
  }
                    /* catch() { ... } // from try @ 004c542c with catch @ 004c5520 */
  if (*(void **)(this + 0x118) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x118));
  }
  plVar3 = *(long **)(this + 0xf8);
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 004c5544 to 005c554b has its CatchHandler @ 004c5550 */
                    /* try { // try from 004c554c to 005c55c3 has its CatchHandler @ 004c528c */
    (**(code **)(*plVar3 + 8))();
  }
                    /* catch() { ... } // from try @ 004c5544 with catch @ 004c5550 */
                    /* catch() { ... } // from try @ 004c53a8 with catch @ 004c5554 */
                    /* catch() { ... } // from try @ 004c53bc with catch @ 004c5558 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


