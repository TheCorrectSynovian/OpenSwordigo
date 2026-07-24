/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004afea0
 * Function: Caver::GameData::AddItem
 * Signature: undefined __thiscall AddItem(GameData * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::AddItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::GameData::AddItem(GameData *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 004afeb0 to 005b083b has its CatchHandler @ 004af920 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(local_48,*(long *)param_1 + 8);
  puVar5 = (undefined8 *)
           std::
           map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>>
           ::operator[]((map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>>
                         *)this,(string *)local_48);
  uVar1 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar9 = (long *)puVar5[1];
  *puVar5 = uVar1;
  puVar5[1] = lVar6;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


