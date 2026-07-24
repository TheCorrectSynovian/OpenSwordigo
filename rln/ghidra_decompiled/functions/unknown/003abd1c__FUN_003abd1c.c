/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003abd1c
 * Function: FUN_003abd1c
 * Signature: undefined FUN_003abd1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003abd1c(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ProgramState *this;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  SceneObject *this_00;
  long *plVar8;
  long *plVar9;
  float fVar10;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar4 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
    return 0;
  }
  this_00 = (SceneObject *)*puVar4;
  iVar3 = Caver::ProgramState::IntAtStackIndex(this,2);
  if (this_00 == (SceneObject *)0x0) {
    return 0;
  }
  lVar5 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar3);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(long *)(lVar5 + 0x158);
  plVar9 = *(long **)(lVar5 + 0x160);
  if (plVar9 == (long *)0x0) {
    if (lVar1 == 0) {
      return 0;
    }
    plVar9 = *(long **)(lVar5 + 0x158);
    plVar8 = (long *)0x0;
  }
  else {
    if (plVar9[1] == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if (lVar1 == 0) {
      return 0;
    }
    plVar9 = *(long **)(lVar5 + 0x158);
    plVar8 = *(long **)(lVar5 + 0x160);
    if (plVar8 != (long *)0x0) {
      bVar2 = false;
      plVar8[1] = plVar8[1] + 1;
      goto LAB_003abdf8;
    }
  }
  bVar2 = true;
LAB_003abdf8:
  uVar6 = Caver::ProgramState::IntAtStackIndex(this,3);
  if (plVar9[0x19] == 0) {
    fVar10 = (float)(**(code **)(*plVar9 + 0x20))(plVar9,uVar6 & 0xffffffff);
  }
  else {
    fVar10 = *(float *)(plVar9[0x19] + (uVar6 & 0xffffffff) * 4);
  }
  Caver::ProgramState::PushFloat(this,fVar10);
  if ((!bVar2) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar5 = plVar8[2];
    plVar8[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  return 1;
}


