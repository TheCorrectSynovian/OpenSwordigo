/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341814
 * Function: FUN_00341814
 * Signature: undefined FUN_00341814(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00341814(lua_State *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ProgramState *this;
  undefined8 *puVar5;
  Component *pCVar6;
  Component *pCVar7;
  SceneObject *this_00;
  float fVar8;
  undefined4 uVar9;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar5;
  }
  fVar8 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  uVar9 = Caver::ProgramState::FloatAtStackIndex(this,3);
  if (this_00 != (SceneObject *)0x0) {
    fVar8 = fVar8 * DAT_00684004;
    pCVar6 = (Component *)
             Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6a60);
    if (pCVar6 == (Component *)0x0) {
      pCVar6 = operator_new(0xc0);
      *(undefined4 *)(pCVar6 + 8) = 0;
      *(undefined8 *)(pCVar6 + 0x20) = 0;
      *(undefined8 *)(pCVar6 + 0x28) = 0;
      pCVar6[0x30] = (Component)0x0;
      puVar4 = PTR_vtable_007e6898;
      puVar1 = PTR_vtable_007e6898 + 0x128;
      puVar2 = PTR_vtable_007e6898 + 0x168;
      *(undefined **)(pCVar6 + 0x38) = PTR_DAT_007e5de8 + 0x18;
      pCVar7 = pCVar6 + 0x48;
      *(undefined8 *)pCVar7 = 0;
      *(undefined **)(pCVar6 + 0x18) = puVar2;
      *(undefined **)(pCVar6 + 0x10) = puVar1;
      uVar3 = _DAT_00683948;
      *(undefined8 *)(pCVar6 + 0x50) = 0;
      *(Component **)(pCVar6 + 0x58) = pCVar7;
      *(undefined8 *)(pCVar6 + 0x68) = 0;
      *(undefined8 *)(pCVar6 + 0x70) = 0;
      *(undefined **)pCVar6 = puVar4 + 0x10;
      *(undefined8 *)(pCVar6 + 0x75) = 0;
      *(undefined8 *)(pCVar6 + 0x85) = 0;
      *(undefined8 *)(pCVar6 + 0x80) = 0;
      *(undefined8 *)(pCVar6 + 0x90) = 0;
      *(undefined8 *)(pCVar6 + 0x98) = 0;
      *(undefined8 *)(pCVar6 + 0xa5) = 0;
      *(undefined8 *)(pCVar6 + 0xa0) = 0;
      *(Component **)(pCVar6 + 0x60) = pCVar7;
      *(undefined8 *)(pCVar6 + 0xb0) = uVar3;
      *(undefined8 *)(pCVar6 + 0xb8) = 0;
      Caver::SceneObject::AddComponent(this_00,pCVar6);
    }
    *(float *)(pCVar6 + 0x80) = fVar8;
    pCVar6[0x7c] = (Component)0x1;
    *(float *)(pCVar6 + 0x84) = fVar8 - *(float *)(*(long *)(pCVar6 + 0x28) + 0x80);
    *(undefined4 *)(pCVar6 + 0x88) = uVar9;
  }
  return 0;
}


