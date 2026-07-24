/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033da20
 * Function: FUN_0033da20
 * Signature: undefined FUN_0033da20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0033da20(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  TextBubbleComponent *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar2 != (undefined8 *)0x0) && ((SceneObject *)*puVar2 != (SceneObject *)0x0)) &&
     (this_00 = (TextBubbleComponent *)
                Caver::SceneObject::ComponentWithInterface
                          ((SceneObject *)*puVar2,(long)PTR_Interface_007e4f20),
     this_00 != (TextBubbleComponent *)0x0)) {
    bVar1 = Caver::ProgramState::BoolAtStackIndex(this,2);
    Caver::TextBubbleComponent::SetHandleTouches(this_00,(bool)(bVar1 & 1));
  }
  return 0;
}


