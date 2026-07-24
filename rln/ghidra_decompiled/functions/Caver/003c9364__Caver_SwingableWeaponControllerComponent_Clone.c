/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c9364
 * Function: Caver::SwingableWeaponControllerComponent::Clone
 * Signature: undefined __thiscall Clone(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::Clone() const */

SwingableWeaponControllerComponent * __thiscall
Caver::SwingableWeaponControllerComponent::Clone(SwingableWeaponControllerComponent *this)

{
  int iVar1;
  SwingableWeaponControllerComponent *this_00;
  long *plVar2;
  
  this_00 = operator_new(0xb0);
  SwingableWeaponControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  if (*(int *)(this_00 + 0x78) != *(int *)(this + 0x78)) {
    plVar2 = *(long **)(this_00 + 0x80);
    *(int *)(this_00 + 0x78) = *(int *)(this + 0x78);
    *(undefined8 *)(this_00 + 0x80) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  FUN_0066a6a8(this_00 + 0x88,this + 0x88);
  FUN_0066a6a8(this_00 + 0x90,this + 0x90);
  return this_00;
}


