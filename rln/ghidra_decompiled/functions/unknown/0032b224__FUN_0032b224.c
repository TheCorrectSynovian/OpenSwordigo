/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b224
 * Function: FUN_0032b224
 * Signature: undefined FUN_0032b224(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0032b224(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  ObjectLinkControllerComponent *this_00;
  int *piVar5;
  int iVar6;
  long *plVar7;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar4 == (undefined8 *)0x0) || ((SceneObject *)*puVar4 == (SceneObject *)0x0)) {
    this_00 = (ObjectLinkControllerComponent *)0x0;
  }
  else {
    this_00 = (ObjectLinkControllerComponent *)
              Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar4,(long)PTR_Interface_007e6970);
  }
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if (puVar4 == (undefined8 *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)*puVar4;
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  if ((this_00 != (ObjectLinkControllerComponent *)0x0) && (plVar7 != (long *)0x0)) {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    local_48 = plVar7;
    FUN_0066a6a8(this_00 + 0x90,&local_40);
    Caver::ObjectLinkControllerComponent::LinkToObject(this_00,(intrusive_ptr *)&local_48);
    iVar6 = (int)plVar7[1] + -1;
    *(int *)(plVar7 + 1) = iVar6;
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
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
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


