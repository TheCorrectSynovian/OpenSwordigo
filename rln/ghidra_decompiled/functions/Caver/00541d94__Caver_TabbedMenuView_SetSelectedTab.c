/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00541d94
 * Function: Caver::TabbedMenuView::SetSelectedTab
 * Signature: undefined __thiscall SetSelectedTab(TabbedMenuView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::SetSelectedTab(std::string const&) */

void __thiscall Caver::TabbedMenuView::SetSelectedTab(TabbedMenuView *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  size_t *psVar12;
  void *local_78 [2];
  long local_68;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
                    /* try { // try from 00541da4 to 00641dcb has its CatchHandler @ 00541dd4 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(this + 0x128);
                    /* try { // try from 00541dcc to 00641de7 has its CatchHandler @ 00541d1c */
                    /* catch() { ... } // from try @ 00541da4 with catch @ 00541dd4 */
  if (0 < *(int *)(lVar9 + 0x210)) {
                    /* catch() { ... } // from try @ 00541d34 with catch @ 00541dd8 */
                    /* try { // try from 00541de8 to 00641df3 has its CatchHandler @ 00541df4 */
    lVar11 = 0;
    do {
                    /* catch() { ... } // from try @ 00541de8 with catch @ 00541df4 */
                    /* try { // try from 00541df8 to 00641dfb has its CatchHandler @ 00541e00 */
      FUN_0066a528(local_78,*(long *)(lVar9 + 0x218) + lVar11 * 8);
      pvVar6 = local_78[0];
                    /* catch() { ... } // from try @ 00541df8 with catch @ 00541e00 */
                    /* try { // try from 00541e04 to 00641f33 has its CatchHandler @ 00541e04
                       catch() { ... } // from try @ 00541e04 with catch @ 00541e04
                       catch() { ... } // from try @ 00541f44 with catch @ 00541e04 */
      psVar12 = (size_t *)((long)local_78[0] + -0x18);
      if (*psVar12 == *(size_t *)((long)*(void **)param_1 + -0x18)) {
        iVar8 = memcmp(local_78[0],*(void **)param_1,*psVar12);
        bVar7 = iVar8 == 0;
        if (psVar12 != (size_t *)puVar5) goto LAB_00541e5c;
LAB_00541e40:
        if (bVar7) {
LAB_00541e9c:
          TabView::SetSelectedTabIndex(*(TabView **)(this + 0x128),(int)lVar11);
          break;
        }
      }
      else {
        bVar7 = false;
        if (psVar12 == (size_t *)puVar5) goto LAB_00541e40;
LAB_00541e5c:
        piVar10 = (int *)((long)pvVar6 + -8);
        if (puVar4 == (undefined *)0x0) {
          iVar8 = *piVar10;
          *piVar10 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (0 < iVar8) goto LAB_00541e40;
        operator_delete(psVar12);
        if (bVar7) goto LAB_00541e9c;
      }
      lVar9 = *(long *)(this + 0x128);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x210));
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


