/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363200
 * Function: FUN_00363200
 * Signature: undefined FUN_00363200(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00363200(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar6 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = 0;
    if ((SceneObject *)*puVar4 != (SceneObject *)0x0) {
      lVar5 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar4,(long)PTR_Interface_007e57a8);
      uVar6 = 0;
      if (lVar5 != 0) {
        FUN_0066a528(local_38,lVar5 + 0x78);
        Caver::ProgramState::PushString(this,(string *)local_38);
        if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
          piVar7 = (int *)(local_38[0] + -8);
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
            operator_delete((undefined *)(local_38[0] + -0x18));
          }
        }
        uVar6 = 1;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


