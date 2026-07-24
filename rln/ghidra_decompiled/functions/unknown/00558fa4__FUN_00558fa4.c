/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558fa4
 * Function: FUN_00558fa4
 * Signature: undefined FUN_00558fa4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00558fa4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"cameraController",auStack_50);
  puVar4 = (undefined4 *)
           Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 00558b00 with catch @ 00559110 */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 00558b70 with catch @ 005590f4 */
        iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 00558de4 with catch @ 005590f8 */
                    /* catch() { ... } // from try @ 00558c20 with catch @ 005590fc */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 != (undefined8 *)0x0) {
    plVar6 = *(long **)(puVar4 + 0x1a);
    *(undefined8 *)(puVar4 + 0x1a) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = *(long **)(puVar4 + 0x1c);
    *(undefined8 *)(puVar4 + 0x1c) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
    *puVar4 = 1;
    puVar4[7] = 0x3f7851ec;
    puVar4[0xb] = 0x3f75c28f;
    *(undefined8 *)(puVar4 + 8) = *puVar5;
    puVar4[10] = *(undefined4 *)(puVar5 + 1);
    fVar9 = *(float *)(puVar5 + 1);
    *(ulong *)(puVar4 + 4) =
         CONCAT44((float)((ulong)*puVar5 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(puVar4 + 1) >> 0x20),
                  (float)*puVar5 + (float)*(undefined8 *)(puVar4 + 1));
    puVar4[6] = fVar9 + (float)puVar4[3];
  }
                    /* catch() { ... } // from try @ 00558b84 with catch @ 005590bc */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


