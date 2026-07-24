/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321428
 * Function: FUN_00321428
 * Signature: undefined FUN_00321428(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00321428(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  SceneObject *this_00;
  float fVar6;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar2;
  }
  iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
  fVar6 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  if (((this_00 != (SceneObject *)0x0) && (iVar1 != 0)) &&
     (plVar3 = (long *)Caver::SceneObject::ComponentWithIdentifier(this_00,iVar1),
     plVar3 != (long *)0x0)) {
    lVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
    lVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
    *(float *)(lVar4 + 0xc) = fVar6 * *(float *)(lVar5 + 0x30) * *(float *)(lVar5 + 0x34);
  }
  return 0;
}


