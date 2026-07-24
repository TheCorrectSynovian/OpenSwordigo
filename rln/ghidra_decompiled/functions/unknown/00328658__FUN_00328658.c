/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328658
 * Function: FUN_00328658
 * Signature: undefined FUN_00328658(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00328658(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  ModelTransformControllerComponent *this_00;
  SceneObject *this_01;
  float fVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar1 == (undefined8 *)0x0) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    this_01 = (SceneObject *)*puVar1;
    fVar2 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
    if (this_01 != (SceneObject *)0x0) {
      this_00 = (ModelTransformControllerComponent *)
                Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6188);
      if (this_00 == (ModelTransformControllerComponent *)0x0) {
        this_00 = operator_new(0xb0);
        Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(this_00);
        Caver::SceneObject::AddComponent(this_01,(Component *)this_00);
      }
      *(float *)(this_00 + 0xa8) = fVar2 * DAT_00684004;
    }
  }
  return 0;
}


