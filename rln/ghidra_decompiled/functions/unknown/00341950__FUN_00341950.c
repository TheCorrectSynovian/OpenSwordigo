/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341950
 * Function: FUN_00341950
 * Signature: undefined FUN_00341950(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00341950(lua_State *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  undefined *puVar4;
  ProgramState *this;
  undefined8 *puVar5;
  Component *pCVar6;
  Component *pCVar7;
  SceneObject *this_00;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar5;
  }
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  uVar8 = Caver::ProgramState::FloatAtStackIndex(this,3);
  if (this_00 != (SceneObject *)0x0) {
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
      uVar9 = _DAT_00683948;
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
      *(undefined8 *)(pCVar6 + 0xb0) = uVar9;
      *(undefined8 *)(pCVar6 + 0xb8) = 0;
      Caver::SceneObject::AddComponent(this_00,pCVar6);
    }
    pCVar6[0x8c] = (Component)0x1;
    uVar9 = *puVar5;
    *(undefined8 *)(pCVar6 + 0x90) = uVar9;
    fVar3 = *(float *)(puVar5 + 1);
    *(float *)(pCVar6 + 0x98) = fVar3;
    uVar10 = *(undefined8 *)(*(long *)(pCVar6 + 0x28) + 0x70);
    fVar11 = *(float *)(*(long *)(pCVar6 + 0x28) + 0x78);
    *(ulong *)(pCVar6 + 0x9c) =
         CONCAT44((float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                  (float)uVar9 - (float)uVar10);
    *(float *)(pCVar6 + 0xa4) = fVar3 - fVar11;
    *(undefined4 *)(pCVar6 + 0xa8) = uVar8;
  }
  return 0;
}


