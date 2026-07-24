/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037186c
 * Function: FUN_0037186c
 * Signature: undefined FUN_0037186c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037186c(lua_State *param_1)

{
  uint uVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    lVar3 = Caver::SceneObject::ComponentWithInterface
                      ((SceneObject *)*puVar2,(long)PTR_Interface_007e7450);
    uVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x78) == '\0')) {
      if ((int)*(uint *)(lVar3 + 0x7c) <= (int)uVar1) {
        uVar1 = *(uint *)(lVar3 + 0x7c);
      }
      *(uint *)(lVar3 + 0x80) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    }
  }
  return 0;
}


