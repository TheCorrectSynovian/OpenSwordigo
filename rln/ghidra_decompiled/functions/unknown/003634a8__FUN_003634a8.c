/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003634a8
 * Function: FUN_003634a8
 * Signature: undefined FUN_003634a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003634a8(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar4 != (undefined8 *)0x0) && ((SceneObject *)*puVar4 != (SceneObject *)0x0)) &&
     (lVar5 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar4,(long)PTR_Interface_007e57a8), lVar5 != 0)) {
    Caver::ProgramState::StringAtStackIndex((int)this);
    FUN_0066a6a8(lVar5 + 0x80,local_48);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_48[0] + -8);
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
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


