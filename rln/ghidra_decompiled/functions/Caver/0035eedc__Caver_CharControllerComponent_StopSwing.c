/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035eedc
 * Function: Caver::CharControllerComponent::StopSwing
 * Signature: undefined __thiscall StopSwing(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::StopSwing() */

void __thiscall Caver::CharControllerComponent::StopSwing(CharControllerComponent *this)

{
  SwingableWeaponControllerComponent *pSVar1;
  
  pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
  if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
    pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
    if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) goto LAB_0035ef0c;
  }
  SwingableWeaponControllerComponent::StopSwing(pSVar1);
LAB_0035ef0c:
  pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
  if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
    pSVar1 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
    if (pSVar1 == (SwingableWeaponControllerComponent *)0x0) {
      return;
    }
  }
  SwingableWeaponControllerComponent::StopSwing(pSVar1);
  return;
}


