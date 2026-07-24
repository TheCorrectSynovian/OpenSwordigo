/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336564
 * Function: Caver::ShadowVolumeComponent::ShadowVolumeComponent
 * Signature: undefined __thiscall ShadowVolumeComponent(ShadowVolumeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowVolumeComponent::ShadowVolumeComponent() */

void __thiscall Caver::ShadowVolumeComponent::ShadowVolumeComponent(ShadowVolumeComponent *this)

{
  undefined *puVar1;
  ShadowVolumeComponent *pSVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ShadowVolumeComponent)0x0;
  puVar1 = PTR_vtable_007e5730;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pSVar2 = this + 0x48;
  *(undefined8 *)pSVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ShadowVolumeComponent **)(this + 0x58) = pSVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(ShadowVolumeComponent **)(this + 0x60) = pSVar2;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}


