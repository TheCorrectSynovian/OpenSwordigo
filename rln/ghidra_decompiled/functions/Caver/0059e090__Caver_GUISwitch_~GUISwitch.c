/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e090
 * Function: Caver::GUISwitch::~GUISwitch
 * Signature: undefined __thiscall ~GUISwitch(GUISwitch * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::~GUISwitch() */

void __thiscall Caver::GUISwitch::~GUISwitch(GUISwitch *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined *)(*(long *)(this + 0x150) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e6b20 + 0x10;
  if (bVar3) {
    piVar7 = (int *)(*(long *)(this + 0x150) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0059e1f0 with catch @ 0059e1a8 */
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 0059e1d0 to 0069e1e3 has its CatchHandler @ 0059e2f4 */
      operator_delete(puVar4);
      plVar9 = *(long **)(this + 0x140);
      goto joined_r0x0059e1dc;
    }
  }
  plVar9 = *(long **)(this + 0x140);
joined_r0x0059e1dc:
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x130);
  if ((plVar9 != (long *)0x0) &&
     (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = *(long **)(this + 0x128);
  if ((plVar9 != (long *)0x0) &&
     (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar9 + 8))();
  }
  GUIControl::~GUIControl((GUIControl *)this);
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0059e1e4 to 0069e1ef has its CatchHandler @ 0059e284 */
  __stack_chk_fail();
}


