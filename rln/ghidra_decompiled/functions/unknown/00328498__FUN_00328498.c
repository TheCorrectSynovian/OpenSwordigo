/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328498
 * Function: FUN_00328498
 * Signature: undefined FUN_00328498(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00328498(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  ModelTransformControllerComponent *this_00;
  SceneObject *this_01;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
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
      local_48 = *puVar2;
      local_40 = *(undefined4 *)(puVar2 + 1);
      Caver::Vector3::Normalize((Vector3 *)&local_48);
      *(undefined8 *)(this_00 + 0x98) = local_48;
      this_00[0x88] = (ModelTransformControllerComponent)0x1;
      *(undefined4 *)(this_00 + 0xa0) = local_40;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


