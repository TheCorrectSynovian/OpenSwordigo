/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00569ac4
 * Function: FUN_00569ac4
 * Signature: undefined FUN_00569ac4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00569ac4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  ProgramState *this;
  string *psVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long *local_50;
  undefined1 auStack_48 [8];
  long local_40;
  long local_38;
  
                    /* try { // try from 00569ad0 to 00669b87 has its CatchHandler @ 00569ad0
                       catch() { ... } // from try @ 00569ad0 with catch @ 00569ad0
                       catch() { ... } // from try @ 00569cf8 with catch @ 00569ad0
                       catch() { ... } // from try @ 00569df8 with catch @ 00569ad0
                       catch() { ... } // from try @ 00569ea0 with catch @ 00569ad0
                       catch() { ... } // from try @ 00569f64 with catch @ 00569ad0
                       catch() { ... } // from try @ 0056a234 with catch @ 00569ad0 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_40,"scene",auStack_48);
  psVar6 = (string *)
           Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_40);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00569bf8 to 00669c03 has its CatchHandler @ 0056a1ec */
    piVar7 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00569c14 to 00669c23 has its CatchHandler @ 0056a200 */
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00569c50 to 00669c53 has its CatchHandler @ 0056a200 */
    if (iVar8 < 1) {
                    /* try { // try from 00569c58 to 00669cd3 has its CatchHandler @ 0056a20c */
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  bVar5 = Caver::ProgramState::BoolAtStackIndex(this,2);
  Caver::Scene::GroupWithIdentifier(psVar6,SUB81(&local_40,0));
  *(byte *)(local_50 + 9) = bVar5 & 1;
  if ((bVar5 & 1) == 0) {
    if (0 < (int)local_50[7]) {
      lVar9 = 0;
      do {
                    /* try { // try from 00569b88 to 00669b93 has its CatchHandler @ 0056a158 */
        Caver::SceneObject::Activate(*(SceneObject **)(local_50[8] + lVar9 * 8));
                    /* try { // try from 00569b94 to 00669ba7 has its CatchHandler @ 0056a0f4 */
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)local_50[7]);
    }
  }
  else if (local_50 == (long *)0x0) goto LAB_00569bc0;
  iVar8 = (int)local_50[1] + -1;
  *(int *)(local_50 + 1) = iVar8;
  if (iVar8 == 0) {
    (**(code **)(*local_50 + 8))(local_50);
  }
LAB_00569bc0:
  if ((undefined *)(local_40 + -0x18) != puVar4) {
                    /* try { // try from 00569c24 to 00669c2f has its CatchHandler @ 0056a1bc */
    piVar7 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
                    /* try { // try from 00569bd0 to 00669bdf has its CatchHandler @ 0056a204 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00569be0 to 00669be7 has its CatchHandler @ 0056a1f0 */
  return 0;
}


