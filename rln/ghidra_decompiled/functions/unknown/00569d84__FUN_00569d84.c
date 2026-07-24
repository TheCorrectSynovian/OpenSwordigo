/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00569d84
 * Function: FUN_00569d84
 * Signature: undefined FUN_00569d84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00569d84(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"scene",auStack_60);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
                    /* try { // try from 00569de4 to 00669df7 has its CatchHandler @ 0056a08c */
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
                    /* try { // try from 00569e8c to 00669e9f has its CatchHandler @ 0056a04c */
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
                    /* try { // try from 00569ea0 to 00669f4f has its CatchHandler @ 00569ad0 */
    }
  }
                    /* try { // try from 00569df8 to 00669e8b has its CatchHandler @ 00569ad0 */
  uVar7 = Caver::ProgramState::FloatAtStackIndex(this,1);
  uVar8 = Caver::ProgramState::FloatAtStackIndex(this,2);
  uVar9 = Caver::ProgramState::FloatAtStackIndex(this,3);
  *(undefined1 *)(lVar4 + 0x3f0) = 1;
  *(undefined4 *)(lVar4 + 0x3f4) = uVar7;
  *(undefined4 *)(lVar4 + 0x3f8) = uVar8;
  *(undefined4 *)(lVar4 + 0x3fc) = uVar9;
  *(undefined4 *)(lVar4 + 0x400) = 0x3f800000;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


