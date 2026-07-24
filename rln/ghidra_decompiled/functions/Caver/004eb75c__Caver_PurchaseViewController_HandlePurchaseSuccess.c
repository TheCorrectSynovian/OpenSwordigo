/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004eb75c
 * Function: Caver::PurchaseViewController::HandlePurchaseSuccess
 * Signature: undefined __thiscall HandlePurchaseSuccess(PurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::HandlePurchaseSuccess() */

void __thiscall Caver::PurchaseViewController::HandlePurchaseSuccess(PurchaseViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  StoreController *this_00;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004eb780 to 005eb7c7 has its CatchHandler @ 004eb780
                       catch(type#1 @ 00000000) { ... } // from try @ 004eb780 with catch @ 004eb780
                       catch(type#1 @ 00000000) { ... } // from try @ 004eb7e4 with catch @ 004eb780
                       catch(type#1 @ 00000000) { ... } // from try @ 004ebd68 with catch @ 004eb780
                        */
  this_00 = (StoreController *)StoreController::SharedController();
  FUN_0066a528(local_48,*(undefined8 *)(this + 0x68));
  StoreController::UnlockProduct(this_00,(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
      puVar4 = *(undefined8 **)(this + 0x48);
      goto joined_r0x004eb848;
    }
  }
  puVar4 = *(undefined8 **)(this + 0x48);
joined_r0x004eb848:
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 004eb7c8 to 005eb7e3 has its CatchHandler @ 004ebd5c */
    (**(code **)*puVar4)(puVar4,this);
  }
  PurchaseView::AnimateOut();
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + 0x28));
                    /* try { // try from 004eb7e4 to 005ebd5f has its CatchHandler @ 004eb780 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


