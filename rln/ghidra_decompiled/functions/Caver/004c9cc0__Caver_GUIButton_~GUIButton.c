/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c9cc0
 * Function: Caver::GUIButton::~GUIButton
 * Signature: undefined __thiscall ~GUIButton(GUIButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::~GUIButton() */

void __thiscall Caver::GUIButton::~GUIButton(GUIButton *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined *)(*(long *)(this + 0x1c0) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e75d0 + 0x10;
  if (bVar3) {
    piVar7 = (int *)(*(long *)(this + 0x1c0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
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
      operator_delete(puVar4);
      plVar9 = *(long **)(this + 0x150);
      goto joined_r0x004c9dfc;
    }
  }
  plVar9 = *(long **)(this + 0x150);
joined_r0x004c9dfc:
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)*plVar9;
    if ((plVar5 != (long *)0x0) &&
       (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    operator_delete(plVar9);
  }
  plVar9 = *(long **)(this + 0x148);
  if (plVar9 != (long *)0x0) {
    plVar5 = (long *)*plVar9;
    if ((plVar5 != (long *)0x0) &&
       (iVar8 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    operator_delete(plVar9);
  }
  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
            ((scoped_ptr<Caver::GUIRoundedRect> *)(this + 0x138));
  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
            ((scoped_ptr<Caver::GUIRoundedRect> *)(this + 0x130));
  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
            ((scoped_ptr<Caver::GUIRoundedRect> *)(this + 0x128));
  GUIControl::~GUIControl((GUIControl *)this);
  if (*(long *)(lVar2 + 0x28) == lVar6) {
                    /* catch() { ... } // from try @ 004c9b00 with catch @ 004c9dac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


