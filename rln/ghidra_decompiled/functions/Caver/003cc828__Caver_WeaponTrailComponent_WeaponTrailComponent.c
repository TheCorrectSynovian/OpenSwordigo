/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc828
 * Function: Caver::WeaponTrailComponent::WeaponTrailComponent
 * Signature: undefined __thiscall WeaponTrailComponent(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::WeaponTrailComponent() */

void __thiscall Caver::WeaponTrailComponent::WeaponTrailComponent(WeaponTrailComponent *this)

{
  undefined *puVar1;
  WeaponTrailComponent *pWVar2;
  undefined1 auVar3 [16];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (WeaponTrailComponent)0x0;
  puVar1 = PTR_vtable_007e4f88;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pWVar2 = this + 0x48;
  *(undefined8 *)pWVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(WeaponTrailComponent **)(this + 0x58) = pWVar2;
  *(WeaponTrailComponent **)(this + 0x60) = pWVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  WeaponTrail::WeaponTrail((WeaponTrail *)(this + 0x70));
  auVar3 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0xb8) = auVar3._8_8_;
  *(long *)(this + 0xb0) = auVar3._0_8_;
  *(long *)(this + 200) = auVar3._8_8_;
  *(long *)(this + 0xc0) = auVar3._0_8_;
  WeaponTrail::InitWithMaxSegments((WeaponTrail *)(this + 0x70),100);
  return;
}


