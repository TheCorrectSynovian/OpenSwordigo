/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00379f40
 * Function: FUN_00379f40
 * Signature: undefined FUN_00379f40(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00379f40(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  ProgramState *this;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar5 == (undefined8 *)0x0) || ((SceneObject *)*puVar5 == (SceneObject *)0x0)) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    lVar6 = Caver::SceneObject::ComponentWithInterface
                      ((SceneObject *)*puVar5,(long)PTR_Interface_007e60a0);
    iVar4 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (lVar6 != 0) {
      Caver::ProgramState::StringAtStackIndex((int)this);
      FUN_0066a6a8(*(long *)(lVar6 + 0x90) + (long)iVar4 * 0x20 + 8,local_48);
      if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
        piVar7 = (int *)(local_48[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar4 = *piVar7;
          *piVar7 = iVar4 + -1;
        }
        else {
          do {
            iVar4 = *piVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar2) {
              *piVar7 = iVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar4 < 1) {
          operator_delete((undefined *)(local_48[0] + -0x18));
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


