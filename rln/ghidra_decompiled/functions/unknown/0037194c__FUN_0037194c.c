/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037194c
 * Function: FUN_0037194c
 * Signature: undefined FUN_0037194c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0037194c(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  fVar3 = 0.0;
  if (((puVar1 != (undefined8 *)0x0) && (fVar3 = 0.0, (SceneObject *)*puVar1 != (SceneObject *)0x0))
     && (lVar2 = Caver::SceneObject::ComponentWithInterface
                           ((SceneObject *)*puVar1,(long)PTR_Interface_007e7450), lVar2 != 0)) {
    fVar3 = ((float)*(int *)(lVar2 + 0x80) * _DAT_0068782c) / (float)*(int *)(lVar2 + 0x7c);
  }
  Caver::ProgramState::PushFloat(this,fVar3);
  return 1;
}


