/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec910
 * Function: Caver::Proto::QuestState::~QuestState
 * Signature: undefined __thiscall ~QuestState(QuestState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestState::~QuestState() */

void __thiscall Caver::Proto::QuestState::~QuestState(QuestState *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  bVar3 = plVar4 != (long *)PTR__default_quest_name__007e6f40;
  *(undefined **)this = PTR_vtable_007e7118 + 0x10;
  if ((bVar3) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


