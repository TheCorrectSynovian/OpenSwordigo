/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6a94
 * Function: Caver::Proto::GUIViewLayout::~GUIViewLayout
 * Signature: undefined __thiscall ~GUIViewLayout(GUIViewLayout * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::~GUIViewLayout() */

void __thiscall Caver::Proto::GUIViewLayout::~GUIViewLayout(GUIViewLayout *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  GUIViewLayout *pGVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(this + 0x10);
  bVar3 = plVar9 != (long *)PTR__default_identifier__007e4ab0;
  *(undefined **)this = PTR_vtable_007e5978 + 0x10;
  if ((bVar3) && (plVar9 != (long *)0x0)) {
    puVar4 = (undefined *)(*plVar9 + -0x18);
    if (puVar4 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar9 + -8);
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
      }
    }
    operator_delete(plVar9);
  }
  if ((*(GUIViewLayout **)PTR_default_instance__007e69d0 != this) &&
     (*(long **)(this + 0x50) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  iVar8 = *(int *)(this + 0x24);
  pGVar5 = *(GUIViewLayout **)(this + 0x18);
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      plVar9 = *(long **)(pGVar5 + lVar10 * 8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
        iVar8 = *(int *)(this + 0x24);
        pGVar5 = *(GUIViewLayout **)(this + 0x18);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if ((pGVar5 != this + 0x30) && (pGVar5 != (GUIViewLayout *)0x0)) {
    operator_delete__(pGVar5);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


