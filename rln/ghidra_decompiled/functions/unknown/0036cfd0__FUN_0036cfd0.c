/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cfd0
 * Function: FUN_0036cfd0
 * Signature: undefined FUN_0036cfd0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036cfd0(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  Component *pCVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    pCVar3 = (Component *)0x0;
  }
  else {
    pCVar3 = (Component *)
             Caver::SceneObject::ComponentWithInterface
                       ((SceneObject *)*puVar2,(long)PTR_Interface_007e7bc0);
  }
  iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
  fVar6 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  if (pCVar3 != (Component *)0x0) {
    if (fVar6 <= DAT_00683734) {
      lVar4 = *(long *)(pCVar3 + 0x80);
      *(undefined4 *)(pCVar3 + 0x134) = 0;
      *(int *)(pCVar3 + 300) = iVar1;
      *(int *)(pCVar3 + 0x108) = iVar1;
      if (lVar4 == 0) {
        Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x70),pCVar3);
        lVar4 = *(long *)(pCVar3 + 0x80);
        iVar1 = *(int *)(pCVar3 + 0x108);
      }
      *(float *)(lVar4 + 0xb0) = *(float *)(pCVar3 + 0x10c) * (float)iVar1;
      lVar5 = *(long *)(pCVar3 + 0x100);
      if (lVar5 != 0) {
        if (lVar4 == 0) {
          Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x70),pCVar3);
          lVar4 = *(long *)(pCVar3 + 0x80);
        }
        *(bool *)(lVar5 + 0x39) = iVar1 != *(int *)(lVar4 + 0x70);
      }
    }
    else {
      if (*(int *)(pCVar3 + 300) == iVar1) {
        fVar7 = *(float *)(pCVar3 + 0x134);
        if (fVar6 <= *(float *)(pCVar3 + 0x134)) {
          fVar7 = fVar6;
        }
      }
      else {
        *(int *)(pCVar3 + 300) = iVar1;
        fVar7 = fVar6;
      }
      *(float *)(pCVar3 + 0x134) = fVar7;
    }
  }
  return 0;
}


