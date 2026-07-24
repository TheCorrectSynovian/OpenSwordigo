/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d0ec
 * Function: FUN_0036d0ec
 * Signature: undefined FUN_0036d0ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0036d0ec(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  Component *pCVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar1 == (undefined8 *)0x0) || ((SceneObject *)*puVar1 == (SceneObject *)0x0)) {
    pCVar2 = (Component *)0x0;
  }
  else {
    pCVar2 = (Component *)
             Caver::SceneObject::ComponentWithInterface
                       ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0);
  }
  fVar5 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  uVar3 = Caver::ProgramState::BoolAtStackIndex(this,3);
  if (pCVar2 == (Component *)0x0) {
    return 0;
  }
  lVar4 = *(long *)(pCVar2 + 0x80);
  *(float *)(pCVar2 + 0x10c) = fVar5;
  if (lVar4 == 0) {
    Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar2 + 0x70),pCVar2);
    lVar4 = *(long *)(pCVar2 + 0x80);
    if (lVar4 == 0) goto LAB_0036d184;
  }
  *(float *)(lVar4 + 0xb0) = fVar5 * (float)*(int *)(pCVar2 + 0x108);
LAB_0036d184:
  if ((*(long *)(pCVar2 + 0x100) != 0) && (DAT_00683944 < *(float *)(pCVar2 + 0x10c))) {
    *(float *)(*(long *)(pCVar2 + 0x100) + 0x34) =
         *(float *)(pCVar2 + 0x10c) / (*(float *)(*(long *)(pCVar2 + 0x28) + 0x8c) * _DAT_0068782c);
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(pCVar2 + 0xe0) = fVar5;
  }
  return 0;
}


