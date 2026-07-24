/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00460928
 * Function: FUN_00460928
 * Signature: undefined FUN_00460928(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00460928(lua_State *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ProgramState *this;
  long lVar7;
  int *piVar8;
  int iVar9;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0046094c to 0056094f has its CatchHandler @ 00460b78 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_70,"gameController",&local_60);
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_70);
  puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 00460978 to 0056097b has its CatchHandler @ 00460b70 */
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 004609ac with catch @ 00460b68 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* try { // try from 00460b0c to 00560b0f has its CatchHandler @ 00460b28 */
                    /* try { // try from 00460b10 to 00560bf3 has its CatchHandler @ 00460710 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 00460978 with catch @ 00460b70 */
    if (iVar9 < 1) {
                    /* catch() { ... } // from try @ 0046094c with catch @ 00460b78 */
      operator_delete((undefined *)(local_70 + -0x18));
                    /* catch() { ... } // from try @ 00460924 with catch @ 00460b80 */
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
                    /* try { // try from 004609ac to 005609af has its CatchHandler @ 00460b68 */
  FUN_00666bb8(&local_60,&DAT_0068fbeb,&local_70);
  if (*(long *)(local_58 + -0x18) != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 0xa8);
    plVar2 = *(long **)(lVar7 + 0xb0);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
                    /* try { // try from 004609d4 to 005609d7 has its CatchHandler @ 00460b60 */
    Caver::GameData::ItemForName((string *)*puVar1);
    if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00460a00 to 00560a03 has its CatchHandler @ 00460b58 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar7 = plVar2[2];
      plVar2[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
                    /* try { // try from 00460a28 to 00560a2b has its CatchHandler @ 00460b50 */
    plVar2 = local_68;
    if (local_70 != 0) {
      FUN_0066a528(&local_78,local_70 + 0x10);
      FUN_0066a6a8(&local_60,&local_78);
      plVar2 = local_68;
                    /* try { // try from 00460a54 to 00560a57 has its CatchHandler @ 00460b48 */
      if ((undefined *)(local_78 + -0x18) != puVar6) {
        piVar8 = (int *)(local_78 + -8);
                    /* catch() { ... } // from try @ 0046076c with catch @ 00460bd0 */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
              *piVar8 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
                    /* try { // try from 00460bf4 to 00560c43 has its CatchHandler @ 00460fdc */
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
          plVar2 = local_68;
        }
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00460a7c to 00560a7f has its CatchHandler @ 00460b40 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar7 = plVar2[2];
      plVar2[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  Caver::ProgramState::PushString(this,(string *)&local_60);
                    /* try { // try from 00460ab0 to 00560ab3 has its CatchHandler @ 00460b38 */
  if ((undefined *)(local_60 + -0x18) != puVar6) {
    piVar8 = (int *)(local_60 + -8);
                    /* catch() { ... } // from try @ 00460b0c with catch @ 00460b28 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 004608f0 with catch @ 00460b88 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 00460ad8 with catch @ 00460b30 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 00460ab0 with catch @ 00460b38 */
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 004608cc with catch @ 00460b90 */
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
                    /* catch() { ... } // from try @ 004608a4 with catch @ 00460ba0 */
    }
  }
  if ((undefined *)(local_58 + -0x18) != puVar6) {
                    /* catch() { ... } // from try @ 00460a7c with catch @ 00460b40 */
                    /* catch() { ... } // from try @ 00460a54 with catch @ 00460b48 */
    piVar8 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 004607d8 with catch @ 00460ba8 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 00460a28 with catch @ 00460b50 */
        iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 00460a00 with catch @ 00460b58 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 004607b4 with catch @ 00460bb0 */
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
                    /* catch() { ... } // from try @ 00460790 with catch @ 00460bc0 */
    }
  }
                    /* try { // try from 00460ad8 to 00560adb has its CatchHandler @ 00460b30 */
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


