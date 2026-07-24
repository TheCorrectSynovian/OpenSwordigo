/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ab9a4
 * Function: FUN_003ab9a4
 * Signature: undefined FUN_003ab9a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003ab9a4(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  SceneObject *this_00;
  long *plVar6;
  long lVar7;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
    return 0;
  }
  this_00 = (SceneObject *)*puVar3;
  iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
  if (this_00 == (SceneObject *)0x0) {
    return 0;
  }
  lVar4 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar2);
  if (lVar4 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar4 + 0x158);
  plVar6 = *(long **)(lVar4 + 0x160);
  if (plVar6 == (long *)0x0) {
    if (lVar7 == 0) {
      return 0;
    }
    lVar7 = *(long *)(lVar4 + 0x158);
    plVar6 = (long *)0x0;
  }
  else {
    if (plVar6[1] == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if (lVar7 == 0) {
      return 0;
    }
    lVar7 = *(long *)(lVar4 + 0x158);
    plVar6 = *(long **)(lVar4 + 0x160);
    if (plVar6 != (long *)0x0) {
      bVar1 = false;
      plVar6[1] = plVar6[1] + 1;
      goto LAB_003aba80;
    }
  }
  bVar1 = true;
LAB_003aba80:
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,3);
  *(undefined8 *)(lVar7 + 0x38) = *puVar3;
  *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(puVar3 + 1);
  if ((!bVar1) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar4 = plVar6[2];
    plVar6[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  return 0;
}


