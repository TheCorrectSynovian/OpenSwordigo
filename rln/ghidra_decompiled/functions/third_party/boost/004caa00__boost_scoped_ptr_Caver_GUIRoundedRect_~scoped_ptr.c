/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004caa00
 * Function: boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
 * Signature: undefined __thiscall ~scoped_ptr(scoped_ptr<Caver::GUIRoundedRect> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr() */

void __thiscall
boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr(scoped_ptr<Caver::GUIRoundedRect> *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 != (long *)0x0) {
    if ((void *)plVar3[0x11] != (void *)0x0) {
      operator_delete__((void *)plVar3[0x11]);
    }
    if ((void *)plVar3[0xe] != (void *)0x0) {
      operator_delete__((void *)plVar3[0xe]);
    }
    plVar2 = (long *)plVar3[10];
                    /* try { // try from 004caa38 to 005caa3b has its CatchHandler @ 004caafc */
                    /* try { // try from 004caa3c to 005caaab has its CatchHandler @ 004ca9b4 */
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(plVar3);
    return;
  }
  return;
}


