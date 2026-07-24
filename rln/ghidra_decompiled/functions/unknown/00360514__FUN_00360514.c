/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00360514
 * Function: FUN_00360514
 * Signature: undefined FUN_00360514(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00360514(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  CharControllerComponent *this_00;
  SceneObject *pSVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    this_00 = (CharControllerComponent *)0x0;
  }
  else {
    this_00 = (CharControllerComponent *)
              Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar2,(long)PTR_Interface_007e7390);
  }
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if (puVar2 == (undefined8 *)0x0) {
    pSVar3 = (SceneObject *)0x0;
  }
  else {
    pSVar3 = (SceneObject *)*puVar2;
  }
  bVar1 = Caver::ProgramState::BoolAtStackIndex(this,3);
  if (((this_00 != (CharControllerComponent *)0x0) && (pSVar3 != (SceneObject *)0x0)) &&
     ((*(int *)(this_00 + 0x2d0) != 2 || (*(long *)(this_00 + 0x298) == 0)))) {
    Caver::CharControllerComponent::Pickup(this_00,pSVar3,(bool)(bVar1 & 1));
  }
  return 0;
}


