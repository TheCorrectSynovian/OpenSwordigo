/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004296d8
 * Function: Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent
 * Signature: undefined __thiscall SwingableWeaponComponent(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent() */

void __thiscall
Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(SwingableWeaponComponent *this)

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
                    /* catch() { ... } // from try @ 00429198 with catch @ 004296f4 */
  *(undefined **)this = puVar1 + 0x10;
                    /* catch() { ... } // from try @ 0042913c with catch @ 004296f8 */
  return;
}


