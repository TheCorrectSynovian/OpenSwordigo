/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e71c
 * Function: Caver::MainMenuViewController::ChooseAgeViewAgeChanged
 * Signature: undefined __thiscall ChooseAgeViewAgeChanged(MainMenuViewController * this, ChooseAgeView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::MainMenuViewController::ChooseAgeViewAgeChanged(Caver::ChooseAgeView*) */

void __thiscall
Caver::MainMenuViewController::ChooseAgeViewAgeChanged
          (MainMenuViewController *this,ChooseAgeView *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  
                    /* try { // try from 0046e720 to 0056e723 has its CatchHandler @ 0046e92c */
  if (*(long *)(this + 0x80) != 0) {
    iVar2 = *(int *)(param_1 + 0xec);
    *(int *)(this + 0xb4) = iVar2;
    plVar4 = (long *)**(long **)(*(long *)(this + 0x80) + 0x158);
    uVar3 = *(uint *)(plVar4 + 0x24);
    uVar1 = uVar3 | 2;
    if (iVar2 != 0) {
      uVar1 = uVar3 & 0xfffffffd;
    }
    *(uint *)(plVar4 + 0x24) = uVar1;
    if (uVar1 != uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0046e760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x130))();
      return;
    }
  }
  return;
}


