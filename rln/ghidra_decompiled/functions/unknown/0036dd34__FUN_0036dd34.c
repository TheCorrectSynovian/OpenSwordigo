/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036dd34
 * Function: FUN_0036dd34
 * Signature: undefined FUN_0036dd34(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036dd34(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  Component *pCVar3;
  SwingableWeaponControllerComponent *this_00;
  long lVar4;
  SceneObject *this_01;
  float fVar5;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    this_01 = (SceneObject *)0x0;
  }
  else {
    this_01 = (SceneObject *)*puVar2;
  }
  iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
  fVar5 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  if (this_01 == (SceneObject *)0x0) {
    return 0;
  }
  pCVar3 = (Component *)
           Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e7bc0);
  this_00 = (SwingableWeaponControllerComponent *)
            Caver::SceneObject::ComponentWithIdentifier(this_01,iVar1);
  if (pCVar3 == (Component *)0x0) {
    return 0;
  }
  if (this_00 == (SwingableWeaponControllerComponent *)0x0) {
    return 0;
  }
  lVar4 = *(long *)(pCVar3 + 0x80);
  if (lVar4 == 0) {
    Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x70),pCVar3);
    lVar4 = *(long *)(pCVar3 + 0x80);
    if (lVar4 == 0) {
      iVar1 = 0;
      goto LAB_0036ddd8;
    }
  }
  iVar1 = *(int *)(lVar4 + 0x70);
LAB_0036ddd8:
  Caver::SwingableWeaponControllerComponent::StartSwing(this_00,iVar1,0.0,fVar5);
  return 0;
}


