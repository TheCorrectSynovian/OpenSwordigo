/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed09c
 * Function: Caver::Proto::QuestText::~QuestText
 * Signature: undefined __thiscall ~QuestText(QuestText * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::~QuestText() */

void __thiscall Caver::Proto::QuestText::~QuestText(QuestText *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  QuestText *pQVar5;
  long lVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  bVar3 = plVar4 != (long *)PTR__default_quest_name__007e6638;
  *(undefined **)this = PTR_vtable_007e4c28 + 0x10;
  if ((bVar3) && (plVar4 != (long *)0x0)) {
    puVar7 = (undefined *)(*plVar4 + -0x18);
    if (puVar7 != PTR_DAT_007e5de8) {
      piVar8 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(puVar7);
      }
    }
    operator_delete(plVar4);
  }
  pQVar5 = *(QuestText **)(this + 0x18);
  if (0 < *(int *)(this + 0x24)) {
    lVar10 = 0;
    do {
      google::protobuf::internal::StringTypeHandlerBase::Delete(*(string **)(pQVar5 + lVar10 * 8));
      pQVar5 = *(QuestText **)(this + 0x18);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(this + 0x24));
  }
  if ((pQVar5 != this + 0x30) && (pQVar5 != (QuestText *)0x0)) {
    operator_delete__(pQVar5);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


