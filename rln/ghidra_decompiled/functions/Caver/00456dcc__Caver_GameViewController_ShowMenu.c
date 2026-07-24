/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00456dcc
 * Function: Caver::GameViewController::ShowMenu
 * Signature: undefined __thiscall ShowMenu(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::ShowMenu() */

void __thiscall Caver::GameViewController::ShowMenu(GameViewController *this)

{
  undefined8 uVar1;
  long lVar2;
  GameMenuViewController *this_00;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00456de8 to 00556e3b has its CatchHandler @ 00457000 */
  this_00 = operator_new(0xd0);
  GameMenuViewController::GameMenuViewController(this_00);
  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>
            ((shared_ptr<Caver::GameMenuViewController> *)&local_48,this_00);
  *(GameViewController **)(local_48 + 0x80) = this + 0x58;
  uVar1 = *(undefined8 *)(this + 0x88);
  lVar3 = *(long *)(this + 0x90);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(local_48 + 0x90);
  *(undefined8 *)(local_48 + 0x88) = uVar1;
  *(long *)(local_48 + 0x90) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
                    /* try { // try from 00456e5c to 00556e63 has its CatchHandler @ 00457070 */
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  pcVar4 = *(code **)(*(long *)this + 0x50);
                    /* try { // try from 00456e84 to 00556e87 has its CatchHandler @ 00456fa4 */
  local_58 = local_48;
  local_50 = local_40;
                    /* try { // try from 00456e88 to 00556ec7 has its CatchHandler @ 00456bcc */
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar4)(this,&local_58);
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) && (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* try { // try from 00456ec8 to 00556f17 has its CatchHandler @ 00456fac */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
                    /* try { // try from 00456f38 to 00556f3b has its CatchHandler @ 00456f90 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


