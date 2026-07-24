/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005591a0
 * Function: FUN_005591a0
 * Signature: undefined FUN_005591a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005591a0(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  CameraController *this_00;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  SceneObject *this_01;
  long local_70;
  long lStack_68;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 00558aac with catch @ 005591bc */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00558cf8 with catch @ 005591c0
                       catch() { ... } // from try @ 00558e10 with catch @ 005591c0 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* catch() { ... } // from try @ 00558e28 with catch @ 005591d0 */
  FUN_00666bb8(&local_70,"cameraController",auStack_50);
  this_00 = (CameraController *)
            Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_70);
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00558c14 with catch @ 005592e0
                       catch() { ... } // from try @ 00558cb0 with catch @ 005592e0
                       catch() { ... } // from try @ 00558ec0 with catch @ 005592e0 */
    piVar7 = (int *)(local_70 + -8);
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
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar4 == (undefined8 *)0x0) {
    Caver::ProgramState::PointerAtStackIndex(this,2);
  }
  else {
    this_01 = (SceneObject *)*puVar4;
    plVar5 = (long *)Caver::ProgramState::PointerAtStackIndex(this,2);
                    /* catch() { ... } // from try @ 00558d98 with catch @ 0055923c */
    if ((this_01 != (SceneObject *)0x0) &&
       (plVar6 = (long *)Caver::SceneObject::ComponentWithInterface
                                   (this_01,(long)PTR_Interface_007e5840), plVar6 != (long *)0x0)) {
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      if (plVar5 == (long *)0x0) {
        local_70 = 0;
        lStack_68 = 0;
      }
      else {
        lStack_68 = plVar5[1];
        local_70 = *plVar5;
                    /* try { // try from 00559260 to 00659327 has its CatchHandler @ 00559330 */
      }
      local_58 = plVar6;
      Caver::CameraController::FocusAtShape
                (this_00,(intrusive_ptr *)&local_58,(Rectangle *)&local_70,true);
      iVar8 = (int)plVar6[1] + -1;
      *(int *)(plVar6 + 1) = iVar8;
      if (iVar8 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00558bfc with catch @ 005592d4 */
  return 0;
}


