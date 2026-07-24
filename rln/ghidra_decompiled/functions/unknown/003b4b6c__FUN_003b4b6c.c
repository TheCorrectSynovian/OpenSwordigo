/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4b6c
 * Function: FUN_003b4b6c
 * Signature: undefined FUN_003b4b6c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003b4b6c(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined *local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar4 == (undefined8 *)0x0) {
    local_38[0] = PTR_DAT_007e5de8 + 0x18;
  }
  else {
    local_38[0] = PTR_DAT_007e5de8 + 0x18;
    if (((SceneObject *)*puVar4 != (SceneObject *)0x0) &&
       (lVar5 = Caver::SceneObject::ComponentWithInterface
                          ((SceneObject *)*puVar4,(long)PTR_Interface_007e5b78), lVar5 != 0)) {
      FUN_0066a6a8(local_38,&DAT_007e8be0 + *(int *)(lVar5 + 0x98));
    }
  }
  Caver::ProgramState::PushString(this,(string *)local_38);
  if (local_38[0] + -0x18 != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_38[0] + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


