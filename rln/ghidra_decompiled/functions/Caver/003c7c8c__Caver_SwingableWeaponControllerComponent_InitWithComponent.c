/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c7c8c
 * Function: Caver::SwingableWeaponControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SwingableWeaponControllerComponent * this, SwingableWeaponControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::InitWithComponent(Caver::SwingableWeaponControllerComponent
   const*) */

void __thiscall
Caver::SwingableWeaponControllerComponent::InitWithComponent
          (SwingableWeaponControllerComponent *this,SwingableWeaponControllerComponent *param_1)

{
  int iVar1;
  long *plVar2;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  if (*(int *)(this + 0x78) != *(int *)(param_1 + 0x78)) {
    plVar2 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  FUN_0066a6a8(this + 0x88,param_1 + 0x88);
  FUN_0066a6a8(this + 0x90,param_1 + 0x90);
  return;
}


