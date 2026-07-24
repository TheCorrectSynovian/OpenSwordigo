/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b8d0
 * Function: FUN_0031b8d0
 * Signature: undefined FUN_0031b8d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0031b8d0(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  SceneObject *pSVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    pSVar5 = (SceneObject *)0x0;
  }
  else {
    pSVar5 = (SceneObject *)*puVar3;
  }
  iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
  bVar1 = Caver::ProgramState::BoolAtStackIndex(this,3);
  if ((((pSVar5 != (SceneObject *)0x0) && (iVar2 != 0)) &&
      (lVar4 = Caver::SceneObject::ComponentWithIdentifier(pSVar5,iVar2), lVar4 != 0)) &&
     ((((bVar1 & 1) != *(byte *)(lVar4 + 0x178) &&
       (*(byte *)(lVar4 + 0x178) = bVar1 & 1, (bVar1 & 1) != 0)) &&
      (pSVar5 = *(SceneObject **)(lVar4 + 0x28), pSVar5[0xb4] == (SceneObject)0x0)))) {
    Caver::SceneObject::RegisterForWorldBoundsUpdate(pSVar5);
    pSVar5[0xb4] = (SceneObject)0x1;
  }
  return 0;
}


