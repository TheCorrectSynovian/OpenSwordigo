/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046f67c
 * Function: Caver::MainMenuViewController::MainMenuViewDidGoToCredits
 * Signature: undefined __cdecl MainMenuViewDidGoToCredits(MainMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView*) */

void Caver::MainMenuViewController::MainMenuViewDidGoToCredits(MainMenuView *param_1)

{
  long lVar1;
  undefined *puVar2;
  GUIViewController *this;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0046f69c to 0056f6a3 has its CatchHandler @ 0046f6c4 */
                    /* try { // try from 0046f6a4 to 0056f6c7 has its CatchHandler @ 0046f530 */
  this = operator_new(0x58);
  memset(this,0,0x58);
  GUIViewController::GUIViewController(this);
  puVar2 = PTR_vtable_007e6ae8;
                    /* catch() { ... } // from try @ 0046f69c with catch @ 0046f6c4 */
                    /* catch() { ... } // from try @ 0046f6dc with catch @ 0046f6c8 */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
                    /* try { // try from 0046f6d8 to 0056f6db has its CatchHandler @ 0046f6ec */
  *(undefined **)this = puVar2 + 0x10;
                    /* try { // try from 0046f6dc to 0056f6ff has its CatchHandler @ 0046f6c8 */
  boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>
            ((shared_ptr<Caver::CreditsViewController> *)&local_48,(CreditsViewController *)this);
  plVar3 = *(long **)(param_1 + 0x40);
                    /* catch() { ... } // from try @ 0046f6d8 with catch @ 0046f6ec */
  pcVar4 = *(code **)(*plVar3 + 8);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar4)(DAT_00683484,DAT_00683484,plVar3,&local_58,1);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = local_40[2];
    local_40[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


