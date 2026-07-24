/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036dc24
 * Function: FUN_0036dc24
 * Signature: undefined FUN_0036dc24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036dc24(lua_State *param_1)

{
  int iVar1;
  bool bVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  if ((SceneObject *)*puVar3 == (SceneObject *)0x0) {
    return 0;
  }
  lVar4 = Caver::SceneObject::ComponentWithInterface
                    ((SceneObject *)*puVar3,(long)PTR_Interface_007e7bc0);
  if (lVar4 == 0) {
    return 0;
  }
  plVar5 = (long *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      bVar2 = false;
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 2;
      plVar7 = plVar5;
      goto LAB_0036dca0;
    }
  }
  plVar7 = (long *)0x0;
  bVar2 = true;
LAB_0036dca0:
  plVar6 = *(long **)(lVar4 + 0xf0);
  *(long **)(lVar4 + 0xf0) = plVar5;
  if ((plVar6 != (long *)0x0) &&
     (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  if ((!bVar2) && (iVar1 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  return 0;
}


