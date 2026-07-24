/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036da14
 * Function: FUN_0036da14
 * Signature: undefined FUN_0036da14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036da14(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  ProgramState *this;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar5 != (undefined8 *)0x0) && ((SceneObject *)*puVar5 != (SceneObject *)0x0)) &&
     (lVar6 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar5,(long)PTR_Interface_007e7bc0), lVar6 != 0)) {
    Caver::ProgramState::StringAtStackIndex((int)this);
    iVar4 = FUN_006689e0(local_48,&DAT_0068804e);
    if (iVar4 == 0) {
      uVar7 = 1;
    }
    else {
      iVar4 = FUN_006689e0(local_48,"follow");
      if (iVar4 == 0) {
        uVar7 = 2;
      }
      else {
        iVar4 = FUN_006689e0(local_48,"fight");
        uVar7 = 3;
        if (iVar4 != 0) {
          uVar7 = 0;
        }
      }
    }
    *(undefined4 *)(lVar6 + 0xf8) = uVar7;
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar8;
        *piVar8 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
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


