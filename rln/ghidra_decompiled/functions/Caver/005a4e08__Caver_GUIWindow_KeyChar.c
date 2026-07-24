/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4e08
 * Function: Caver::GUIWindow::KeyChar
 * Signature: undefined __thiscall KeyChar(GUIWindow * this, uint param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::KeyChar(unsigned int, double) */

void __thiscall Caver::GUIWindow::KeyChar(GUIWindow *this,uint param_1,double param_2)

{
  long lVar1;
  long *plVar2;
  double local_40;
  undefined8 uStack_38;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(GUIWindow **)(this + 0x1c0) == this + 0x1c0) {
    plVar2 = *(long **)(this + 0x110);
    if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0xe4) == '\0')) {
      uStack_38 = DAT_00697150;
      local_40 = param_2;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_40);
    }
  }
  else {
    (**(code **)(**(long **)(*(long *)(this + 0x1c8) + 0x10) + 0x160))();
  }
                    /* try { // try from 005a4e54 to 006a4e57 has its CatchHandler @ 005a4eb4 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 005a4e58 to 006a4ed3 has its CatchHandler @ 005a4de8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


