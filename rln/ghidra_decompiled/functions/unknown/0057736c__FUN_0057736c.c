/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057736c
 * Function: FUN_0057736c
 * Signature: undefined FUN_0057736c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0057736c(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  SceneObject *pSVar2;
  undefined8 uVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar3 = 0;
  if ((plVar1 != (long *)0x0) && (uVar3 = 0, (long *)*plVar1 != (long *)0x0)) {
    pSVar2 = (SceneObject *)(**(code **)(*(long *)*plVar1 + 0x10))();
    Caver::SceneObjectLib::PushSceneObject(this,pSVar2);
    uVar3 = 1;
  }
  return uVar3;
}


