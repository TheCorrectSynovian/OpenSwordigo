/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005984f8
 * Function: Caver::GUILabel::~GUILabel
 * Signature: undefined __thiscall ~GUILabel(GUILabel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::~GUILabel() */

void __thiscall Caver::GUILabel::~GUILabel(GUILabel *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
                    /* try { // try from 005984fc to 0069850f has its CatchHandler @ 0059a4bc */
  lVar3 = tpidr_el0;
                    /* try { // try from 00598510 to 0069851f has its CatchHandler @ 0059a344 */
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x128);
  *(undefined **)this = PTR_vtable_007e4b08 + 0x10;
                    /* try { // try from 00598540 to 00698543 has its CatchHandler @ 0059a4bc */
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 00598564 to 0069856b has its CatchHandler @ 0059a340 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x118);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 005985bc to 006985cf has its CatchHandler @ 0059a300 */
  puVar4 = (undefined *)(*(long *)(this + 0x100) + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)(this + 0x100) + -8);
                    /* try { // try from 00598654 to 0069867b has its CatchHandler @ 00599d8c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 0059867c to 0069868f has its CatchHandler @ 0059a2ac */
    if (iVar8 < 1) {
      operator_delete(puVar4);
      plVar9 = *(long **)(this + 0xf8);
      goto joined_r0x0059868c;
    }
  }
  plVar9 = *(long **)(this + 0xf8);
joined_r0x0059868c:
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 005985f0 to 006985fb has its CatchHandler @ 00599b28 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  GUIView::~GUIView((GUIView *)this);
                    /* try { // try from 00598628 to 00698633 has its CatchHandler @ 0059a2b0 */
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


