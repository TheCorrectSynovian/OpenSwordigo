/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036064c
 * Function: FUN_0036064c
 * Signature: undefined FUN_0036064c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036064c(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  Component *pCVar3;
  SwingableWeaponControllerComponent *pSVar4;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    Caver::ProgramState::BoolAtStackIndex(this,2);
    return 0;
  }
  pCVar3 = (Component *)
           Caver::SceneObject::ComponentWithInterface
                     ((SceneObject *)*puVar2,(long)PTR_Interface_007e7390);
  bVar1 = Caver::ProgramState::BoolAtStackIndex(this,2);
  if (pCVar3 == (Component *)0x0) {
    return 0;
  }
  pSVar4 = *(SwingableWeaponControllerComponent **)(pCVar3 + 0x1c0);
  pCVar3[0x1c8] = (Component)(bVar1 & 1);
  if (pSVar4 == (SwingableWeaponControllerComponent *)0x0) {
    Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x1b0),pCVar3);
    pSVar4 = *(SwingableWeaponControllerComponent **)(pCVar3 + 0x1c0);
    if (pSVar4 == (SwingableWeaponControllerComponent *)0x0) goto LAB_003606c8;
  }
  Caver::SwingableWeaponControllerComponent::SetWeaponHidden(pSVar4,(bool)(bVar1 & 1));
LAB_003606c8:
  pSVar4 = *(SwingableWeaponControllerComponent **)(pCVar3 + 0x1a8);
  if (pSVar4 == (SwingableWeaponControllerComponent *)0x0) {
    Caver::ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar3 + 0x198),pCVar3);
    pSVar4 = *(SwingableWeaponControllerComponent **)(pCVar3 + 0x1a8);
    if (pSVar4 == (SwingableWeaponControllerComponent *)0x0) {
      return 0;
    }
  }
  Caver::SwingableWeaponControllerComponent::SetWeaponHidden(pSVar4,(bool)(bVar1 & 1));
  return 0;
}


