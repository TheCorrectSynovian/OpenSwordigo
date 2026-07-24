/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003697d4
 * Function: FUN_003697d4
 * Signature: undefined FUN_003697d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003697d4(lua_State *param_1)

{
  bool bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) ||
      (lVar3 = Caver::SceneObject::ComponentWithInterface
                         ((SceneObject *)*puVar2,(long)PTR_Interface_007e6c60), lVar3 == 0)) ||
     ((_DAT_00684434 <= *(float *)(lVar3 + 0x80) || (*(float *)(lVar3 + 0x8c) <= 0.0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(lVar3 + 0x90) == '\0';
  }
  Caver::ProgramState::PushBool(this,bVar1);
  return 1;
}


