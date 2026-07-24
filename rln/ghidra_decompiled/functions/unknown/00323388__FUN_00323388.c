/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323388
 * Function: FUN_00323388
 * Signature: undefined FUN_00323388(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00323388(lua_State *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined *puVar8;
  ProgramState *this;
  undefined8 *puVar9;
  Component *pCVar10;
  long *plVar11;
  long *plVar12;
  Component *pCVar13;
  long *plVar14;
  SceneObject *this_00;
  float fVar15;
  long *local_50;
  long *plStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar9 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar9 == (undefined8 *)0x0) ||
     (this_00 = (SceneObject *)*puVar9, this_00 == (SceneObject *)0x0)) goto LAB_00323520;
  local_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  local_40 = 0;
  Caver::SceneObject::GetComponentsWithInterface<Caver::LightComponent>(this_00,(vector *)&local_50)
  ;
  if (local_50 == plStack_48) {
LAB_00323410:
    pCVar10 = operator_new(0xb0);
    *(undefined4 *)(pCVar10 + 8) = 0;
    *(undefined8 *)(pCVar10 + 0x20) = 0;
    *(undefined8 *)(pCVar10 + 0x28) = 0;
    pCVar10[0x30] = (Component)0x0;
    puVar8 = PTR_vtable_007e5ed0;
    puVar1 = PTR_vtable_007e5ed0 + 0x128;
    puVar2 = PTR_vtable_007e5ed0 + 0x168;
    *(undefined **)(pCVar10 + 0x38) = PTR_DAT_007e5de8 + 0x18;
    pCVar13 = pCVar10 + 0x48;
    *(undefined8 *)pCVar13 = 0;
    *(undefined **)(pCVar10 + 0x18) = puVar2;
    *(undefined **)(pCVar10 + 0x10) = puVar1;
    uVar6 = _UNK_00683f28;
    uVar5 = _DAT_00683f20;
    *(undefined **)pCVar10 = puVar8 + 0x10;
    *(undefined4 *)(pCVar10 + 0xac) = 0xffffffff;
    *(undefined4 *)(pCVar10 + 0x80) = 0;
    *(undefined4 *)(pCVar10 + 0x84) = 0x3f800000;
    *(undefined8 *)(pCVar10 + 0x50) = 0;
    *(Component **)(pCVar10 + 0x58) = pCVar13;
    *(Component **)(pCVar10 + 0x60) = pCVar13;
    *(undefined8 *)(pCVar10 + 0x68) = 0;
    *(undefined8 *)(pCVar10 + 0xa4) = 0;
    *(undefined8 *)(pCVar10 + 0x78) = 0;
    *(undefined4 *)(pCVar10 + 0x70) = 4;
    *(undefined4 *)(pCVar10 + 0x74) = 0;
    *(undefined8 *)(pCVar10 + 0x9c) = uVar6;
    *(undefined8 *)(pCVar10 + 0x94) = uVar5;
    pCVar10[0x90] = (Component)0x0;
    Caver::SceneObject::AddComponent(this_00,pCVar10);
  }
  else {
    plVar12 = local_50;
    do {
      plVar14 = plVar12 + 1;
      pCVar10 = (Component *)*plVar12;
      if (*(int *)((Component *)*plVar12 + 0x70) == 4) break;
      plVar12 = plVar14;
      pCVar10 = (Component *)0x0;
    } while (plVar14 != plStack_48);
    if (pCVar10 == (Component *)0x0) goto LAB_00323410;
  }
  fVar15 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  plVar14 = plStack_48;
  fVar7 = DAT_00683f68;
  pCVar10[0x90] = (Component)0x1;
  *(float *)(pCVar10 + 0x88) = fVar15;
  *(float *)(pCVar10 + 0x8c) = (fVar15 - *(float *)(pCVar10 + 0x74)) / fVar7;
  for (plVar12 = local_50; plVar12 != plVar14; plVar12 = plVar12 + 1) {
    plVar11 = (long *)*plVar12;
    if ((plVar11 != (long *)0x0) &&
       (iVar3 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if (local_50 != (long *)0x0) {
    operator_delete(local_50);
  }
LAB_00323520:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


