/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00582630
 * Function: FUN_00582630
 * Signature: undefined FUN_00582630(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00582630(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
                    /* catch() { ... } // from try @ 00581ef8 with catch @ 00582640 */
                    /* catch() { ... } // from try @ 00581ed4 with catch @ 00582644 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* catch() { ... } // from try @ 00581ac4 with catch @ 00582654 */
                    /* catch() { ... } // from try @ 00581aa0 with catch @ 00582658 */
                    /* catch() { ... } // from try @ 0058207c with catch @ 00582668 */
  FUN_00666bb8(local_48,"musicPlayer",auStack_50);
                    /* catch() { ... } // from try @ 00581e44 with catch @ 0058266c */
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
                    /* try { // try from 00582690 to 006837ef has its CatchHandler @ 00583994 */
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00581984 with catch @ 00582724 */
      iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 005816b8 with catch @ 00582728 */
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0058176c with catch @ 00582710 */
        iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 00581748 with catch @ 00582714 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  uVar5 = Caver::ProgramState::IsFloatAtStackIndex(this,1);
  fVar8 = DAT_0069674c;
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
  }
  else {
    fVar8 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
    *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
                    /* catch() { ... } // from try @ 00581d50 with catch @ 005826bc */
    fVar8 = 1.0 / fVar8;
                    /* catch() { ... } // from try @ 00581a10 with catch @ 005826c0 */
  }
  *(float *)(lVar4 + 0x24) = fVar8;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


