/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003605c0
 * Function: FUN_003605c0
 * Signature: undefined FUN_003605c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003605c0(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  CharControllerComponent *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    Caver::ProgramState::BoolAtStackIndex(this,2);
  }
  else {
    this_00 = (CharControllerComponent *)
              Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar2,(long)PTR_Interface_007e7390);
    bVar1 = Caver::ProgramState::BoolAtStackIndex(this,2);
    if (((this_00 != (CharControllerComponent *)0x0) && (*(int *)(this_00 + 0x2d0) == 2)) &&
       (*(long *)(this_00 + 0x298) != 0)) {
      Caver::CharControllerComponent::Pickup(this_00,(SceneObject *)0x0,(bool)(bVar1 & 1));
    }
  }
  return 0;
}


