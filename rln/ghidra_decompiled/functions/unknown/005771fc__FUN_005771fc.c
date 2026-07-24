/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005771fc
 * Function: FUN_005771fc
 * Signature: undefined FUN_005771fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005771fc(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  ComponentFactory *this_00;
  Component *pCVar5;
  int *piVar6;
  int iVar7;
  SceneObject *this_01;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar4 == (undefined8 *)0x0) {
    this_01 = (SceneObject *)0x0;
  }
  else {
    this_01 = (SceneObject *)*puVar4;
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  if ((this_01 != (SceneObject *)0x0) && (*(long *)(local_48[0] + -0x18) != 0)) {
    this_00 = (ComponentFactory *)Caver::ComponentFactory::sharedManager();
    pCVar5 = (Component *)
             Caver::ComponentFactory::NewComponentWithClassName(this_00,(string *)local_48);
    Caver::SceneObject::AddComponent(this_01,pCVar5);
  }
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
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


