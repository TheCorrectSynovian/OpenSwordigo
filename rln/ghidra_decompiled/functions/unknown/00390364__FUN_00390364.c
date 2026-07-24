/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390364
 * Function: FUN_00390364
 * Signature: undefined FUN_00390364(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00390364(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  SceneObject *pSVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar4 = 0;
  if (((puVar2 != (undefined8 *)0x0) && (uVar4 = 0, (SceneObject *)*puVar2 != (SceneObject *)0x0))
     && (lVar3 = Caver::SceneObject::ComponentWithInterface
                           ((SceneObject *)*puVar2,(long)PTR_Interface_007e6868), uVar4 = 0,
        lVar3 != 0)) {
    pSVar5 = *(SceneObject **)(lVar3 + 0x70);
    if (pSVar5 != (SceneObject *)0x0) {
      *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
    }
    Caver::SceneObjectLib::PushSceneObject(this,pSVar5);
    if ((pSVar5 != (SceneObject *)0x0) &&
       (iVar1 = *(int *)(pSVar5 + 8), *(int *)(pSVar5 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*(long *)pSVar5 + 8))(pSVar5);
    }
    uVar4 = 1;
  }
  return uVar4;
}


