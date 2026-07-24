/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003abed4
 * Function: FUN_003abed4
 * Signature: undefined FUN_003abed4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003abed4(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ProgramState *this;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  SceneObject *this_00;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
    return 0;
  }
  this_00 = (SceneObject *)*puVar5;
  iVar3 = Caver::ProgramState::IntAtStackIndex(this,2);
  if (this_00 == (SceneObject *)0x0) {
    return 0;
  }
  lVar6 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar3);
  if (lVar6 == 0) {
    return 0;
  }
  lVar1 = *(long *)(lVar6 + 0x158);
  plVar13 = *(long **)(lVar6 + 0x160);
  if (plVar13 == (long *)0x0) {
    if (lVar1 == 0) {
      return 0;
    }
    plVar13 = *(long **)(lVar6 + 0x158);
    plVar11 = (long *)0x0;
LAB_003abfbc:
    bVar2 = true;
  }
  else {
    if (plVar13[1] == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if (lVar1 == 0) {
      return 0;
    }
    plVar13 = *(long **)(lVar6 + 0x158);
    plVar11 = *(long **)(lVar6 + 0x160);
    if (plVar11 == (long *)0x0) goto LAB_003abfbc;
    bVar2 = false;
    plVar11[1] = plVar11[1] + 1;
  }
  uVar7 = Caver::ProgramState::IntAtStackIndex(this,3);
  uVar14 = Caver::ProgramState::FloatAtStackIndex(this,4);
  lVar6 = plVar13[0x19];
  if (lVar6 == 0) {
    uVar4 = (**(code **)(*plVar13 + 0x18))(plVar13);
    pvVar8 = operator_new__((ulong)uVar4 << 2);
    pvVar10 = (void *)plVar13[0x19];
    plVar13[0x19] = (long)pvVar8;
    if (pvVar10 != (void *)0x0) {
      operator_delete__(pvVar10);
    }
    if (uVar4 == 0) {
      *(undefined4 *)(plVar13[0x19] + (uVar7 & 0xffffffff) * 4) = uVar14;
      goto joined_r0x003ac0a4;
    }
    uVar12 = 0;
    do {
      uVar15 = (**(code **)(*plVar13 + 0x20))(plVar13,uVar12 & 0xffffffff);
      lVar6 = plVar13[0x19];
      *(undefined4 *)(lVar6 + uVar12 * 4) = uVar15;
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  *(undefined4 *)(lVar6 + (uVar7 & 0xffffffff) * 4) = uVar14;
joined_r0x003ac0a4:
  if ((!bVar2) && (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar6 = plVar11[2];
    plVar11[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  return 0;
}


