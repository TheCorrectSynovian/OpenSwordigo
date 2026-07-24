/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d990
 * Function: FUN_0033d990
 * Signature: undefined FUN_0033d990(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0033d990(lua_State *param_1)

{
  bool bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) ||
      (lVar3 = Caver::SceneObject::ComponentWithInterface
                         ((SceneObject *)*puVar2,(long)PTR_Interface_007e4f20), lVar3 == 0)) ||
     (*(ulong *)(*(long *)(lVar3 + 0x78) + 0x80) <
      *(long *)(*(long *)(*(long *)(lVar3 + 0x78) + 0x28) + -0x18) - 1U)) {
    bVar1 = false;
  }
  else if (*(char *)(lVar3 + 0x74) == '\0') {
    bVar1 = true;
  }
  else {
    bVar1 = *(char *)(lVar3 + 0x75) == '\0';
  }
  Caver::ProgramState::PushBool(this,bVar1);
  return 1;
}


