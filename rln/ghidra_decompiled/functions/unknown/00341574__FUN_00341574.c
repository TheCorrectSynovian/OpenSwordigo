/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341574
 * Function: FUN_00341574
 * Signature: undefined FUN_00341574(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00341574(lua_State *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ProgramState *this;
  undefined8 *puVar4;
  Component *pCVar5;
  Component *pCVar6;
  SceneObject *this_00;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar4 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar4;
  }
  puVar4 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  uVar7 = Caver::ProgramState::FloatAtStackIndex(this,3);
  if (this_00 != (SceneObject *)0x0) {
    pCVar5 = (Component *)
             Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6a60);
    if (pCVar5 == (Component *)0x0) {
      pCVar5 = operator_new(0xc0);
      *(undefined4 *)(pCVar5 + 8) = 0;
      *(undefined8 *)(pCVar5 + 0x20) = 0;
      *(undefined8 *)(pCVar5 + 0x28) = 0;
      pCVar5[0x30] = (Component)0x0;
      puVar3 = PTR_vtable_007e6898;
      puVar1 = PTR_vtable_007e6898 + 0x128;
      puVar2 = PTR_vtable_007e6898 + 0x168;
      *(undefined **)(pCVar5 + 0x38) = PTR_DAT_007e5de8 + 0x18;
      pCVar6 = pCVar5 + 0x48;
      *(undefined8 *)pCVar6 = 0;
      *(undefined **)(pCVar5 + 0x18) = puVar2;
      *(undefined **)(pCVar5 + 0x10) = puVar1;
      uVar9 = _DAT_00683948;
      *(undefined8 *)(pCVar5 + 0x50) = 0;
      *(Component **)(pCVar5 + 0x58) = pCVar6;
      *(undefined8 *)(pCVar5 + 0x68) = 0;
      *(undefined8 *)(pCVar5 + 0x70) = 0;
      *(undefined **)pCVar5 = puVar3 + 0x10;
      *(undefined8 *)(pCVar5 + 0x75) = 0;
      *(undefined8 *)(pCVar5 + 0x85) = 0;
      *(undefined8 *)(pCVar5 + 0x80) = 0;
      *(undefined8 *)(pCVar5 + 0x90) = 0;
      *(undefined8 *)(pCVar5 + 0x98) = 0;
      *(undefined8 *)(pCVar5 + 0xa5) = 0;
      *(undefined8 *)(pCVar5 + 0xa0) = 0;
      *(Component **)(pCVar5 + 0x60) = pCVar6;
      *(undefined8 *)(pCVar5 + 0xb0) = uVar9;
      *(undefined8 *)(pCVar5 + 0xb8) = 0;
      Caver::SceneObject::AddComponent(this_00,pCVar5);
    }
    uVar9 = *puVar4;
    fVar11 = *(float *)(puVar4 + 1);
    uVar13 = *(undefined8 *)(*(long *)(pCVar5 + 0x28) + 0x70);
    fVar15 = *(float *)(*(long *)(pCVar5 + 0x28) + 0x78);
    pCVar5[0x8c] = (Component)0x1;
    fVar12 = (float)uVar13;
    fVar8 = fVar12 + (float)uVar9;
    fVar14 = (float)((ulong)uVar13 >> 0x20);
    fVar10 = fVar14 + (float)((ulong)uVar9 >> 0x20);
    fVar11 = fVar15 + fVar11;
    *(ulong *)(pCVar5 + 0x90) = CONCAT44(fVar10,fVar8);
    *(float *)(pCVar5 + 0x98) = fVar11;
    *(ulong *)(pCVar5 + 0x9c) = CONCAT44(fVar10 - fVar14,fVar8 - fVar12);
    *(float *)(pCVar5 + 0xa4) = fVar11 - fVar15;
    *(undefined4 *)(pCVar5 + 0xa8) = uVar7;
  }
  return 0;
}


