/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c909c
 * Function: Caver::SwingableWeaponControllerComponent::StartSwing
 * Signature: undefined __thiscall StartSwing(SwingableWeaponControllerComponent * this, int param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::StartSwing(int, float, float) */

void __thiscall
Caver::SwingableWeaponControllerComponent::StartSwing
          (SwingableWeaponControllerComponent *this,int param_1,float param_2,float param_3)

{
  *(int *)(this + 0xa8) = param_1;
  if (*(SwingableWeaponComponent **)(this + 0x98) != (SwingableWeaponComponent *)0x0) {
    SwingableWeaponComponent::StartSwing
              (*(SwingableWeaponComponent **)(this + 0x98),param_1,param_2,param_3);
    return;
  }
  return;
}


