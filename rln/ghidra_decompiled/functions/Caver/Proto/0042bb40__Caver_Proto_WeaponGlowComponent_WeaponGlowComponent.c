/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bb40
 * Function: Caver::Proto::WeaponGlowComponent::WeaponGlowComponent
 * Signature: undefined __thiscall WeaponGlowComponent(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::WeaponGlowComponent() */

void __thiscall Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(WeaponGlowComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6f60;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 0042bb4c to 0052bb5f has its CatchHandler @ 0042bd08 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


