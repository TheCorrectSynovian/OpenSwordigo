/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005420bc
 * Function: Caver::TabbedMenuView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(TabbedMenuView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::TabbedMenuView::HandleKeyboardEvent(TabbedMenuView *this,GUIKeyboardEvent *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  TabView *this_00;
  int *piVar10;
  int iVar11;
  int iVar12;
  long local_78 [2];
  long local_68;
  
                    /* try { // try from 005420c8 to 006420d7 has its CatchHandler @ 0054220c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005420f8 to 006420fb has its CatchHandler @ 0054229c */
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar8 = *(int *)(param_1 + 0x10);
    if ((((iVar8 == 0x1b) || (iVar8 == 0x5d)) || (iVar8 == 0x21)) &&
       (plVar9 = *(long **)(this + 0xf8), plVar9 != (long *)0x0)) {
                    /* try { // try from 00542120 to 0064212f has its CatchHandler @ 00542208 */
      (**(code **)(*plVar9 + 8))(plVar9,this);
      bVar5 = true;
      this_00 = *(TabView **)(this + 0x128);
      puVar6 = PTR_DAT_007e5de8;
      puVar7 = PTR_pthread_create_007e4e78;
    }
    else {
      bVar5 = false;
                    /* try { // try from 00542144 to 0064214b has its CatchHandler @ 00542204 */
      this_00 = *(TabView **)(this + 0x128);
      puVar6 = PTR_DAT_007e5de8;
      puVar7 = PTR_pthread_create_007e4e78;
    }
    PTR_pthread_create_007e4e78 = puVar7;
    PTR_DAT_007e5de8 = puVar6;
                    /* try { // try from 0054214c to 0064222f has its CatchHandler @ 00541fac */
    if ((this_00 != (TabView *)0x0) &&
       ((iVar8 = *(int *)(param_1 + 0x10), iVar8 == 0xbd || (iVar8 == 0xbb)))) {
      iVar11 = *(int *)(this_00 + 0x208);
      iVar12 = 0;
      if (iVar11 != -1) {
        iVar12 = iVar11;
      }
      iVar1 = -1;
      if (iVar8 == 0xbb) {
        iVar1 = 1;
      }
      if (-1 < iVar11) {
        do {
          while( true ) {
            iVar8 = iVar12 + iVar1;
            iVar11 = *(int *)(*(long *)(this + 0x128) + 0x210);
            iVar12 = iVar11 + -1;
            if (-1 < iVar8) {
              iVar12 = iVar8;
            }
            if (iVar11 <= iVar12) {
              iVar12 = 0;
            }
            FUN_0066a528(local_78,*(long *)(*(long *)(this + 0x128) + 0x218) + (long)iVar12 * 8);
            iVar8 = FUN_006689e0(local_78,"close");
            if ((undefined *)(local_78[0] + -0x18) != puVar6) break;
LAB_005421e4:
            if (iVar8 != 0) goto LAB_00542228;
          }
          piVar10 = (int *)(local_78[0] + -8);
          if (puVar7 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00542120 with catch @ 00542208 */
            iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 005420c8 with catch @ 0054220c */
            *piVar10 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (0 < iVar11) goto LAB_005421e4;
          operator_delete((undefined *)(local_78[0] + -0x18));
        } while (iVar8 == 0);
LAB_00542228:
        this_00 = *(TabView **)(this + 0x128);
      }
                    /* try { // try from 00542230 to 0064226f has its CatchHandler @ 00542388 */
      TabView::SetSelectedTabIndex(this_00,iVar12);
                    /* catch() { ... } // from try @ 00542098 with catch @ 0054223c */
                    /* catch() { ... } // from try @ 00542090 with catch @ 00542240 */
                    /* catch() { ... } // from try @ 0054203c with catch @ 00542244 */
      (**(code **)(*(long *)this + 0x130))(this,*(undefined8 *)(this + 0x128));
    }
    if (bVar5) goto LAB_00542258;
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
LAB_00542258:
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00542270 to 0064233f has its CatchHandler @ 00541fac */
                    /* catch() { ... } // from try @ 0054200c with catch @ 00542274 */
                    /* catch() { ... } // from try @ 00542004 with catch @ 00542278 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00541fec with catch @ 00542288 */
  __stack_chk_fail();
}


