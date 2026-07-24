/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042a994
 * Function: Caver::Proto::SwingableWeaponControllerComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::SharedCtor() */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::SharedCtor
          (SwingableWeaponControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 8) = 0;
  puVar2 = PTR__default_weapon_template_name__007e78e0;
  puVar1 = PTR__default_controlling_bone_name__007e7410;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


