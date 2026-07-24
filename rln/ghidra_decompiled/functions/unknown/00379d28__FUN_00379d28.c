/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00379d28
 * Function: FUN_00379d28
 * Signature: undefined FUN_00379d28(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00379d28(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  ItemDropComponent *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) &&
     (this_00 = (ItemDropComponent *)
                Caver::SceneObject::ComponentWithInterface
                          ((SceneObject *)*puVar1,(long)PTR_Interface_007e60a0),
     this_00 != (ItemDropComponent *)0x0)) {
    Caver::ItemDropComponent::CreateItemObjects(this_00);
    if (*(long *)(this_00 + 0xa0) != *(long *)(this_00 + 0x98)) {
      Caver::ItemDropComponent::DropItemObjects(this_00,(vector *)(this_00 + 0x98));
    }
  }
  return 0;
}


