/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543814
 * Function: Caver::TabView::~TabView
 * Signature: undefined __thiscall ~TabView(TabView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabView::~TabView() */

void __thiscall Caver::TabView::~TabView(TabView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  plVar11 = *(long **)(this + 0x218);
                    /* try { // try from 0054384c to 0064385f has its CatchHandler @ 00544988 */
  *(undefined **)this = PTR_vtable_007e70e8 + 0x10;
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[-1];
    if (lVar8 != 0) {
                    /* try { // try from 00543864 to 00643877 has its CatchHandler @ 00544840 */
      plVar12 = plVar11 + lVar8;
      do {
        while( true ) {
          plVar12 = plVar12 + -1;
          puVar6 = (undefined *)(*plVar12 + -0x18);
          if (puVar6 != puVar5) break;
LAB_00543888:
          if (plVar12 == plVar11) goto LAB_005438d4;
        }
                    /* try { // try from 00543894 to 0064389b has its CatchHandler @ 00544a08 */
        piVar9 = (int *)(*plVar12 + -8);
        if (puVar4 == (undefined *)0x0) {
          iVar10 = *piVar9;
                    /* try { // try from 005438b8 to 006438df has its CatchHandler @ 005448ac */
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar2) {
              *piVar9 = iVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (0 < iVar10) goto LAB_00543888;
        operator_delete(puVar6);
      } while (plVar12 != plVar11);
    }
LAB_005438d4:
    operator_delete__(plVar11 + -1);
  }
  if (*(void **)(this + 0x1e8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1e8));
  }
                    /* try { // try from 005438e8 to 00643947 has its CatchHandler @ 00544aa4 */
  if (*(void **)(this + 0x1d0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1d0));
  }
  plVar11 = *(long **)(this + 0x1b0);
  if ((plVar11 != (long *)0x0) &&
     (iVar10 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar11 + 8))();
  }
  if (*(void **)(this + 400) != (void *)0x0) {
    operator_delete__(*(void **)(this + 400));
  }
  if (*(void **)(this + 0x178) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x178));
  }
  plVar11 = *(long **)(this + 0x158);
  if ((plVar11 != (long *)0x0) &&
     (iVar10 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar10, iVar10 == 0)) {
                    /* try { // try from 0054394c to 00643957 has its CatchHandler @ 00544700 */
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = *(long **)(this + 0x108);
                    /* try { // try from 00543958 to 0064395f has its CatchHandler @ 005445dc */
                    /* try { // try from 00543960 to 0064396b has its CatchHandler @ 00544700 */
  if ((plVar11 != (long *)0x0) &&
     (iVar10 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = *(long **)(this + 0x100);
  if ((plVar11 != (long *)0x0) &&
     (iVar10 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar10, iVar10 == 0)) {
                    /* try { // try from 00543994 to 0064399b has its CatchHandler @ 0054458c */
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = *(long **)(this + 0xf8);
  if ((plVar11 != (long *)0x0) &&
     (iVar10 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar10, iVar10 == 0)) {
                    /* try { // try from 005439bc to 006439e3 has its CatchHandler @ 005444f8 */
    (**(code **)(*plVar11 + 8))();
  }
  GUIView::~GUIView((GUIView *)this);
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


