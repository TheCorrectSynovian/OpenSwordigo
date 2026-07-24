/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e267c
 * Function: Caver::OverlayMenuButton::~OverlayMenuButton
 * Signature: undefined __thiscall ~OverlayMenuButton(OverlayMenuButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayMenuButton::~OverlayMenuButton() */

void __thiscall Caver::OverlayMenuButton::~OverlayMenuButton(OverlayMenuButton *this)

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
  
                    /* catch() { ... } // from try @ 004e2674 with catch @ 004e2684 */
                    /* try { // try from 004e2688 to 005e268f has its CatchHandler @ 004e2698 */
                    /* try { // try from 004e2690 to 005e269b has its CatchHandler @ 004e2624 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 004e2688 with catch @ 004e2698 */
                    /* try { // try from 004e269c to 005e26e3 has its CatchHandler @ 004e269c
                       catch(type#1 @ 00000000) { ... } // from try @ 004e269c with catch @ 004e269c
                       catch(type#1 @ 00000000) { ... } // from try @ 004e2700 with catch @ 004e269c
                       catch(type#1 @ 00000000) { ... } // from try @ 004e28a4 with catch @ 004e269c
                        */
  plVar9 = *(long **)(this + 0x218);
  *(undefined **)this = PTR_vtable_007e6038 + 0x10;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
                    /* try { // try from 004e26e4 to 005e26ff has its CatchHandler @ 004e2898 */
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x208);
                    /* try { // try from 004e2700 to 005e289b has its CatchHandler @ 004e269c */
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)(this + 0x1f0) + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)(this + 0x1f0) + -8);
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
    if (iVar8 < 1) {
      operator_delete(puVar4);
    }
  }
  plVar9 = *(long **)(this + 0x1e8);
  *(undefined **)this = PTR_vtable_007e65b0 + 0x10;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  GUIButton::~GUIButton((GUIButton *)this);
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


