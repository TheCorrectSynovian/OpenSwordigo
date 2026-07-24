/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00467c84
 * Function: Caver::GuidePurchaseViewController::HandlePurchaseSuccess
 * Signature: undefined __thiscall HandlePurchaseSuccess(GuidePurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::HandlePurchaseSuccess() */

void __thiscall
Caver::GuidePurchaseViewController::HandlePurchaseSuccess(GuidePurchaseViewController *this)

{
  long lVar1;
  GameOptions *this_00;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  GameOptions *local_58;
  long *local_50;
  long local_48;
  long *plStack_40;
  
                    /* catch() { ... } // from try @ 00467c58 with catch @ 00467c88 */
                    /* try { // try from 00467c8c to 00567c93 has its CatchHandler @ 00467c9c */
                    /* try { // try from 00467c94 to 00567c9f has its CatchHandler @ 00467bec */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00467c8c with catch @ 00467c9c */
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = (GameOptions *)GameOptions::sharedOptions((GameOptions *)this);
  *(undefined1 *)(local_48 + 0x50) = 1;
  if ((plStack_40 != (long *)0x0) &&
     (lVar4 = plStack_40[1], plStack_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    this_00 = (GameOptions *)(**(code **)(*plStack_40 + 0x10))(plStack_40);
    lVar4 = plStack_40[2];
    plStack_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      this_00 = (GameOptions *)(**(code **)(*plStack_40 + 0x18))(plStack_40);
    }
  }
  GameOptions::sharedOptions(this_00);
  GameOptions::SaveToFile(local_58);
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = local_50[2];
    local_50[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  GuidePurchaseView::AnimateOut();
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + 0x28));
  puVar2 = *(undefined8 **)(this + 0x58);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,this);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00467da4 to 00567dcf has its CatchHandler @ 00467da4
                       catch() { ... } // from try @ 00467da4 with catch @ 00467da4
                       catch() { ... } // from try @ 00467f20 with catch @ 00467da4 */
  __stack_chk_fail();
}


