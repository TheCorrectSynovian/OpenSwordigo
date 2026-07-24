/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042a95c
 * Function: Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent
 * Signature: undefined __thiscall SwingableWeaponControllerComponent(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent() */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent
          (SwingableWeaponControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
                    /* catch() { ... } // from try @ 0042a94c with catch @ 0042a95c */
  puVar1 = PTR_vtable_007e6528;
  *(undefined8 *)(this + 8) = 0;
  puVar3 = PTR__default_weapon_template_name__007e78e0;
  puVar2 = PTR__default_controlling_bone_name__007e7410;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


