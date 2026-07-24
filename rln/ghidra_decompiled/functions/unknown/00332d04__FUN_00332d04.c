/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332d04
 * Function: FUN_00332d04
 * Signature: undefined FUN_00332d04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00332d04(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  SceneObject *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar3;
    iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (this_00 != (SceneObject *)0x0) {
      if (iVar2 == 0) {
        lVar4 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6398);
        if (lVar4 == 0) {
          return 0;
        }
      }
      else {
        lVar4 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar2);
        if (lVar4 == 0) {
          return 0;
        }
      }
      if (*(long *)(lVar4 + 0xb0) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(*(long *)(lVar4 + 0xb0) + 0x53) == '\0';
      }
      Caver::ProgramState::PushBool(this,bVar1);
      return 1;
    }
  }
  return 0;
}


