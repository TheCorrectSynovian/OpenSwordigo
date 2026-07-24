/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039fc10
 * Function: FUN_0039fc10
 * Signature: undefined FUN_0039fc10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0039fc10(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  SnappingMonsterControllerComponent *this_00;
  SceneObject *this_01;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((((puVar1 != (undefined8 *)0x0) &&
       (this_01 = (SceneObject *)*puVar1, this_01 != (SceneObject *)0x0)) &&
      (this_00 = (SnappingMonsterControllerComponent *)
                 Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e7830),
      this_00 != (SnappingMonsterControllerComponent *)0x0)) && (this_01[0xf0] != (SceneObject)0x0))
  {
    Caver::SnappingMonsterControllerComponent::Attack(this_00);
  }
  return 0;
}


