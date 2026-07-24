/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b0084
 * Function: Caver::GameData::AddQuest
 * Signature: undefined __thiscall AddQuest(GameData * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&) */

void __thiscall Caver::GameData::AddQuest(GameData *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(local_48,*(long *)param_1 + 8);
  puVar5 = (undefined8 *)
           std::
           map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
           ::operator[]((map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
                         *)(this + 0x58),(string *)local_48);
  uVar1 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar10 = (long *)puVar5[1];
  *puVar5 = uVar1;
  puVar5[1] = lVar6;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_48[0] + -8);
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  puVar7 = *(undefined4 **)param_1;
  puVar5 = *(undefined8 **)(this + 0x90);
  *puVar7 = (int)((ulong)((long)puVar5 - *(long *)(this + 0x88)) >> 4);
  if (*(undefined8 **)(this + 0x98) == puVar5) {
    std::vector<boost::shared_ptr<Caver::Quest>,std::allocator<boost::shared_ptr<Caver::Quest>>>::
    _M_insert_aux((vector<boost::shared_ptr<Caver::Quest>,std::allocator<boost::shared_ptr<Caver::Quest>>>
                   *)(this + 0x88),puVar5,param_1);
  }
  else {
    *puVar5 = puVar7;
    lVar6 = *(long *)(param_1 + 8);
    puVar5[1] = lVar6;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
    }
    *(undefined8 **)(this + 0x90) = puVar5 + 2;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


