/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9748
 * Function: Caver::GUITextFieldImpl::~GUITextFieldImpl
 * Signature: undefined __thiscall ~GUITextFieldImpl(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::~GUITextFieldImpl() */

void __thiscall Caver::GUITextFieldImpl::~GUITextFieldImpl(GUITextFieldImpl *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_vtable_007e7880 + 0x208;
  *(undefined **)this = PTR_vtable_007e7880 + 0x10;
  *(undefined **)(this + 0x140) = puVar1;
  if (this[0x198] != (GUITextFieldImpl)0x0) {
    StopTextInputWithDelegate((ITextInputDelegate *)(this + 0x140));
    *(undefined2 *)(this + 0x198) = 0;
  }
  puVar1 = PTR_DAT_007e5de8;
  puVar5 = (undefined *)(*(long *)(this + 400) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(this + 400) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 0x188) + -0x18);
  if (puVar5 != puVar1) {
    piVar8 = (int *)(*(long *)(this + 0x188) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
      plVar10 = *(long **)(this + 0x160);
      goto joined_r0x005b995c;
    }
  }
  plVar10 = *(long **)(this + 0x160);
joined_r0x005b995c:
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = *(long **)(this + 0x150);
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = *(long **)(this + 0x130);
  *(undefined **)this = PTR_vtable_007e75f0 + 0x10;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  GUIControl::~GUIControl((GUIControl *)this);
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


