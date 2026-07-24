/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cde4
 * Function: FUN_0036cde4
 * Signature: undefined FUN_0036cde4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036cde4(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  Component *pCVar2;
  int iVar3;
  long lVar4;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 == (undefined8 *)0x0) || ((SceneObject *)*puVar1 == (SceneObject *)0x0)) ||
     (pCVar2 = (Component *)
               Caver::SceneObject::ComponentWithInterface
                         ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0),
     pCVar2 == (Component *)0x0)) {
LAB_0036ce44:
    iVar3 = 0;
  }
  else {
    lVar4 = *(long *)(pCVar2 + 0x80);
    if (lVar4 == 0) {
      Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar2 + 0x70),pCVar2);
      lVar4 = *(long *)(pCVar2 + 0x80);
      if (lVar4 == 0) goto LAB_0036ce44;
    }
    iVar3 = *(int *)(lVar4 + 0x70);
  }
  Caver::ProgramState::PushInt(this,iVar3);
  return 1;
}


