/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d418
 * Function: FUN_0036d418
 * Signature: undefined FUN_0036d418(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d418(lua_State *param_1)

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
                           ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0), lVar2 != 0)) {
    fVar3 = *(float *)(lVar2 + 0xe4);
  }
  Caver::ProgramState::PushFloat(this,fVar3);
  return 1;
}


