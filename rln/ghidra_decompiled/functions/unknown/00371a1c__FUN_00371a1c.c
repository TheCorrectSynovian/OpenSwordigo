/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371a1c
 * Function: FUN_00371a1c
 * Signature: undefined FUN_00371a1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00371a1c(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar1 == (undefined8 *)0x0) || ((SceneObject *)*puVar1 == (SceneObject *)0x0)) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    lVar2 = Caver::SceneObject::ComponentWithInterface
                      ((SceneObject *)*puVar1,(long)PTR_Interface_007e7450);
    fVar3 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
    if (lVar2 != 0) {
      fVar4 = *(float *)(lVar2 + 0x94);
      if (*(float *)(lVar2 + 0x94) <= fVar3) {
        fVar4 = fVar3;
      }
      *(float *)(lVar2 + 0x94) = fVar4;
    }
  }
  return 0;
}


