/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330e34
 * Function: FUN_00330e34
 * Signature: undefined FUN_00330e34(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00330e34(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  PortalComponent *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) &&
     (this_00 = (PortalComponent *)
                Caver::SceneObject::ComponentWithInterface
                          ((SceneObject *)*puVar1,(long)PTR_Interface_007e68e8),
     this_00 != (PortalComponent *)0x0)) {
    Caver::PortalComponent::Activate(this_00);
  }
  return 0;
}


