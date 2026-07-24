/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ade8
 * Function: Caver::Proto::SwingableWeaponControllerComponent::Clear
 * Signature: undefined __thiscall Clear(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::Clear() */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::Clear(SwingableWeaponControllerComponent *this)

{
  SwingableWeaponControllerComponent SVar1;
  long *plVar2;
  uint uVar3;
  
  SVar1 = this[0x20];
  uVar3 = (uint)(byte)SVar1;
  if (SVar1 != (SwingableWeaponControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)SVar1 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10),
       plVar2 != (long *)PTR__default_controlling_bone_name__007e7410)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x20);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18),
       plVar2 != (long *)PTR__default_weapon_template_name__007e78e0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


