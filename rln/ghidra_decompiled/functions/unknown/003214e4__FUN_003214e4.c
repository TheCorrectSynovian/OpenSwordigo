/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003214e4
 * Function: FUN_003214e4
 * Signature: undefined FUN_003214e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003214e4(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  SceneObject *this_00;
  float fVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar2;
  }
  iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
  fVar5 = 0.0;
  if (((this_00 != (SceneObject *)0x0) && (fVar5 = 0.0, iVar1 != 0)) &&
     (plVar3 = (long *)Caver::SceneObject::ComponentWithIdentifier(this_00,iVar1),
     plVar3 != (long *)0x0)) {
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    fVar5 = *(float *)(lVar4 + 0x28) / (*(float *)(lVar4 + 0x30) * *(float *)(lVar4 + 0x34));
  }
  Caver::ProgramState::PushFloat(this,fVar5);
  return 1;
}


