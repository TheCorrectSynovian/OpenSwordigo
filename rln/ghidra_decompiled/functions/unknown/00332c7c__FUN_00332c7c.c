/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332c7c
 * Function: FUN_00332c7c
 * Signature: undefined FUN_00332c7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00332c7c(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  ProgramComponent *this_00;
  SceneObject *this_01;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    this_01 = (SceneObject *)*puVar2;
    iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (this_01 != (SceneObject *)0x0) {
      if (iVar1 == 0) {
        this_00 = (ProgramComponent *)
                  Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e6398);
      }
      else {
        this_00 = (ProgramComponent *)Caver::SceneObject::ComponentWithIdentifier(this_01,iVar1);
      }
      if (this_00 != (ProgramComponent *)0x0) {
        Caver::ProgramComponent::Execute(this_00);
      }
    }
  }
  return 0;
}


