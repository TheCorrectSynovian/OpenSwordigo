/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d634
 * Function: FUN_0036d634
 * Signature: undefined FUN_0036d634(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d634(lua_State *param_1)

{
  int iVar1;
  bool bVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  long *unaff_x19;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  bVar2 = true;
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    bVar5 = false;
  }
  else if (((SceneObject *)*puVar3 == (SceneObject *)0x0) ||
          (lVar4 = Caver::SceneObject::ComponentWithInterface
                             ((SceneObject *)*puVar3,(long)PTR_Interface_007e7bc0), lVar4 == 0)) {
    bVar5 = false;
    bVar2 = true;
  }
  else {
    unaff_x19 = *(long **)(lVar4 + 0x118);
    if (unaff_x19 == (long *)0x0) {
      bVar2 = false;
      bVar5 = true;
    }
    else {
      bVar2 = false;
      bVar5 = false;
      *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
    }
  }
  Caver::ProgramState::PushBool(this,bVar5);
  if ((!bVar2 && unaff_x19 != (long *)0x0) &&
     (iVar1 = (int)unaff_x19[1] + -1, *(int *)(unaff_x19 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*unaff_x19 + 8))(unaff_x19);
  }
  return 1;
}


