/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d6a4
 * Function: Caver::GUISlider::~GUISlider
 * Signature: undefined __thiscall ~GUISlider(GUISlider * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::~GUISlider() */

void __thiscall Caver::GUISlider::~GUISlider(GUISlider *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x158);
  *(undefined **)this = PTR_vtable_007e5588 + 0x10;
  if (plVar3 != (long *)0x0) {
    if ((void *)plVar3[7] != (void *)0x0) {
      operator_delete__((void *)plVar3[7]);
    }
    if ((void *)plVar3[4] != (void *)0x0) {
                    /* try { // try from 0059d6e0 to 0069d747 has its CatchHandler @ 0059d768 */
      operator_delete__((void *)plVar3[4]);
    }
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(plVar3);
  }
  plVar3 = *(long **)(this + 0x150);
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(this + 0x148);
                    /* try { // try from 0059d748 to 0069d76b has its CatchHandler @ 0059d474 */
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(this + 0x140);
                    /* catch() { ... } // from try @ 0059d6e0 with catch @ 0059d768 */
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  GUIControl::~GUIControl((GUIControl *)this);
  return;
}


