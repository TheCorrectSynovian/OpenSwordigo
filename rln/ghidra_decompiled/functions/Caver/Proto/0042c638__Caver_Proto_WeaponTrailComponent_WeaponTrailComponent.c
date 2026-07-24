/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c638
 * Function: Caver::Proto::WeaponTrailComponent::WeaponTrailComponent
 * Signature: undefined __thiscall WeaponTrailComponent(WeaponTrailComponent * this, WeaponTrailComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(Caver::Proto::WeaponTrailComponent
   const&) */

void __thiscall
Caver::Proto::WeaponTrailComponent::WeaponTrailComponent
          (WeaponTrailComponent *this,WeaponTrailComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7db8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


