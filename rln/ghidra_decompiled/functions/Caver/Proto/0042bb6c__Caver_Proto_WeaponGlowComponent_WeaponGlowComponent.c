/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bb6c
 * Function: Caver::Proto::WeaponGlowComponent::WeaponGlowComponent
 * Signature: undefined __thiscall WeaponGlowComponent(WeaponGlowComponent * this, WeaponGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(Caver::Proto::WeaponGlowComponent const&)
    */

void __thiscall
Caver::Proto::WeaponGlowComponent::WeaponGlowComponent
          (WeaponGlowComponent *this,WeaponGlowComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6f60;
                    /* try { // try from 0042bb80 to 0052bb87 has its CatchHandler @ 0042bd7c */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


