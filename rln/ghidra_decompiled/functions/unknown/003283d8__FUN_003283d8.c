/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003283d8
 * Function: FUN_003283d8
 * Signature: undefined FUN_003283d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003283d8(lua_State *param_1)

{
  undefined4 uVar1;
  ProgramState *this;
  undefined8 *puVar2;
  ModelTransformControllerComponent *this_00;
  SceneObject *this_01;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::PointerAtStackIndex(this,2);
  }
  else {
    this_01 = (SceneObject *)*puVar2;
    puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
    if (this_01 != (SceneObject *)0x0) {
      this_00 = (ModelTransformControllerComponent *)
                Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6188);
      if (this_00 == (ModelTransformControllerComponent *)0x0) {
        this_00 = operator_new(0xb0);
        Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(this_00);
        Caver::SceneObject::AddComponent(this_01,(Component *)this_00);
      }
      *(undefined8 *)(this_00 + 0x8c) = *puVar2;
      uVar1 = *(undefined4 *)(puVar2 + 1);
      this_00[0x88] = (ModelTransformControllerComponent)0x1;
      *(undefined4 *)(this_00 + 0x94) = uVar1;
    }
  }
  return 0;
}


