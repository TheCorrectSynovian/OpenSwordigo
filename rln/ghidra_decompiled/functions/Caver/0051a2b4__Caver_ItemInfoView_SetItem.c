/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051a2b4
 * Function: Caver::ItemInfoView::SetItem
 * Signature: undefined __thiscall SetItem(ItemInfoView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::SetItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::ItemInfoView::SetItem(ItemInfoView *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  GUILabel *pGVar7;
  void *pvVar8;
  size_t *psVar9;
  long local_60;
  void *local_58 [2];
  long local_48;
  
                    /* catch() { ... } // from try @ 0051a27c with catch @ 0051a2b4 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  MenuItemSlot::SetItem(*(MenuItemSlot **)(this + 0x100),param_1);
                    /* catch() { ... } // from try @ 0051a330 with catch @ 0051a2e8 */
  pGVar7 = *(GUILabel **)(this + 0x130);
  if (this[0x170] == (ItemInfoView)0x0) {
                    /* try { // try from 0051a3ac to 0061a3db has its CatchHandler @ 0051a33c */
    FUN_0066a528(local_58,*(long *)param_1 + 0x10);
    pvVar8 = local_58[0];
    psVar9 = (size_t *)((long)local_58[0] + -0x18);
    if ((*psVar9 != *(size_t *)((long)*(void **)(pGVar7 + 0x100) + -0x18)) ||
       (iVar5 = memcmp(local_58[0],*(void **)(pGVar7 + 0x100),*psVar9), iVar5 != 0)) {
                    /* try { // try from 0051a3dc to 0061a3df has its CatchHandler @ 0051a430 */
                    /* try { // try from 0051a3e0 to 0061a447 has its CatchHandler @ 0051a33c */
      FUN_0066a6a8(pGVar7 + 0x100,local_58);
      GUILabel::UpdateText(pGVar7);
      psVar9 = (size_t *)((long)local_58[0] + -0x18);
      pvVar8 = local_58[0];
    }
    if (psVar9 == (size_t *)PTR_DAT_007e5de8) goto LAB_0051a404;
    piVar6 = (int *)((long)pvVar8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0051a564 to 0061a57f has its CatchHandler @ 0051a4f8 */
      iVar5 = *piVar6;
                    /* catch() { ... } // from try @ 0051a55c with catch @ 0051a568 */
                    /* catch() { ... } // from try @ 0051a540 with catch @ 0051a56c */
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    FUN_0066a528(&local_60,*(long *)param_1 + 0x10);
                    /* try { // try from 0051a314 to 0061a317 has its CatchHandler @ 0051a324 */
    FUN_0035a030(local_58,"Got Item: ",&local_60);
    pvVar8 = local_58[0];
    psVar9 = (size_t *)((long)local_58[0] + -0x18);
                    /* catch() { ... } // from try @ 0051a314 with catch @ 0051a324 */
                    /* try { // try from 0051a328 to 0061a32f has its CatchHandler @ 0051a338 */
                    /* try { // try from 0051a330 to 0061a33b has its CatchHandler @ 0051a2e8 */
                    /* catch() { ... } // from try @ 0051a328 with catch @ 0051a338 */
                    /* try { // try from 0051a33c to 0061a38f has its CatchHandler @ 0051a33c
                       catch() { ... } // from try @ 0051a33c with catch @ 0051a33c
                       catch() { ... } // from try @ 0051a3ac with catch @ 0051a33c
                       catch() { ... } // from try @ 0051a3e0 with catch @ 0051a33c
                       catch() { ... } // from try @ 0051a450 with catch @ 0051a33c */
    if ((*psVar9 != *(size_t *)((long)*(void **)(pGVar7 + 0x100) + -0x18)) ||
       (iVar5 = memcmp(local_58[0],*(void **)(pGVar7 + 0x100),*psVar9), iVar5 != 0)) {
      FUN_0066a6a8(pGVar7 + 0x100,local_58);
      GUILabel::UpdateText(pGVar7);
      psVar9 = (size_t *)((long)local_58[0] + -0x18);
      pvVar8 = local_58[0];
    }
    puVar4 = PTR_DAT_007e5de8;
    if (psVar9 != (size_t *)PTR_DAT_007e5de8) {
                    /* try { // try from 0051a4b8 to 0061a4bf has its CatchHandler @ 0051a4c8 */
                    /* try { // try from 0051a4c0 to 0061a4cb has its CatchHandler @ 0051a45c */
      piVar6 = (int *)((long)pvVar8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0051a540 to 0061a547 has its CatchHandler @ 0051a56c */
        iVar5 = *piVar6;
        *piVar6 = iVar5 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 0051a4b8 with catch @ 0051a4c8 */
          iVar5 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
                    /* catch() { ... } // from try @ 0051a53c with catch @ 0051a558 */
                    /* try { // try from 0051a55c to 0061a563 has its CatchHandler @ 0051a568 */
        operator_delete(psVar9);
      }
    }
    psVar9 = (size_t *)(local_60 + -0x18);
    if (psVar9 == (size_t *)puVar4) goto LAB_0051a404;
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
                    /* try { // try from 0051a390 to 0061a3ab has its CatchHandler @ 0051a444 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (iVar5 < 1) {
    operator_delete(psVar9);
  }
LAB_0051a404:
  pGVar7 = *(GUILabel **)(this + 0x140);
  FUN_0066a528(local_58,*(long *)param_1 + 0x20);
  pvVar8 = local_58[0];
  psVar9 = (size_t *)((long)local_58[0] + -0x18);
                    /* catch() { ... } // from try @ 0051a3dc with catch @ 0051a430 */
  if ((*psVar9 != *(size_t *)((long)*(void **)(pGVar7 + 0x100) + -0x18)) ||
     (iVar5 = memcmp(local_58[0],*(void **)(pGVar7 + 0x100),*psVar9), iVar5 != 0)) {
                    /* catch() { ... } // from try @ 0051a390 with catch @ 0051a444 */
                    /* try { // try from 0051a448 to 0061a44f has its CatchHandler @ 0051a458 */
    FUN_0066a6a8(pGVar7 + 0x100,local_58);
                    /* try { // try from 0051a450 to 0061a45b has its CatchHandler @ 0051a33c */
    GUILabel::UpdateText(pGVar7);
                    /* catch() { ... } // from try @ 0051a448 with catch @ 0051a458 */
    psVar9 = (size_t *)((long)local_58[0] + -0x18);
    pvVar8 = local_58[0];
  }
                    /* catch() { ... } // from try @ 0051a4a4 with catch @ 0051a45c
                       catch() { ... } // from try @ 0051a4c0 with catch @ 0051a45c */
  if (psVar9 != (size_t *)PTR_DAT_007e5de8) {
    piVar6 = (int *)((long)pvVar8 + -8);
                    /* try { // try from 0051a4a0 to 0061a4a3 has its CatchHandler @ 0051a4b4 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
                    /* try { // try from 0051a4a4 to 0061a4b7 has its CatchHandler @ 0051a45c */
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
                    /* catch() { ... } // from try @ 0051a564 with catch @ 0051a4f8 */
      operator_delete(psVar9);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


