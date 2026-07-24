/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3438
 * Function: Caver::GUIWindow::CancelAllTouches
 * Signature: undefined __thiscall CancelAllTouches(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::CancelAllTouches() */

void __thiscall Caver::GUIWindow::CancelAllTouches(GUIWindow *this)

{
  long lVar1;
  FWTouch *pFVar2;
  FWTouch *pFVar3;
  FWTouch *pFVar4;
  GUIWindow *pGVar5;
  FWTouch *local_50;
  FWTouch *local_48;
  FWTouch *pFStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (FWTouch *)0x0;
  pFStack_40 = (FWTouch *)0x0;
  local_50 = (FWTouch *)0x0;
  pGVar5 = *(GUIWindow **)(this + 0x168);
                    /* try { // try from 005a3470 to 006a3497 has its CatchHandler @ 005a3584 */
  if (this + 0x158 != pGVar5) {
    do {
      if (local_48 == pFStack_40) {
        std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux
                  ((vector<Caver::FWTouch,std::allocator<Caver::FWTouch>> *)&local_50,pFStack_40,
                   (FWTouch *)(pGVar5 + 0x28));
      }
      else {
        FWTouch::FWTouch(local_48,(FWTouch *)(pGVar5 + 0x28));
        local_48 = local_48 + 0x28;
      }
                    /* try { // try from 005a34b4 to 006a34c7 has its CatchHandler @ 005a3590 */
      pGVar5 = (GUIWindow *)FUN_0064c640(pGVar5);
      pFVar4 = local_48;
      pFVar2 = local_50;
      pFVar3 = local_48;
    } while (this + 0x158 != pGVar5);
    for (; pFVar2 != pFVar4; pFVar2 = pFVar2 + 0x28) {
      CancelTouch(this,pFVar2);
      pFVar3 = local_50;
                    /* try { // try from 005a34e8 to 006a350f has its CatchHandler @ 005a3584 */
    }
    if (pFVar3 != (FWTouch *)0x0) {
      operator_delete(pFVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005a3510 to 006a35b3 has its CatchHandler @ 005a33f0 */
  return;
}


