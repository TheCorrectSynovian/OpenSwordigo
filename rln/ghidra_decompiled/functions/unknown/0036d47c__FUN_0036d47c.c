/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d47c
 * Function: FUN_0036d47c
 * Signature: undefined FUN_0036d47c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d47c(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  EntityActionComponent *this_00;
  long *plVar4;
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
      lVar3 = Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e7bc0);
      this_00 = (EntityActionComponent *)Caver::SceneObject::ComponentWithIdentifier(this_01,iVar1);
      if ((lVar3 != 0) && (this_00 != (EntityActionComponent *)0x0)) {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 2;
        plVar4 = *(long **)(lVar3 + 0x118);
        *(EntityActionComponent **)(lVar3 + 0x118) = this_00;
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar4 + 8))();
        }
        *(undefined1 *)(lVar3 + 0x120) = 0;
        *(undefined4 *)(lVar3 + 0x124) = 0;
        Caver::EntityActionComponent::Perform(this_00);
        iVar1 = *(int *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
      }
    }
  }
  return 0;
}


