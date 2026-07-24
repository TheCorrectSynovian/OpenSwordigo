/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045716c
 * Function: Caver::GameViewController::GotoCredits
 * Signature: undefined __thiscall GotoCredits(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GotoCredits() */

void __thiscall Caver::GameViewController::GotoCredits(GameViewController *this)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  GUIViewController *this_00;
  long lVar4;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x58);
  memset(this_00,0,0x58);
  GUIViewController::GUIViewController(this_00);
  puVar2 = PTR_vtable_007e6ae8;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>
            ((shared_ptr<Caver::CreditsViewController> *)&local_48,(CreditsViewController *)this_00)
  ;
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  GameEvent::SetEventsEnabled(false);
  (**(code **)(**(long **)(this + 0x40) + 8))
            (DAT_00683484,DAT_00683484,*(long **)(this + 0x40),&local_58,0);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
                    /* try { // try from 00457248 to 0055725b has its CatchHandler @ 004573dc */
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0045725c to 0055737b has its CatchHandler @ 00457128 */
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


