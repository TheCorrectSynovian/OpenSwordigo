/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035cf88
 * Function: Caver::CharControllerComponent::SetWeaponsHidden
 * Signature: undefined __thiscall SetWeaponsHidden(CharControllerComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::SetWeaponsHidden(bool) */

void __thiscall
Caver::CharControllerComponent::SetWeaponsHidden(CharControllerComponent *this,bool param_1)

{
  SwingableWeaponControllerComponent *pSVar1;
  
  pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
  this[0x1c8] = (CharControllerComponent)param_1;
  if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
    pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
    if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) goto LAB_0035cfcc;
  }
  SwingableWeaponControllerComponent::SetWeaponHidden(pSVar1,param_1);
LAB_0035cfcc:
  pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
  if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
    pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
    if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) {
      return;
    }
  }
  SwingableWeaponControllerComponent::SetWeaponHidden(pSVar1,param_1);
  return;
}


