/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b34e4
 * Function: FUN_003b34e4
 * Signature: undefined FUN_003b34e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003b34e4(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  DoorControllerComponent *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) &&
     (this_00 = (DoorControllerComponent *)
                Caver::SceneObject::ComponentWithInterface
                          ((SceneObject *)*puVar1,(long)PTR_Interface_007e5858),
     this_00 != (DoorControllerComponent *)0x0)) {
    Caver::DoorControllerComponent::Close(this_00);
  }
  return 0;
}


