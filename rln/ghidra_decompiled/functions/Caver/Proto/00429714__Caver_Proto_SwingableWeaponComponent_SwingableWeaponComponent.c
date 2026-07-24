/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429714
 * Function: Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent
 * Signature: undefined __thiscall SwingableWeaponComponent(SwingableWeaponComponent * this, SwingableWeaponComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(Caver::Proto::SwingableWeaponComponent
   const&) */

void __thiscall
Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent
          (SwingableWeaponComponent *this,SwingableWeaponComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4a48;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


