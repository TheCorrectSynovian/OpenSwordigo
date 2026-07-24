/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d1d8
 * Function: FUN_0036d1d8
 * Signature: undefined FUN_0036d1d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d1d8(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  Component *pCVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar1 == (undefined8 *)0x0) || ((SceneObject *)*puVar1 == (SceneObject *)0x0)) {
    pCVar2 = (Component *)0x0;
  }
  else {
    pCVar2 = (Component *)
             Caver::SceneObject::ComponentWithInterface
                       ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0);
  }
  uVar5 = Caver::ProgramState::FloatAtStackIndex(this,2);
  uVar3 = Caver::ProgramState::BoolAtStackIndex(this,3);
  if (pCVar2 == (Component *)0x0) {
    return 0;
  }
  lVar4 = *(long *)(pCVar2 + 0x80);
  *(undefined4 *)(pCVar2 + 0x110) = uVar5;
  if (lVar4 == 0) {
    Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar2 + 0x70),pCVar2);
    lVar4 = *(long *)(pCVar2 + 0x80);
    if (lVar4 == 0) goto LAB_0036d264;
  }
  *(undefined4 *)(lVar4 + 0xb4) = uVar5;
LAB_0036d264:
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(pCVar2 + 0xe4) = uVar5;
  }
  return 0;
}


