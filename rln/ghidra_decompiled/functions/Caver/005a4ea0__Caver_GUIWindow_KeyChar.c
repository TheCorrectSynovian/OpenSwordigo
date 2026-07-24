/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4ea0
 * Function: Caver::GUIWindow::KeyChar
 * Signature: undefined __thiscall KeyChar(GUIWindow * this, uint param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GUIWindow::KeyChar(unsigned int, double) */

void __thiscall Caver::GUIWindow::KeyChar(GUIWindow *this,uint param_1,double param_2)

{
  long lVar1;
  long *plVar2;
  double local_40;
  undefined8 uStack_38;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 005a4e54 with catch @ 005a4eb4 */
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(GUIWindow **)(this + 200) == this + 200) {
    plVar2 = *(long **)(this + 0x18);
                    /* catch() { ... } // from try @ 005a4ed4 with catch @ 005a4f04 */
                    /* try { // try from 005a4f08 to 006a4f47 has its CatchHandler @ 005a4f08
                       catch() { ... } // from try @ 005a4f08 with catch @ 005a4f08
                       catch() { ... } // from try @ 005a5498 with catch @ 005a4f08
                       catch() { ... } // from try @ 005a5a30 with catch @ 005a4f08 */
    if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0xe4) == '\0')) {
      uStack_38 = DAT_00697150;
      local_40 = param_2;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_40);
    }
  }
  else {
                    /* try { // try from 005a4ed4 to 006a4efb has its CatchHandler @ 005a4f04 */
    (**(code **)(**(long **)(*(long *)(this + 0xd0) + 0x10) + 0x160))();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 005a4efc to 006a4f07 has its CatchHandler @ 005a4de8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


