/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371a94
 * Function: FUN_00371a94
 * Signature: undefined FUN_00371a94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00371a94(lua_State *param_1)

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
                      ((SceneObject *)*puVar2,(long)PTR_Interface_007e7ab0);
    uVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (lVar3 != 0) {
      if ((int)*(uint *)(lVar3 + 0x70) <= (int)uVar1) {
        uVar1 = *(uint *)(lVar3 + 0x70);
      }
      *(uint *)(lVar3 + 0x74) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    }
  }
  return 0;
}


