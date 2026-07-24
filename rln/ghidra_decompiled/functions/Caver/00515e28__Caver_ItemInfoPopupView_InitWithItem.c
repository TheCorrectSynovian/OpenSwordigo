/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00515e28
 * Function: Caver::ItemInfoPopupView::InitWithItem
 * Signature: undefined __thiscall InitWithItem(ItemInfoPopupView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoPopupView::InitWithItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::ItemInfoPopupView::InitWithItem(ItemInfoPopupView *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  long local_58;
  long local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_0066a528(&local_58,*(long *)param_1 + 8);
  FUN_0035a030(&local_50,"item_",&local_58);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if ((undefined *)(local_58 + -0x18) != puVar4) {
    piVar6 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  FUN_0066a528(&local_50,*(long *)param_1 + 0x10);
  FUN_0066a528(&local_58,*(long *)param_1 + 0x20);
  Init(this,(intrusive_ptr *)local_48,(string *)&local_50,(string *)&local_58);
  if ((undefined *)(local_58 + -0x18) != puVar4) {
    piVar6 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if ((undefined *)(local_50 + -0x18) != puVar4) {
    piVar6 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 00515e20 with catch @ 0051605c */
      operator_delete((undefined *)(local_50 + -0x18));
                    /* catch() { ... } // from try @ 00515f14 with catch @ 00516060 */
    }
  }
                    /* try { // try from 00515f14 to 00615f17 has its CatchHandler @ 00516060 */
                    /* try { // try from 00515f18 to 00616073 has its CatchHandler @ 00515cd0 */
  if ((local_48[0] != (long *)0x0) &&
     (iVar7 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_48[0] + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


