/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00541edc
 * Function: Caver::TabbedMenuView::TabViewSelectionDidChange
 * Signature: undefined __thiscall TabViewSelectionDidChange(TabbedMenuView * this, TabView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView*) */

void __thiscall
Caver::TabbedMenuView::TabViewSelectionDidChange(TabbedMenuView *this,TabView *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 0x128);
  if (lVar6 == 0) {
                    /* try { // try from 00541f34 to 00641f43 has its CatchHandler @ 00541f98 */
    FUN_00666bb8(&local_48,&DAT_0068fbeb,auStack_40);
  }
  else if (*(int *)(lVar6 + 0x208) < 0) {
                    /* try { // try from 00541f44 to 00641fab has its CatchHandler @ 00541e04 */
    FUN_00666bb8(&local_48,&DAT_0068fbeb,auStack_40);
  }
  else {
    FUN_0066a528(&local_48,*(long *)(lVar6 + 0x218) + (long)*(int *)(lVar6 + 0x208) * 8);
  }
  iVar4 = FUN_006689e0(&local_48,"close");
  if ((undefined *)(local_48 + -0x18) == PTR_DAT_007e5de8) {
LAB_00541f80:
    if (iVar4 == 0) goto LAB_00541fdc;
LAB_00541f84:
    plVar5 = *(long **)(this + 0xf8);
    if (plVar5 == (long *)0x0) goto LAB_00542000;
    pcVar7 = *(code **)*plVar5;
  }
  else {
                    /* catch() { ... } // from try @ 00541f34 with catch @ 00541f98 */
    piVar8 = (int *)(local_48 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* try { // try from 00541fac to 00641feb has its CatchHandler @ 00541fac
                       catch() { ... } // from try @ 00541fac with catch @ 00541fac
                       catch() { ... } // from try @ 00541ff0 with catch @ 00541fac
                       catch() { ... } // from try @ 0054214c with catch @ 00541fac
                       catch() { ... } // from try @ 00542270 with catch @ 00541fac
                       catch() { ... } // from try @ 00542368 with catch @ 00541fac */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar9) goto LAB_00541f80;
    operator_delete((undefined *)(local_48 + -0x18));
    if (iVar4 != 0) goto LAB_00541f84;
LAB_00541fdc:
    TabView::SetSelectedTabIndex(param_1,-1);
    plVar5 = *(long **)(this + 0xf8);
                    /* try { // try from 00541fec to 00641fef has its CatchHandler @ 00542288 */
    if (plVar5 == (long *)0x0) goto LAB_00542000;
                    /* try { // try from 00541ff0 to 00642003 has its CatchHandler @ 00541fac */
    pcVar7 = *(code **)(*plVar5 + 8);
  }
  (*pcVar7)(plVar5,this);
LAB_00542000:
                    /* try { // try from 00542004 to 0064200b has its CatchHandler @ 00542278 */
                    /* try { // try from 0054200c to 0064201f has its CatchHandler @ 00542274 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00542020 to 00642033 has its CatchHandler @ 005422d4 */
  return;
}


