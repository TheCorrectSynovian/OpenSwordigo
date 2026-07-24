/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003213a0
 * Function: FUN_003213a0
 * Signature: undefined FUN_003213a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003213a0(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  SceneObject *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar3;
  }
  iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
  bVar1 = Caver::ProgramState::BoolAtStackIndex(this,3);
  if (((this_00 != (SceneObject *)0x0) && (iVar2 != 0)) &&
     (lVar4 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar2), lVar4 != 0)) {
    *(byte *)(*(long *)(lVar4 + 0x90) + 0x39) = bVar1 & 1;
  }
  return 0;
}


