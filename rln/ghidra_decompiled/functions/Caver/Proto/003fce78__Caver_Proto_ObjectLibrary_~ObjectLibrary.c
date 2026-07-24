/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fce78
 * Function: Caver::Proto::ObjectLibrary::~ObjectLibrary
 * Signature: undefined __thiscall ~ObjectLibrary(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::~ObjectLibrary() */

void __thiscall Caver::Proto::ObjectLibrary::~ObjectLibrary(ObjectLibrary *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  ObjectLibrary *pOVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(this + 0x10);
  bVar3 = plVar9 != (long *)PTR__default_name__007e6d40;
  *(undefined **)this = PTR_vtable_007e6ec8 + 0x10;
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
  iVar8 = *(int *)(this + 0xcc);
  pOVar5 = *(ObjectLibrary **)(this + 0xc0);
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      plVar9 = *(long **)(pOVar5 + lVar10 * 8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
        iVar8 = *(int *)(this + 0xcc);
        pOVar5 = *(ObjectLibrary **)(this + 0xc0);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if ((pOVar5 != this + 0xd8) && (pOVar5 != (ObjectLibrary *)0x0)) {
    operator_delete__(pOVar5);
  }
  iVar8 = *(int *)(this + 0x94);
  pOVar5 = *(ObjectLibrary **)(this + 0x88);
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      plVar9 = *(long **)(pOVar5 + lVar10 * 8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
        iVar8 = *(int *)(this + 0x94);
        pOVar5 = *(ObjectLibrary **)(this + 0x88);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if ((pOVar5 != this + 0xa0) && (pOVar5 != (ObjectLibrary *)0x0)) {
    operator_delete__(pOVar5);
  }
  pOVar5 = *(ObjectLibrary **)(this + 0x50);
  if (0 < *(int *)(this + 0x5c)) {
    lVar10 = 0;
    do {
      google::protobuf::internal::StringTypeHandlerBase::Delete(*(string **)(pOVar5 + lVar10 * 8));
      pOVar5 = *(ObjectLibrary **)(this + 0x50);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(this + 0x5c));
  }
  if ((pOVar5 != this + 0x68) && (pOVar5 != (ObjectLibrary *)0x0)) {
    operator_delete__(pOVar5);
  }
  iVar8 = *(int *)(this + 0x24);
  pOVar5 = *(ObjectLibrary **)(this + 0x18);
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      plVar9 = *(long **)(pOVar5 + lVar10 * 8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
        iVar8 = *(int *)(this + 0x24);
        pOVar5 = *(ObjectLibrary **)(this + 0x18);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if ((pOVar5 != this + 0x30) && (pOVar5 != (ObjectLibrary *)0x0)) {
    operator_delete__(pOVar5);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


