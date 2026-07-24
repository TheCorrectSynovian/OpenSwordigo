/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003416cc
 * Function: FUN_003416cc
 * Signature: undefined FUN_003416cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003416cc(lua_State *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  ProgramState *this;
  undefined8 *puVar6;
  Component *pCVar7;
  Component *pCVar8;
  SceneObject *this_00;
  float fVar9;
  float fVar10;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar6 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar6 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar6;
  }
  fVar9 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  fVar10 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  if (this_00 != (SceneObject *)0x0) {
    pCVar7 = (Component *)
             Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6a60);
    if (pCVar7 == (Component *)0x0) {
      pCVar7 = operator_new(0xc0);
      *(undefined4 *)(pCVar7 + 8) = 0;
      *(undefined8 *)(pCVar7 + 0x20) = 0;
      *(undefined8 *)(pCVar7 + 0x28) = 0;
      pCVar7[0x30] = (Component)0x0;
      puVar4 = PTR_vtable_007e6898;
      puVar1 = PTR_vtable_007e6898 + 0x128;
      puVar2 = PTR_vtable_007e6898 + 0x168;
      *(undefined **)(pCVar7 + 0x38) = PTR_DAT_007e5de8 + 0x18;
      pCVar8 = pCVar7 + 0x48;
      *(undefined8 *)pCVar8 = 0;
      *(undefined **)(pCVar7 + 0x18) = puVar2;
      *(undefined **)(pCVar7 + 0x10) = puVar1;
      uVar3 = _DAT_00683948;
      *(undefined8 *)(pCVar7 + 0x50) = 0;
      *(Component **)(pCVar7 + 0x58) = pCVar8;
      *(undefined8 *)(pCVar7 + 0x68) = 0;
      *(undefined8 *)(pCVar7 + 0x70) = 0;
      *(undefined **)pCVar7 = puVar4 + 0x10;
      *(undefined8 *)(pCVar7 + 0x75) = 0;
      *(undefined8 *)(pCVar7 + 0x85) = 0;
      *(undefined8 *)(pCVar7 + 0x80) = 0;
      *(undefined8 *)(pCVar7 + 0x90) = 0;
      *(undefined8 *)(pCVar7 + 0x98) = 0;
      *(undefined8 *)(pCVar7 + 0xa5) = 0;
      *(undefined8 *)(pCVar7 + 0xa0) = 0;
      *(Component **)(pCVar7 + 0x60) = pCVar8;
      *(undefined8 *)(pCVar7 + 0xb0) = uVar3;
      *(undefined8 *)(pCVar7 + 0xb8) = 0;
      Caver::SceneObject::AddComponent(this_00,pCVar7);
    }
    bVar5 = DAT_00683734 <= fVar10;
    fVar9 = fVar9 * *(float *)(*(SceneObject **)(pCVar7 + 0x28) + 0x88);
    *(float *)(pCVar7 + 0xb0) = fVar9;
    if (bVar5) {
      pCVar7[0xac] = (Component)0x1;
      *(float *)(pCVar7 + 0xb4) = fVar10;
    }
    else {
      Caver::SceneObject::SetInstanceScaling(*(SceneObject **)(pCVar7 + 0x28),fVar9);
    }
  }
  return 0;
}


