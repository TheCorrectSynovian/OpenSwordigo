/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036974c
 * Function: FUN_0036974c
 * Signature: undefined FUN_0036974c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036974c(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  SceneObject *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar2;
    iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (((this_00 != (SceneObject *)0x0) &&
        (lVar3 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6c60),
        lVar3 != 0)) && (*(int *)(lVar3 + 0x70) != iVar1)) {
      *(int *)(lVar3 + 0x70) = iVar1;
      *(byte *)(*(long *)(lVar3 + 0x28) + 0x90) = (byte)((uint)iVar1 >> 0x1f);
    }
  }
  return 0;
}


