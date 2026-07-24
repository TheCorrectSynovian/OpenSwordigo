/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4cf0
 * Function: FUN_003b4cf0
 * Signature: undefined FUN_003b4cf0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003b4cf0(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  ProgramState *this;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  SceneObject *this_00;
  size_t __n;
  void *local_58;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar5;
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  if ((this_00 != (SceneObject *)0x0) &&
     (lVar6 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e5b78),
     lVar6 != 0)) {
    __n = *(size_t *)((long)local_58 + -0x18);
    if ((__n == *(size_t *)((long)DAT_007e8be0 + -0x18)) &&
       (iVar4 = memcmp(local_58,DAT_007e8be0,__n), iVar4 == 0)) {
      *(undefined4 *)(lVar6 + 0x98) = 0;
    }
    if ((__n == *(size_t *)((long)DAT_007e8be8 + -0x18)) &&
       (iVar4 = memcmp(local_58,DAT_007e8be8,__n), iVar4 == 0)) {
      *(undefined4 *)(lVar6 + 0x98) = 1;
    }
    if ((__n == *(size_t *)((long)DAT_007e8bf0 + -0x18)) &&
       (iVar4 = memcmp(local_58,DAT_007e8bf0,__n), iVar4 == 0)) {
      *(undefined4 *)(lVar6 + 0x98) = 2;
    }
  }
  if ((undefined *)((long)local_58 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)((long)local_58 + -8);
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
      operator_delete((undefined *)((long)local_58 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


