/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328598
 * Function: FUN_00328598
 * Signature: undefined FUN_00328598(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00328598(lua_State *param_1)

{
  float fVar1;
  ProgramState *this;
  undefined8 *puVar2;
  ModelTransformControllerComponent *this_00;
  SceneObject *this_01;
  float fVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    this_01 = (SceneObject *)*puVar2;
    fVar3 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
    if (this_01 != (SceneObject *)0x0) {
      this_00 = (ModelTransformControllerComponent *)
                Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6188);
      if (this_00 == (ModelTransformControllerComponent *)0x0) {
        this_00 = operator_new(0xb0);
        Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(this_00);
        Caver::SceneObject::AddComponent(this_01,(Component *)this_00);
      }
      fVar1 = DAT_00684004;
      this_00[0x88] = (ModelTransformControllerComponent)0x1;
      *(float *)(this_00 + 0xa4) = fVar3 * fVar1;
    }
  }
  return 0;
}


