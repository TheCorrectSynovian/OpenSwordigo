/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471120
 * Function: Caver::PortalViewController::MapViewDidSelectionDidChange
 * Signature: undefined __thiscall MapViewDidSelectionDidChange(PortalViewController * this, MapView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::MapViewDidSelectionDidChange(Caver::MapView*) */

void __thiscall
Caver::PortalViewController::MapViewDidSelectionDidChange
          (PortalViewController *this,MapView *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  PortalView *pPVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  MapViewNode *pMVar12;
  long lVar13;
  long local_68 [2];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_1[0x3f8] == (MapView)0x0) {
    bVar7 = true;
    goto LAB_004712bc;
  }
  pMVar12 = *(MapViewNode **)
             (*(long *)(*(long *)(*(long *)(this + 0x80) + 0x110) + 0x118) +
             *(long *)(*(long *)(*(long *)(this + 0x80) + 0x110) + 0x400) * 0x10);
  lVar9 = *(long *)(*(long *)(this + 0x70) + 0x80);
  plVar2 = *(long **)(*(long *)(this + 0x70) + 0x88);
  lVar13 = *(long *)pMVar12;
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  lVar1 = *(long *)(lVar9 + 0x170);
  plVar3 = *(long **)(lVar9 + 0x178);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 1;
  }
  if (lVar13 == lVar1) {
    bVar7 = false;
  }
  else {
    bVar7 = pMVar12[0x29] != (MapViewNode)0x0;
  }
                    /* try { // try from 004711c8 to 005711cf has its CatchHandler @ 00471270 */
  if ((plVar3 != (long *)0x0) && (lVar9 = plVar3[1], plVar3[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar9 = plVar3[2];
                    /* try { // try from 004711f0 to 005711f3 has its CatchHandler @ 0047126c */
    plVar3[2] = lVar9 + -1;
                    /* try { // try from 004711f4 to 00571293 has its CatchHandler @ 00470f8c */
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if ((plVar2 == (long *)0x0) || (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 != 0)) {
LAB_0047123c:
    pPVar8 = *(PortalView **)(this + 0x80);
    if (bVar7) goto LAB_00471244;
LAB_0047126c:
                    /* catch() { ... } // from try @ 004711f0 with catch @ 0047126c */
                    /* catch() { ... } // from try @ 004711c8 with catch @ 00471270 */
    PortalView::SetGotoButtonVisible(pPVar8,false);
    bVar7 = true;
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar9 = plVar2[2];
    plVar2[2] = lVar9 + -1;
    if (lVar9 + -1 != 0) goto LAB_0047123c;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    pPVar8 = *(PortalView **)(this + 0x80);
    if (!bVar7) goto LAB_0047126c;
LAB_00471244:
    PortalView::SetGotoButtonVisible(pPVar8,true);
    bVar7 = false;
  }
  pPVar8 = *(PortalView **)(this + 0x80);
  MapNode::Title();
  PortalView::SetDescription(pPVar8,(string *)local_68);
                    /* try { // try from 00471294 to 0057129b has its CatchHandler @ 0047136c */
                    /* try { // try from 0047129c to 0057135f has its CatchHandler @ 00470f8c */
                    /* catch() { ... } // from try @ 00471068 with catch @ 004712a0 */
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00471090 with catch @ 004712b8 */
  PortalView::ScrollNodeToVisible(*(PortalView **)(this + 0x80),pMVar12,true);
LAB_004712bc:
  PortalView::SetHelpButtonVisible(*(PortalView **)(this + 0x80),bVar7);
                    /* catch() { ... } // from try @ 00471028 with catch @ 004712c8 */
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00471014 with catch @ 00471338 */
  __stack_chk_fail();
}


